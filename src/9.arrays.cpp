#include <iostream>

using namespace std;

int main() {
    //Array
    /*
        An array is a variable that can store multiple elements of the same data type
    */
    //One dimensional array
    int luckyNumbers[5] = {4, 23, 230, 2, 3};
    //                     0   1   2    3   4 -> length 0 to 4
    luckyNumbers[0] = 1024;

    cout << "----- Array -----" << endl;
    cout << "One dimensional" << endl;
    cout << luckyNumbers[0] << endl;
    cout << luckyNumbers[3]+luckyNumbers[4] << endl;

    //N Dimensional array
    cout << "N Dimensional" << endl;
    int numberGrid[2][3] = {{1, 2, 3}, {4, 5, 6}};
    //                       00 01 02   10 11 12
    numberGrid[0][1] = 1024;
    cout << numberGrid[0][1] << endl;
    cout << numberGrid[1][2] << endl;
    return 0;
}