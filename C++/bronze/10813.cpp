#include <iostream>
#include <vector>

using namespace std;

void swap_list(int &a, int &b, vector<int> &list){
    int temp = list[a];
    list[a] = list[b];
    list[b] = temp;    
}

int main(){
    int M,N, temp1, temp2;
    cin >> N >> M;
    // 제작
    vector<int> bucket(N);
    for(int i = 0; i < N; i++){
        bucket[i] = i+1;
    }
    // 반복 시작
    for(int i = 0; i < M; i++){
        cin >> temp1 >> temp2;
        temp1--;
        temp2--;
        swap_list(temp1, temp2, bucket);
    }
    for(int i = 0; i <N; i++){
        cout << bucket[i] << " ";
    }
    return 0;
}