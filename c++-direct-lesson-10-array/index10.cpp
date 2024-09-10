#include <iostream>

using namespace std;

int main(){
    int my_list[4] = {1, 2, 3, 4 };
    string my_cats[4] = {"sushi", "sobeh", "nafas", "imaginary"};
    for(int i= 0; i< 4; i++){
        cout << my_list[i] << " - " <<  my_cats[i] << endl ;
    }

    for(int item: my_list){
        cout << item << "\n";
    }
    return 0;
}