#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(string s) {
    string answer = "";

    vector<int> vec;
    string temp;

    for (int i = 0; i < s.length(); i++)
    {
        // s[i]가 공백이 아니면 s[i]를 temp에 더하기
        if (s[i] != ' ')
            temp += s[i];
        else
        {
            // string 형태의 temp를 int 형으로 바꾸고 vec에 넣기, temp 초기화
            vec.push_back(stoi(temp));
            temp.clear();
        }
    }
    // 마지막 수는 무조건 push
    vec.push_back(stoi(temp));

    // 오름차순 정렬
    sort(vec.begin(), vec.end());

    answer += to_string(vec.front()) + " " + to_string(vec.back());
    return answer;
}