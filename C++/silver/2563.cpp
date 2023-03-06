#include <iostream>
#include <vector>

using namespace std;

int main(){
    int T, x_value, y_value, result = 0, x_max = -1, y_max = -1;
    cin >> T;
    vector<vector<int>> paper(100, vector<int>(100, 0));
    for(int i = 0; i < T; i++){
        cin >> x_value >> y_value;
        if(x_value > x_max){
            x_max = x_value;
        }
        if(y_value > y_max){
            y_max = y_value;
        }
        for(int j = x_value; j < x_value + 10; j++){
            for(int k = y_value; k < y_value + 10; k++){
                paper[j][k] = 1;
            }
        }
    }
    for(int i = 0; i < x_max+10; i++){
        for(int j = 0; j< y_max+10; j++){
            if(paper[i][j] == 1) result++;
        }
    }
    cout << result;
    return 0;
}