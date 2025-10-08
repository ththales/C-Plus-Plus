#include <iostream>

using namespace std;

int factorial(int num) {
    if(num==0 || num==1) {
        return 1;
    }
    return num*factorial(num-1);
}

int main() {
    //Recursion
    /*
        Recursion is a process where a function calls itself. This is known as a recursive function.
    */
    cout << factorial(4);
    return 0;
}

/*
    Ex: factorial(4) = 24
            return 4*factorial(3) = 4*6 = 24
                return 3*factorial(2) = 3*2 = 6
                    return 2*factorial(1) = 2*1 = 2
                        return 1;
*/