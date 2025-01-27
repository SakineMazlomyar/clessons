#include "./library-ios-stream.cpp"
#include <vector>

int main() {

    vector<string> names={"mika", "sakine", "shobe", "nafas", "sushi"}; 
    names.push_back("mamma");
    for(auto name: names) {
        cout << name << endl;
    }
    cout << names.size() << endl;
    // you can not get the size of vector by sizeof
    return 0;
}