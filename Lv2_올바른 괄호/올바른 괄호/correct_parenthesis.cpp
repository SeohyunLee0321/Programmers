#include<string>
#include <iostream>
#include<stack>

using namespace std;

/*bool solution(string s)
{
    bool answer = true;

    int opened = 0;
    int i = 0;

    while(s[i] != 0)
    {
        // s[i]�� ( �̸� opened++
        if(s[i] == '(')
            opened++;
        // s[i]�� ) �ε�,
        else
        {
            // ������ ( �� �� ���� �ȳ�������
            if(opened == 0)
            {
                // false return, break
                answer = false;
                break;
            }
            // ������ ( �� �������� ������ opened--
            else
                opened--;
        }
        // ���� index�� �Ѿ�� ���� i++
        i++;
    }
    // ���� opened�� 0�� �ƴϸ� (( �� )�� ���� ���� ������) false return
    if(opened != 0)
        answer = false;

    return answer;
}*/

// ���� �̿�
bool solution(string s)
{
    bool answer = true;
    stack<char> stk;

    for (int i = 0; i < s.size(); i++)
    {
        // s[i] �� ( �̸� ���ÿ� ( push
        if (s[i] == '(')
            stk.push('(');
        // s[i] �� ) �ε�,
        else
            // ������ ������� �ʰ� ������ �� ���� ( �̸� pop
            if (!stk.empty() && stk.top() == '(')
                stk.pop();
        // ������ ����ְų� ������ �� ���� ( �� �ƴ϶�� ) pusf
            else
                stk.push(')');
    }
    // ������ ��������� true return
    if (stk.empty())
        return true;
    // ������ ������� ������ false return
    else
        return false;

    return answer;
}