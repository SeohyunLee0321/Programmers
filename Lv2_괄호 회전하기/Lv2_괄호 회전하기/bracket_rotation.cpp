// [Level2. ��ȣ ȸ���ϱ�]
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
            // ���� ��ȣ�� �� ���ÿ� �߰�
            if (s[i] == '[' || s[i] == '{' || s[i] == '(') {
                // ���� ��ȣ ������ flag = true
                flag = true;
                temp.push(s[i]);
            }
            else {
                // �ݴ� ��ȣ�� �� top �� ¦�� �´� ��ȣ�� pop
                if (s[i] == ']' && temp.top() == '[')
                    temp.pop();
                if (s[i] == '}' && temp.top() == '{')
                    temp.pop();
                if (s[i] == ')' && temp.top() == '(')
                    temp.pop();
            }
        }
        // ������ ����ְ�, ���� ��ȣ�� �ִ� ��� answer++
        if (temp.empty() && flag)
            answer++;

        // ��ȣ ȸ��
        char ch = s.front();
        s.erase(s.begin());
        s.push_back(ch);
    }

    return answer;
}