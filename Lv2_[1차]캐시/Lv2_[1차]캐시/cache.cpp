// [Level2. [1차]캐시]
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(int cacheSize, vector<string> cities) {
	vector<string>cache;
	int time = 0;

	// 캐시의 크기가 0 인 경우 : 캐시 hit 가 일어날 수 없음
	if (cacheSize == 0)
		return cities.size() * 5;
	for (int i = 0; i < cities.size(); i++) {
		int j = 0;
		//도시 이름을 소문자로 변환
		// transform(스트링 시작 주소, 스트링 끝 주소, 값을 저장할 주소, ::tolower) 
		transform(cities[i].begin(), cities[i].end(), cities[i].begin(), ::tolower);
		for (j = 0; j < cache.size(); j++) {
			// hit
			if (cities[i] == cache[j]) {
				// hit한 값을 가장 최근에 사용한 값으로 만들기
				// erase 한 후에 cache 벡터의 맨 뒤에 push back
				cache.erase(cache.begin() + j);
				cache.push_back(cities[i]);
				time += 1;
				break;
			}
		}
		// miss
		if (j == cache.size()) {
			time += 5;
			// 캐시 사이즈를 넘을 경우 (캐시에 빈자리 없는 경우)
			if (cache.size() >= cacheSize)
				// 가장 예전에 사용한 값 삭제
				cache.erase(cache.begin());
			// cache 벡터의 크기가 더 작은 경우와 cache 벡터의 크기가 같거나 더 큰 경우 모두 해당 도시의 이름을 push back 해준다
			// 캐시에 빈자리가 있든 없든
			cache.push_back(cities[i]);
		}
	}
	return time;
}