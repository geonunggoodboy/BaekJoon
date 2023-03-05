#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<vector<char>> matrix(5, vector<char>(15, '\0'));
    for(int i = 0; i < 5; i++){
        string temp;
        cin >> temp;
        for(unsigned int j = 0; j < temp.size(); j++){
            matrix[i][j] = temp[j];
        }
    }
    for(int i = 0; i < 15; i++){
        for(int j = 0; j < 5; j++){
            if(matrix[j][i] != '\0'){
                cout << matrix[j][i];
            }
        }
    }
    return 0;
}


