// [Levle2. ���� �����ձ�]
#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

vector<int> solution(int n, vector<string> words) {
    vector<int> answer(2, 0); //0,0 ���� �ʱ�ȭ
    vector<string> checked;

    for (int i = 0; i < words.size(); i++) {
        // �� ī��Ʈ
        if (i % n == 0)
            answer[1]++;

        // Ż�� ���� 3����
        // 1. �� ����
        bool loseCondition1 = words[i].length() == 1;
        // 2. ���� �ܾ� ������ ���� != ���� �ܾ� ù ����
        bool loseCondition2 = i > 0 && words[i].front() != words[i - 1].back();
        // 3. ���� �ܾ�� �ߺ�, find()�� ��� -> ���� �ܾ checked �ȿ� ������ checked.end()�� ����
        bool loseCondition3 = i > 0 && (find(checked.begin(), checked.end(), words[i]) != checked.end());

        if (loseCondition1 || loseCondition2 || loseCondition3)
        {
            // Ż���� �߻�
            answer[0] = i % n + 1;
            return answer;
        }
        // checked�� Ż������ ���� �ܾ� ����
        checked.push_back(words[i]);
    }
    // Ż���� ���� -> 0, 0 return
    answer[1] = 0;
    return answer;
}

/*#include <map>
// map ��� ��� -> ����� �ܾ key������ üũ
vector<int> solution(int n, vector<string> words) {
    map<string, int> word;
    // �� ����
    word[words[0]]++;
    for(int i=1; i<words.size(); i++){
        // ���� �̹� ����� �ܾ��̰ų� ���ܾ��� ���� ���� �ܾ��� �� ���ڰ� ���� �ʴٸ�
        if(word[words[i]] || words[i].front() != words[i-1].back())
            // Ż���� ����� ��ȣ�� �� ��° ����Ŭ���� Ż���ߴ��� return
            return ((i%n)+1,(i/n)+1);
        word[words[i]]++;
    }
    // ������ ������ ���������� ���� -> 0,0 return
    return {0, 0};
}*/