// [Level2. 괄호 회전하기]
#include <string>
#include <vector>
#include <stack>

using namespace std;

int solution(string s) {
    int answer = 0;

    for (int i = 0; i < s.length(); ++i) {
        stack<char> temp;
        bool flag = false;
        for (int i = 0; i < s.length(); ++i) {
            // 열린 괄호일 때 스택에 추가
            if (s[i] == '[' || s[i] == '{' || s[i] == '(') {
                // 열린 괄호 있으면 flag = true
                flag = true;
                temp.push(s[i]);
            }
            else {
                // 닫는 괄호일 때 top 이 짝이 맞는 괄호면 pop
                if (s[i] == ']' && temp.top() == '[')
                    temp.pop();
                if (s[i] == '}' && temp.top() == '{')
                    temp.pop();
                if (s[i] == ')' && temp.top() == '(')
                    temp.pop();
            }
        }
        // 스택이 비어있고, 열린 괄호가 있는 경우 answer++
        if (temp.empty() && flag)
            answer++;

        // 괄호 회전
        char ch = s.front();
        s.erase(s.begin());
        s.push_back(ch);
    }

    return answer;
}