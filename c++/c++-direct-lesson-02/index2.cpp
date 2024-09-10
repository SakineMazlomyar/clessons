#include <iostream>

using namespace std;
int main(){
    int current_price, total_price;
    double tax = 10;
    cout << "Writecurrent besin pris: " << endl;
    cin >> current_price;
    cout << "Total price is: " << current_price * tax << endl;
    return 0;
}