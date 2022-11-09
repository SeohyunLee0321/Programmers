// [Level 2. ���� ��ȯ �ݺ��ϱ�]

#include <string>
#include <vector>

using namespace std;

vector<int> solution(string s) {
    vector<int> answer;
    string temp = "";
    // ���ŵ� 0�� ����
    int zeroCount = 0;
    // ���� ��ȯ Ƚ��
    int totalCount = 0;

    while (s != "1")
    {
        totalCount++;
        // 0�� ���� ī����, 0 �ƴϸ� temp�� 1 �־��ֱ�
        for (int i = 0; i < s.length(); i++)
            if (s[i] == '1')
                temp += s[i];
            else
                zeroCount++;

        // temp �� ���� ����
        int tempLength = temp.length();
        temp.clear();
        s.clear();

        while (tempLength >= 1)
        {
            // temp�� ���� 2������ ��ȯ, string���� ����ȯ�Ͽ� s�� insert
            s.insert(0, to_string(tempLength % 2));
            tempLength /= 2;
        }
    }

    answer.push_back(totalCount);
    answer.push_back(zeroCount);


    return answer;
}