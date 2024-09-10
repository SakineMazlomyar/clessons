#include <iostream>

using namespace std;


int getUserInput();
void countAvergeAvTwo(int numberOne, int numberTwo);
int main(){
    cout << "Vi ska räka ut Medelvärde av två tal börja med ange talen" << endl;
    int number_one = getUserInput();
    int number_two = getUserInput();
    countAvergeAvTwo(number_one, number_two);

   
}

void countAvergeAvTwo(int numberOne, int numberTwo){
    try{
        int average_value = (numberOne + numberTwo) / 2;
        cout << "Medelvärde av dessa nummer: " << numberOne << " och " << numberTwo << "  är " << average_value << endl;
    } catch(string error){
        cout << error;
    }
}

int getUserInput(){
 
    int number;
    cin >> number;
    return number;

}