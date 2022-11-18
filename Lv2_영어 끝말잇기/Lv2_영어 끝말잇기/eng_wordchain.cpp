// [Levle2. 영어 끝말잇기]
#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

vector<int> solution(int n, vector<string> words) {
    vector<int> answer(2, 0); //0,0 으로 초기화
    vector<string> checked;

    for (int i = 0; i < words.size(); i++) {
        // 턴 카운트
        if (i % n == 0)
            answer[1]++;

        // 탈락 조건 3가지
        // 1. 한 글자
        bool loseCondition1 = words[i].length() == 1;
        // 2. 이전 단어 마지막 글자 != 현재 단어 첫 글자
        bool loseCondition2 = i > 0 && words[i].front() != words[i - 1].back();
        // 3. 이전 단어와 중복, find()를 사용 -> 같은 단어가 checked 안에 없으면 checked.end()가 나옴
        bool loseCondition3 = i > 0 && (find(checked.begin(), checked.end(), words[i]) != checked.end());

        if (loseCondition1 || loseCondition2 || loseCondition3)
        {
            // 탈락자 발생
            answer[0] = i % n + 1;
            return answer;
        }
        // checked에 탈락하지 않은 단어 저장
        checked.push_back(words[i]);
    }
    // 탈락자 없음 -> 0, 0 return
    answer[1] = 0;
    return answer;
}

/*#include <map>
// map 방식 사용 -> 사용한 단어를 key값으로 체크
vector<int> solution(int n, vector<string> words) {
    map<string, int> word;
    // 턴 증가
    word[words[0]]++;
    for(int i=1; i<words.size(); i++){
        // 만약 이미 사용한 단어이거나 전단어의 끝과 현재 단어의 앞 글자가 같지 않다면
        if(word[words[i]] || words[i].front() != words[i-1].back())
            // 탈락한 사람의 번호와 몇 번째 사이클에서 탈락했는지 return
            return ((i%n)+1,(i/n)+1);
        word[words[i]]++;
    }
    // 끝까지 게임이 정상적으로 실행 -> 0,0 return
    return {0, 0};
}*/