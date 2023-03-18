#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int result = 0;
    vector<int> Num_list(5);
    for (int i = 0; i < 5; i++){
        cin >> Num_list[i];
        result += Num_list[i];
    }
    sort(Num_list.begin(), Num_list.end());
    cout << result / 5 << endl;
    cout << Num_list[2];
    return 0;
}