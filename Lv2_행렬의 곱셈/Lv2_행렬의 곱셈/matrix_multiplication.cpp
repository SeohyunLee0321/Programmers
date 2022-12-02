// [Level2. 행렬의 곱셈]
#include <string>
#include <vector>

using namespace std;

vector<vector<int>> solution(vector<vector<int>> arr1, vector<vector<int>> arr2) {
    vector<vector<int>> answer;

    // arr1 크기만큼 for문 실행
    for (int i = 0; i < arr1.size(); i++) {
        vector<int> vec_temp;
        // arr2 크기만큼 for문 실행
        for (int j = 0; j < arr2[0].size(); j++) {
            int sum = 0;
            // arr1[0] 크기만큼 for문 실행
            for (int k = 0; k < arr1[0].size(); k++)
                sum += arr1[i][k] * arr2[k][j];
            vec_temp.push_back(sum);
        }
        answer.push_back(vec_temp);
    }

    return answer;
}