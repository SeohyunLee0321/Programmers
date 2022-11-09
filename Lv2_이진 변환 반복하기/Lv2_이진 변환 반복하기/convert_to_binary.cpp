// [Level 2. 이진 변환 반복하기]

#include <string>
#include <vector>

using namespace std;

vector<int> solution(string s) {
    vector<int> answer;
    string temp = "";
    // 제거된 0의 개수
    int zeroCount = 0;
    // 이진 변환 횟수
    int totalCount = 0;

    while (s != "1")
    {
        totalCount++;
        // 0의 개수 카운팅, 0 아니면 temp에 1 넣어주기
        for (int i = 0; i < s.length(); i++)
            if (s[i] == '1')
                temp += s[i];
            else
                zeroCount++;

        // temp 의 길이 저장
        int tempLength = temp.length();
        temp.clear();
        s.clear();

        while (tempLength >= 1)
        {
            // temp의 길이 2진수로 변환, string으로 형변환하여 s에 insert
            s.insert(0, to_string(tempLength % 2));
            tempLength /= 2;
        }
    }

    answer.push_back(totalCount);
    answer.push_back(zeroCount);


    return answer;
}