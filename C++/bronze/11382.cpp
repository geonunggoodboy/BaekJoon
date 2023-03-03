#include <iostream>

using namespace std;

int main(){
    long result = 0;
    for(int i = 0; i< 3; i++){
        long temp;
        cin >> temp;
        result += temp;
    }
    cout << result << endl;
    return 0;
}