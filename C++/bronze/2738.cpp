#include <iostream>
#include <vector>

using namespace std;

int main(){
    int N, M, temp;
    cin >> N >> M;
    vector<vector<int>> matrix(N, vector<int>(M, 0));
    for (int k = 0; k < 2; k++){
        for (int i = 0; i < N; i++){
            for (int j = 0; j < M; j++){
                cin >> temp;
                matrix[i][j] += temp;
            }
        }
    }
    for (int i = 0; i < N; i++){
            for (int j = 0; j < M; j++){
                cout << matrix[i][j] << " ";
            }
            cout << endl;
        }
    return 0;
}