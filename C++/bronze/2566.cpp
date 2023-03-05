#include <iostream>
#include <vector>

using namespace std;

int main(){
    int max = -1;
    vector<int> position(2, 0);
    vector<vector<int>> matrix(9, vector<int>(9, 0));
    for (int i = 0; i < 9; i++){
        for(int j = 0; j < 9; j++){
            cin >> matrix[i][j];
            if(max < matrix[i][j]){
                max = matrix[i][j];
                position[0] = i+1;
                position[1] = j+1;
            }
        }
    }
    cout << max << endl;
    cout << position[0] << " " << position[1];
    return 0;
}