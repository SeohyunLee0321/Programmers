// [Level2. N���� �ּҰ����]
#include <string>
#include <vector>

using namespace std;

/*int get_gcd(int a, int b)
{
    int max_div = 1;	// ���� ū �����
    int range = min(a, b); 	// �� �� �� ���� �������� ����

    // i���� ������� ã��
    for (int i = 1; i <= range; i++)
    {
        // �� �� ����� ����� ���
        if (a % i == 0 && b % i == 0)
        {
            max_div = i; 	// max_div �� ����
        }
    }

    return max_div;
}

int solution(vector<int> arr) {
    // �ּҰ���� = ������ �� / �ִ�����
    int lcm = 1;

    for (int i = 0; i < arr.size(); i++)
        lcm = (lcm * arr[i]) / get_gcd(lcm, arr[i]);
    return lcm;
}*/

// �ּҰ���� ���ϴ� �͵� �Լ��� �����
/*int get_gcd(int a, int b)
{
    int max_div = 1;	// ���� ū �����
    int range = min(a, b); 	// �� �� �� ���� �������� ����

    // i���� ������� ã��
    for (int i = 1; i <= range; i++)
    {
        // �� �� ����� ����� ���
        if (a % i == 0 && b % i == 0)
        {
            max_div = i; 	// max_div �� ����
        }
    }

    return max_div;
}

int get_lcm (int a, int b) {
    return a * b / get_gcd(a, b);
}
int solution(vector<int> arr) {
    // �ּҰ���� = ������ �� / �ִ�����
    int lcm = 1;

    for (int i = 0; i < arr.size(); i++)
        lcm = get_lcm(lcm, arr[i]);
    return lcm;
}*/

// ��Ŭ���� ȣ���� �̿��ؼ� �ִ����� ���ϱ�
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
    // �ּҰ���� = ������ �� / �ִ�����
    int lcm = 1;

    for (int i = 0; i < arr.size(); i++)
        lcm = get_lcm(lcm, arr[i]);
    return lcm;
}