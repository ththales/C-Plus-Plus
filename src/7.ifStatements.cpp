#include <iostream>

using namespace std;

int main() {
    cout << "----- If statements -----" << endl;
    //IF
    // >, <, >=, <=, ==, !=
    int num1 = 5, num2 = 10;
    if(num1>num2) {
        cout << num1 << " > " << num2 << endl;
    }
    else {
        cout << num2 << " > " << num1 << endl;
    }
    cout << endl;
    if('a'<'b') {
        cout << "'a' < 'b'" << endl << endl;
    }

    //String comparison
    string animal = "cat";
    if(animal.compare("cat")==0) {
        cout << "My animal is a cat" << endl << endl;
    }

    // Not (!)
    bool isStudent = true, isSmart = false;
    if(isStudent) {
        cout << "You are a student ";
        if(!isSmart) {
            cout << "but not smart!" << endl;
        }
        else {
            cout << "and smart!" << endl;
        }
    }
    else {
        cout << "You are not a student ";
        if(!isSmart) {
            cout << "and not smart!" << endl;
        }
        else {
            cout << "but smart!" << endl;
        }
    }
    cout << endl;

    //Switch
    int a = 3;
    cout << "The number is ";
    switch(a) {
        case 1: {
            cout << '1' << endl;
            break;
        }
        case 2: {
            cout << '2' << endl;
            break;
        }
        default: {
            cout << '3' << endl;
            break;
        }
    }
    return 0;
}