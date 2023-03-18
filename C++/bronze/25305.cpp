#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int N, k;
    cin >> N >> k;
    vector<int> x_list(N, 0);
    for(int i = 0; i< N; i++){
        cin >> x_list[i];
    }
    sort(x_list.begin(), x_list.end(), greater<int>());
    cout << x_list[k-1];
    return 0;
}