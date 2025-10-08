#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    //Numbers
    cout << "----- Numbers -----" << endl;
    cout << 5+5 << endl;
    cout << 7-4 << endl;
    cout << 2*3 << endl;
    cout << 6/2 << endl;
    cout << 10%3 << endl;
    cout << 1+3*5 << endl;
    cout << 10/3.0 << endl << endl;

    int num1 = 10, num2 = 100;
    num2 += 50; //num = num+50;
    num2 -= 50; //num = num-50;
    num2 *= 50; //num = num*50;
    num2 /= 50; //num = num/50;

    num1++; //num = num+1;
    num1--; //num = num-1;

    cout << num1 << endl << num2 << endl;
    
    double num3 = 13.239103932;
    cout << fixed << setprecision(5) << num3 << endl; //5 number precision

    //Casting
    /*
        Cast is a way to convert a data specifier into another
    */
    cout << "----- Casting -----" << endl;
    cout << (int)3.14 << endl;
    cout << (double)1/2 << endl << endl;
    return 0;
}