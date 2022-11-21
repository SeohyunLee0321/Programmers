// [Level2. ¦���� �����ϱ�]
#include <iostream>
#include <stack>
#include<string>
using namespace std;

int solution(string s)
{
    stack<char> str;
    // ���� s�� ���̰� 0�̰ų� Ȧ���� ¦���� ���� �Ұ� -> return 0
    if (s.length() == 0 || s.length() % 2 == 1)
        return 0;

    // ó������ s.length()���� �ݺ�
    for (int i = 0; i < s.length(); i++) {
        // ������ ����ְų� top�̶� s[i]�� �ٸ��� push
        if (str.empty() || str.top() != s[i])
            str.push(s[i]);
        // top�̶� s[i]�� ������ pop
        else if (str.top() == s[i])
            str.pop();
    }
    // ������ �������, �� ��� �����ߴٸ� return 1
    if (str.empty())
        return 1;
    // �׷��� ������ return 0
    return 0;
}