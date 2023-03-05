#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int N, M, s, e, k;
    cin >> N >> M;
    vector<int> buckets(N);
    for(int i = 0; i<N; i++){
        buckets[i] = i+1;
    }
    for(int i = 0; i < M; i++){
        cin >> s >> e >> k;
        rotate(buckets.begin() + s - 1, buckets.begin() + k -1, buckets.begin() + e);
    }
    for(int i = 0; i<N; i++){
        cout << buckets[i] << " ";
    }
    return 0;
}