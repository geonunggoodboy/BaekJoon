#include <iostream>
#include <vector>

using namespace std;

int main(){
    int N, sum;
    vector<int> divisor;
    while(true){
        sum = 0;
        cin >> N;
        if(N == -1) break;
        divisor.clear(); // clear the vector
        for(int i = 1; i < N; i++){
            if(N % i == 0){
                divisor.push_back(i);
            }
        }
        for(unsigned int i = 0; i < divisor.size(); i++){
            sum += divisor[i];
        }
        if(sum == N){
            cout << N << " " << "=" << " ";
            for(unsigned int i = 0; i < divisor.size(); i++){
                cout << divisor[i];
                if(i != divisor.size() - 1) cout << " + "; // print + only between elements
            } 
        } else {
            cout << N << " is NOT perfect.";
        }
        cout << endl; // print newline after each iteration
    }
    return 0;
}
