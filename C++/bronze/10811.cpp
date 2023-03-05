#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int N, M, S, E;
    cin >> N >> M;
    vector<int> bucket(N);
    for(int i = 0; i<N; i++){
        bucket[i] = i+1;
    }
    for (int i = 0; i < M; i++){
        cin >> S >> E;
        reverse(bucket.begin() + (S-1), bucket.begin() + E);
    }
    for (int i = 0; i< N; i++){
        cout << bucket[i] << " ";
    }
    return 0;
}