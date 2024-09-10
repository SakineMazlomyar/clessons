#include <iostream>

using namespace std;

int main(){
    int x, y;
    x = 2;
    y = 4;
    if(y > x){ // if sats with klemar
        cout << "Y is bigger than x" << endl;
    } else {
        cout << "X is bigger than y" << endl;
    }


    if(x < y) // if sats without klemar
        cout << "X is less than y" << endl;
    return 0;

}