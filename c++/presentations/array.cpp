#include "./library-ios-stream.cpp"

int main() {
    int children_ages[3]={1,2,3};
    char childrent_names[3]={'a', 'b', 'c'};
    int parents[] = {1,2,3,4,5,6};
    string schools[3];


    
    // how to loop throw
    int size = sizeof(children_ages) / children_ages[0];
    for(int i=0; i< size; i++){
        cout << i << endl;
    }

    // fixed size array meaning you can not update the array afterwards

    // for none fixed size array we use vectors

    // how to get the size // the size returns in bytes instead of decimal so an int has 4 bytes and it is multiplied by total size 3 * 4 in this case
    // for finding out the real size of array we divide the total size/ by the first element of aray

    cout << sizeof(children_ages) << endl;
    // using for each
/*     for (int parent: parents) {
        cout << parent << endl;
    } */

   // using multi dimensional array
   int bets[1][2] = {
    {
        2, 2
    }
   };

    cout << "Muti dimensional: "<< endl << bets << endl;
    return 0;
}