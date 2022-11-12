#include <string>
#include <vector>

using namespace std;

string solution(string s) {
    string answer = "";

    // 첫 번째 글자는 무조건 upper case
    answer += toupper(s[0]);

    for (int i = 1; i < s.size(); i++)
        // 전 글자가 공백이면 upper case
        if (s[i - 1] == ' ')
            answer += toupper(s[i]);
    // 전 글자가 공백이 아니면 lower case
        else
            answer += tolower(s[i]);

    return answer;
}