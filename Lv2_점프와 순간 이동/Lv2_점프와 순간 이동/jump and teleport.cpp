// [Level2. 점프와 순간 이동]
#include <iostream>
using namespace std;

// n칸을 2로 나눔
// n이 홀수라면 건전지를 1 사용하여 짝수로 만들어주기
// n이 짝수라면 그대로 2로 나누기
// ex) n = 100 <- 50칸까지 가고 순간이동 
// <- 25칸까지 가고 순간이동 
// <- 12칸까지 가고 24까지 순간이동, 건전지 1 사용하여 25까지 가기 
// <- 6칸까지 가고 12까지 순간이동, 3칸까지 가고 6칸까지 순간이동 
// <- 1칸까지 가고 2칸까지 순간이동, 건전지 1 사용하여 3까지 가기 
// <- 1칸까지 가기
int solution(int n)
{
    int ans = 0;
    while (n > 0)
    {
        if (n % 2 == 0)
            n /= 2;
        else
        {
            n -= 1;
            ans++;
        }
    }
    return ans;
}