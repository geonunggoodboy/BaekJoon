#include <iostream>

using namespace std;

int main(){
    long X, result = 0;
    int N, a, b;
    cin >> X;
    cin >> N;
    for(int i=0; i<N; i++){
        cin >> a >> b;
        result += a*b;
    }
    if(result == X){
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
    return 0;
}