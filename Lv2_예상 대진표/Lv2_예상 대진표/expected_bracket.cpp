// [Level2. ���� ����ǥ]
#include <iostream>

using namespace std;

// �� �� ������ ������ ������ n/2
// n�� Ȧ���� ��� 2�� ������ �ȵ�
// n�� Ȧ���� 1�� ���ϰ� 2�� �������ֱ�
int solution(int n, int a, int b)
{
    int answer = 1;
    for (; answer < n; answer++) {
        if (a % 2 == 1)
            a++;
        if (b % 2 == 1)
            b++;
        a /= 2;
        b /= 2;

        if (a == b)
            break;
    }

    return answer;
}