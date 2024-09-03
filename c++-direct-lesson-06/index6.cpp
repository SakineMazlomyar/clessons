#include <iostream>

using namespace std;
int main(){
    int number;
    int hidden_number = 4;
    int total_tries = 0;
    cout << "Guess a number" << endl;
    while(total_tries <10 && number != hidden_number){
        total_tries--;
        cin >> number;
        if(number == hidden_number)
            break;
        cout << "wrong answer try again" << endl;
    }

    if(number == hidden_number){
          cout << "You gussed the number whooo!!!" << endl;
          return 0;
    }

      cout << "You failed after this total tries: " << total_tries << endl;
    return 0;
}