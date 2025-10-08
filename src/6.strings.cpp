#include <iostream>

using namespace std;

int main() {
    //String
    /*
        String is a array of characters
    */
    string name = "Peter";
    //array:             01234 -> Length = 5
    
    //string.h functions
    cout << "----- Strings -----" << endl;
    cout << name.length() << endl;
    cout << name[0] << endl;
    cout << name.find("ter") << endl;
    cout << name.substr(2) << endl;
    cout << name.substr(1, 3) << endl;

    name += " Parker";
    cout << name << endl;
    return 0;
}