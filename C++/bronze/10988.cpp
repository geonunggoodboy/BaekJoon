#include <iostream>

using namespace std;

int main(){
    bool flag = false;
    string str;
    cin >> str;
    int repeat = str.size()/ 2;
    for(int i = 0; i < repeat; i++){
        if(str[i] != str[str.size() - i - 1]){
            cout << 0;
            flag = true;
            break;
        }
    }
    if(!flag){
        cout << 1;
    }
    return 0;
}