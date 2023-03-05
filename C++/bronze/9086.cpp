#include <iostream>
#include <vector>

using namespace std;

int main(){
    int T;
    string S;
    char a,b;
    cin >> T;
    for (int i = 0; i<T; i++){
        cin >> S;
        a = S[0];
        b = S[S.size()-1];
        cout << a << b << endl;
    }
    return 0;
}