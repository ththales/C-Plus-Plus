#include <iostream>

using namespace std;

int main() {
    //Loops
    /*
        A loops is a repetition structure thats continue running while a condition is true
    */
    //For
    int i = 0;
    cout << "----- Loops -----" << endl;
    cout << "For" << endl;
    for(i=0; i<10; i++) {
        cout << i+1 << endl;
    }
    cout << endl;

    //While
    i = 0;
    cout << "While" << endl;
    while(i<10) {
        cout << i+1 << endl;
        i++;
    }
    cout << endl;

    cout << "Do while" << endl;
    //Do while
    i = 0;
    do {
        cout << i+1 << endl;
        i++;
    } while(i<10);
    cout << endl;

    return 0;
}