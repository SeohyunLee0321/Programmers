// [Level2. 짝지어 제거하기]
#include <iostream>
#include <stack>
#include<string>
using namespace std;

int solution(string s)
{
    stack<char> str;
    // 만약 s의 길이가 0이거나 홀수면 짝지어 제거 불가 -> return 0
    if (s.length() == 0 || s.length() % 2 == 1)
        return 0;

    // 처음부터 s.length()까지 반복
    for (int i = 0; i < s.length(); i++) {
        // 스택이 비어있거나 top이랑 s[i]가 다르면 push
        if (str.empty() || str.top() != s[i])
            str.push(s[i]);
        // top이랑 s[i]가 같으면 pop
        else if (str.top() == s[i])
            str.pop();
    }
    // 스택이 비었으면, 즉 모두 제거했다면 return 1
    if (str.empty())
        return 1;
    // 그렇지 않으면 return 0
    return 0;
}