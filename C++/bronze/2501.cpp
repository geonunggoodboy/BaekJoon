#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    unsigned int N, K;
    cin >> N >> K;
    vector<int> divisor;
    for(unsigned int i = 1; i < (N/2); i++){
    if(N % i == 0){
        divisor.push_back(i);
        divisor.push_back(N/i);
        }
    }
    sort(divisor.begin(), divisor.end());
    auto last = unique(divisor.begin(), divisor.end());
    divisor.erase(last, divisor.end());
    if(divisor.size() >= K){
        cout << divisor[K-1];
    } else {
        cout << "0";
    }
    return 0;
}