#include <string>
#include <vector>

using namespace std;

vector<int> solution(int brown, int yellow) {
    // brownWidth - 2 = (brown - 4) / 2 - (brownHeight - 2)
    // brownWidth + brownHeight = brown / 2 + 2
    // brownWidth = brown / 2 + 2 - brownHeight
    // yellowWidth = brownWidth - 2
    // yellowWidth = brown / 2 + 2 - brownHeight - 2 = brown / 2 - brownHeight
    // yellowHeight = brownHeight - 2

    vector<int> answer;
    for (int brownHeight = 3; brownHeight <= brown / 2; brownHeight++)
    {
        // if(yellowWidth * yellowHeight == yellow)
        if ((brown / 2 - brownHeight) * (brownHeight - 2) == yellow)
        {
            int brownWidth = brown / 2 + 2 - brownHeight;
            answer.push_back(brownWidth);
            answer.push_back(brownHeight);
            break;
        }
        else
            continue;
    }
    return answer;
}