#include <iostream>
using namespace std;

int main(){
    int x, y, result, m, n, result1;
    x = 2; 
    y = 2;
    result = x++ * y++; // this results 2 * 2 = 4 post increment som är kopia av x och y
    cout << result << endl;
    cout << x << endl << y << endl;

    m = 3;
    n = 3;
    result1 = ++m * ++n; // this results 4 * 4 = 16; post preincrement som är en reference av x och y
    cout << result1 << endl;
    cout << m << endl << n << endl;

    return 0;

}