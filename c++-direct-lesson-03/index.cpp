#include <iostream>
using namespace std;

int main(){
    cout << "Hello world" << endl;
    int x, y, result;
    x = 2; 
    y = 2;
    result = x++ * y++;
    cout << result << endl;
    return 0;

}