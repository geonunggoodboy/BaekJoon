#include <iostream>
#include <vector>

using namespace std;

int main(){
    int N, v;
    int count = 0;
    cin >> N;
    vector<int> n_list(N);
    for(int i = 0; i< N; i++){
        cin >> n_list[i];
    }
    cin >> v;
    for (int i = 0; i<N; i++){
        if(n_list[i] == v) count++;
    }
    cout << count << endl;
    return 0;
}
