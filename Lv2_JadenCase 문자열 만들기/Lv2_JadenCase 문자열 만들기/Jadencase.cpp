#include <string>
#include <vector>

using namespace std;

string solution(string s) {
    string answer = "";

    // ù ��° ���ڴ� ������ upper case
    answer += toupper(s[0]);

    for (int i = 1; i < s.size(); i++)
        // �� ���ڰ� �����̸� upper case
        if (s[i - 1] == ' ')
            answer += toupper(s[i]);
    // �� ���ڰ� ������ �ƴϸ� lower case
        else
            answer += tolower(s[i]);

    return answer;
}