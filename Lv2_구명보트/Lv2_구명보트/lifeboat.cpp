// [Level2. ����Ʈ]
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> people, int limit) {
    int answer = 0, index = 0;

    // people �������� ����
    sort(people.begin(), people.end());

    // index���� Ŭ ���ȸ� �ݺ�
    while (people.size() > index) {
        // ���� ���ſ� ����� ���� back �� ����
        int back = people.back();
        // people���� ���� ���ſ� ��� pop
        people.pop_back();
        // ���� ���� ������ ����̶� ���� ���ſ� ��� ������ ���� limit ���� �۰ų� ������ index++
        if (people[index] + back <= limit)
            index++;
        // answer �� ������ 1 ����
        answer++;
    }
    return answer;
}