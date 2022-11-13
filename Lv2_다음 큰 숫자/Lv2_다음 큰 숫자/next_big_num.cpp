#include <string>
#include <vector>

using namespace std;

// 1 개수 count
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

    // n을 씩 증가, 1의 개수가 같아질 때까지
    while (1)
    {
        n++;
        if (count(n) == num)
            break;
    }
    return n;
}