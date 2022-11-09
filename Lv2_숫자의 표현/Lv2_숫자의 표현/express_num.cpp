#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    // n/2 까지만 더하는 것이 의미있음 (ex. n이 10이면 5+6은 이미 10이 넘음)
    // 1 ~ n/2 까지 더해서 n 이상이 될 때까지 반복 후
    // 1 ~ n/2 까지 차례로 빼가면서 n 이 되면 answer++
    // 자기 자신은 무조건 답으로 가지기 때문에 answer 는 1에서 시작
    // n이 홀수일 경우 (n/2 - 0.5) + (n/2 + 0.5) 가 존재하는데 n/2 + 0.5 도 범위 안에
    // 넣기 위해 (n + 1) / 2 까지 범위를 바꾸어 준다 (n이 짝수였다면 소수점은 버려짐)
    int answer = 1;
    int num = (n + 1) / 2;
    int sum = 0;
    int j = 1;

    for (int i = 1; i <= num; i++) {
        sum += i;

        if (sum >= n) {
            while (sum > n)
                sum -= j++;

            if (sum == n)
                answer++;
        }
    }

    return n == 1 ? 1 : answer;
}