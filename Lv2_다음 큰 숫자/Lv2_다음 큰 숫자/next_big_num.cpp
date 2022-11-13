#include <string>
#include <vector>

using namespace std;

// 1 ���� count
int count(int n)
{
    int count = 0;

    for (int i = 0; n > 0; i++)
    {
        if (n % 2 == 1)
            count++;
        n /= 2;
    }
    return count;
}

int solution(int n)
{
    int num = count(n);

    // n�� �� ����, 1�� ������ ������ ������
    while (1)
    {
        n++;
        if (count(n) == num)
            break;
    }
    return n;
}