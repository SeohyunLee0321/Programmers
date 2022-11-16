// [Level2. 구명보트]
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> people, int limit) {
    int answer = 0, index = 0;

    // people 오름차순 정렬
    sort(people.begin(), people.end());

    // index보다 클 동안만 반복
    while (people.size() > index) {
        // 가장 무거운 사람의 무게 back 에 저장
        int back = people.back();
        // people에서 가장 무거운 사람 pop
        people.pop_back();
        // 만약 가장 가벼운 사람이랑 가장 무거운 사람 무게의 합이 limit 보다 작거나 같으면 index++
        if (people[index] + back <= limit)
            index++;
        // answer 는 무조건 1 증가
        answer++;
    }
    return answer;
}