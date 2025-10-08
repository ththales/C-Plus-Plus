#include <iostream>

using namespace std;

double division(int a, int b) {
    if(b==0) {
        throw "Error!";
    }
    return (a/b);
}

int main() {
    //Exception catching
    try {
        division(10, 0);
    } catch(const char *msg) {
        cerr << msg << endl;
    }
    return 0;
}