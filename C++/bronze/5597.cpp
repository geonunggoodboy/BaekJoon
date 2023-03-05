#include <iostream>
#include <vector>

using namespace std;

int main(){
    int temp;
    // 크기가 30이고 모든 요소가 0인 벡터 선언
    vector<int> N_list(30, 0);
    for (int i = 0; i < 28; i++){
        cin >> temp;
        N_list[temp-1] = 1;
    }
    for (int i = 0; i < 30; i++){
        if(N_list[i] == 0){
            cout << i+1 << endl;
        }
    }

    return 0;
}