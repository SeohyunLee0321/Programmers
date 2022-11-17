// [Level2. N개의 최소공배수]
#include <string>
#include <vector>

using namespace std;

/*int get_gcd(int a, int b)
{
    int max_div = 1;	// 가장 큰 공약수
    int range = min(a, b); 	// 두 수 중 작은 값까지만 조사

    // i부터 공약수를 찾기
    for (int i = 1; i <= range; i++)
    {
        // 두 수 모두의 약수일 경우
        if (a % i == 0 && b % i == 0)
        {
            max_div = i; 	// max_div 값 변경
        }
    }

    return max_div;
}

int solution(vector<int> arr) {
    // 최소공배수 = 수들의 곱 / 최대공약수
    int lcm = 1;

    for (int i = 0; i < arr.size(); i++)
        lcm = (lcm * arr[i]) / get_gcd(lcm, arr[i]);
    return lcm;
}*/

// 최소공배수 구하는 것도 함수로 만들기
/*int get_gcd(int a, int b)
{
    int max_div = 1;	// 가장 큰 공약수
    int range = min(a, b); 	// 두 수 중 작은 값까지만 조사

    // i부터 공약수를 찾기
    for (int i = 1; i <= range; i++)
    {
        // 두 수 모두의 약수일 경우
        if (a % i == 0 && b % i == 0)
        {
            max_div = i; 	// max_div 값 변경
        }
    }

    return max_div;
}

int get_lcm (int a, int b) {
    return a * b / get_gcd(a, b);
}
int solution(vector<int> arr) {
    // 최소공배수 = 수들의 곱 / 최대공약수
    int lcm = 1;

    for (int i = 0; i < arr.size(); i++)
        lcm = get_lcm(lcm, arr[i]);
    return lcm;
}*/

// 유클리드 호제법 이용해서 최대공약수 구하기
int get_gcd(int a, int b)
{
    int c;
    while (b != 0) {
        c = a % b;
        a = b;
        b = c;
    }
    return a;
}

int get_lcm(int a, int b) {
    return a * b / get_gcd(a, b);
}
int solution(vector<int> arr) {
    // 최소공배수 = 수들의 곱 / 최대공약수
    int lcm = 1;

    for (int i = 0; i < arr.size(); i++)
        lcm = get_lcm(lcm, arr[i]);
    return lcm;
}