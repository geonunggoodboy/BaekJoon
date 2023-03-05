#include <iostream>
#include <vector>

using namespace std;

int main(){
    int temp;
    vector<int> chess = {1, 1, 2, 2, 2, 8};
    for (int i = 0; i < 6; i++){
        cin >> temp;
        int result = chess[i] - temp;
        cout << result << " ";
    }
    return 0;
}