#include <iostream>

using namespace std;

int main() {
    //Pointers
    /*
        Pointer is a variable that stores a memory adress
    */
    int num = 10;
    int *pNum = &num;
    cout << "----- Pointers -----" << endl;
    cout << pNum << endl;
    cout << *pNum << endl << endl;
    return 0;
}