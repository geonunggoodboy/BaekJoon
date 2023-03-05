#include <iostream>

using namespace std;

float change_score(string rating){
    float score = 0;
    switch(rating[0]){
        case 'A':
            if (rating[1] == '+') score = 4.5;
            else if (rating[1] == '0') score = 4.0;
            break;
        case 'B':
            if (rating[1] == '+') score = 3.5;
            else if (rating[1] == '0') score = 3.0;
            break;
        case 'C':
            if (rating[1] == '+') score = 2.5;
            else if (rating[1] == '0') score = 2.0;
            break;
        case 'D':
            if (rating[1] == '+') score = 1.5;
            else if (rating[1] == '0') score = 1.0;
            break;
        default:
            break;
    }
    return score;
}


int main(){
    string subject, rating;
    float credit, result, temp, credits = 0.0;
    for(int i =0 ; i< 20; i++){
        cin >> subject >> credit >> rating;
        temp = change_score(rating);
        if(rating[0] != 'P'){
            result += (temp * credit);
            credits += credit; 
        }
    }
    result /= credits;
    cout << result;
    return 0;
}