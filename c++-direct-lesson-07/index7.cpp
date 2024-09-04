#include <iostream>
using namespace std;
int main(){
    const int READ  = 1 << 0;  // 0001 (1 in decimal)
    const int WRITE = 1 << 1;  // 0010 (2 in decimal)
    const int EXEC  = 1 << 2;  // 0100 (4 in decimal)
    int permissions = READ | WRITE; 
    cout << "Permissions: " << permissions << endl;  // Output: 3
    return 0;
}