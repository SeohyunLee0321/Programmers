#include <string>
#include <vector>

using namespace std;

// ����Լ� �̿� - �ð��ʰ�
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
// 100002���� ���� ������ �迭 ����� ���� �� �� ���Ҹ� ���� ���� ���ҿ� �����ϴ� ��� - ���
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
// �迭�� ũ�⸦ 3���� ���̰� �ʱⰪ�� 0, 0, 1�� ���� �� ��� �Լ�ó�� for�� ���
// ���� ���� �ð����� ���
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