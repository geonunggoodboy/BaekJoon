#include <iostream>
#include <vector>

using namespace std;

int main(){
    int N, M;
    cin >> N >> M;
    vector<int> bucket(N, 0);
    for (int i = 0; i< M; i++){
        int a,b,c;
        cin >> a >> b >> c;
        for(int j = a-1; j < b; j++){
            bucket[j] = c;
        }
    }
    for (int i = 0; i<N; i++){
        cout << bucket[i] << " ";
    }
    return 0;
}