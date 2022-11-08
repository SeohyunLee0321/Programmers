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
        // s[i]가 ( 이면 opened++
        if(s[i] == '(')
            opened++;
        // s[i]가 ) 인데,
        else
        {
            // 이전에 ( 가 한 번도 안나왔으면
            if(opened == 0)
            {
                // false return, break
                answer = false;
                break;
            }
            // 이전에 ( 가 나온적이 있으면 opened--
            else
                opened--;
        }
        // 다음 index로 넘어가기 위한 i++
        i++;
    }
    // 만약 opened가 0이 아니면 (( 와 )의 수가 맞지 않으면) false return
    if(opened != 0)
        answer = false;

    return answer;
}*/

// 스택 이용
bool solution(string s)
{
    bool answer = true;
    stack<char> stk;

    for (int i = 0; i < s.size(); i++)
    {
        // s[i] 가 ( 이면 스택에 ( push
        if (s[i] == '(')
            stk.push('(');
        // s[i] 가 ) 인데,
        else
            // 스택이 비어있지 않고 스택의 맨 위가 ( 이면 pop
            if (!stk.empty() && stk.top() == '(')
                stk.pop();
        // 스택이 비어있거나 스택의 맨 위가 ( 이 아니라면 ) pusf
            else
                stk.push(')');
    }
    // 스택이 비어있으면 true return
    if (stk.empty())
        return true;
    // 스택이 비어있지 않으면 false return
    else
        return false;

    return answer;
}