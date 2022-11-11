#include <string>
#include <vector>

using namespace std;

// 재귀함수 이용 - 시간초과
/*int Fibonacci(int num){
    if(num == 0)
        return 0;
    else if(num == 1 )
        return 1;
    else
        return Fibonacci(num - 1) + Fibonacci(num - 2);
}
int solution(int n) {
    return Fibonacci(n) % 1234567;
}*/

//--------------------------------------------------------------------
// 100002개의 원소 가지는 배열 만들고 앞의 두 개 원소를 더해 다음 원소에 저장하는 방식 - 통과
/*int solution(int n) {
    int answer = 0;
    int F[100001];
    F[0] = 0; F[1] = 1;

    for(int i=2; i<=n; i++){
        F[i] = (F[i-1] + F[i-2] )  % 1234567;
    }
    answer = F[n];
    return answer;
}*/

//-------------------------------------------------------------------------------
// 배열이 크기를 3으로 줄이고 초기값을 0, 0, 1로 설정 후 재귀 함수처럼 for문 사용
// 가장 빠른 시간으로 통과
int fibo(int n) {
    int f[3] = { 0,0,1 };

    for (int i = 1; i < n; i++) {
        f[0] = f[1];
        f[1] = f[2];
        f[2] = (f[0] + f[1]) % 1234567;
    }

    return f[2];
}

int solution(int n) {
    return fibo(n);
}