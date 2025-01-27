#include "./library-ios-stream.cpp"
#include <vector>

int main () {
    struct person{
        string name; 
        int age; 
        string address;
    };


    vector<person> human;
    for(int i=0; i<5; i++){
         person p1;
        p1.name= "a";
        p1.age= i;
        p1.address="skövde";
        human.push_back(p1);
    }


    for(person h: human){
            cout << "current_name " << h.name << endl;
    }
   
    return 0;
}