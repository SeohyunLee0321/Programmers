// [Level2. [1��]ĳ��]
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(int cacheSize, vector<string> cities) {
	vector<string>cache;
	int time = 0;

	// ĳ���� ũ�Ⱑ 0 �� ��� : ĳ�� hit �� �Ͼ �� ����
	if (cacheSize == 0)
		return cities.size() * 5;
	for (int i = 0; i < cities.size(); i++) {
		int j = 0;
		//���� �̸��� �ҹ��ڷ� ��ȯ
		// transform(��Ʈ�� ���� �ּ�, ��Ʈ�� �� �ּ�, ���� ������ �ּ�, ::tolower) 
		transform(cities[i].begin(), cities[i].end(), cities[i].begin(), ::tolower);
		for (j = 0; j < cache.size(); j++) {
			// hit
			if (cities[i] == cache[j]) {
				// hit�� ���� ���� �ֱٿ� ����� ������ �����
				// erase �� �Ŀ� cache ������ �� �ڿ� push back
				cache.erase(cache.begin() + j);
				cache.push_back(cities[i]);
				time += 1;
				break;
			}
		}
		// miss
		if (j == cache.size()) {
			time += 5;
			// ĳ�� ����� ���� ��� (ĳ�ÿ� ���ڸ� ���� ���)
			if (cache.size() >= cacheSize)
				// ���� ������ ����� �� ����
				cache.erase(cache.begin());
			// cache ������ ũ�Ⱑ �� ���� ���� cache ������ ũ�Ⱑ ���ų� �� ū ��� ��� �ش� ������ �̸��� push back ���ش�
			// ĳ�ÿ� ���ڸ��� �ֵ� ����
			cache.push_back(cities[i]);
		}
	}
	return time;
}