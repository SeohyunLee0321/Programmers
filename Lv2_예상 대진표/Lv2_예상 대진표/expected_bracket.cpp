// [Level2. 예상 대진표]
#include <iostream>

using namespace std;

// 한 번 결투가 끝나면 범위는 n/2
// n이 홀수일 경우 2로 나누면 안됨
// n이 홀수면 1을 더하고 2로 나누어주기
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