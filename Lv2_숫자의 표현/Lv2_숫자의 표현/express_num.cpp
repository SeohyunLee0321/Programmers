#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    // n/2 ������ ���ϴ� ���� �ǹ����� (ex. n�� 10�̸� 5+6�� �̹� 10�� ����)
    // 1 ~ n/2 ���� ���ؼ� n �̻��� �� ������ �ݺ� ��
    // 1 ~ n/2 ���� ���ʷ� �����鼭 n �� �Ǹ� answer++
    // �ڱ� �ڽ��� ������ ������ ������ ������ answer �� 1���� ����
    // n�� Ȧ���� ��� (n/2 - 0.5) + (n/2 + 0.5) �� �����ϴµ� n/2 + 0.5 �� ���� �ȿ�
    // �ֱ� ���� (n + 1) / 2 ���� ������ �ٲپ� �ش� (n�� ¦�����ٸ� �Ҽ����� ������)
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