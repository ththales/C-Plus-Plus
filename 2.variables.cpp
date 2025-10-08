#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    //Variable
    /*
        A variable is a reserved space in memory that stores values of some type.
    */
    string name = "Mike";
    char grade = 'A'; //single character
    int age = 20; //integer
    unsigned int age2 = 20; //unsigned integer
    long int richGuy = 2147483647; //big integer
    long long int elonMusk = 9223372036854775807; //bigger integer
    float gpa = 3.5384957; //low precision
    double bigPrecision = 3.14159265358979323846;  //high precision
    long double bigNumberWithPrecision = 3.14159265358979323846L; //big number w/ high precision
    bool isMale = true; //boolean value

    cout << "----- Variables -----" << endl;
    cout << "Grade: " << grade << endl;
    cout << "Age: " << age << endl;
    cout << "Age 2: " << age2 << endl;
    cout << "Rich Guy money: " << richGuy << endl;
    cout << "Elon Musk money: " << elonMusk << endl;
    cout << "Gpa: " << gpa << endl;
    cout << "Big number w/ precision: " << bigPrecision << endl;
    cout << "Bigger number w/ precision: " << bigNumberWithPrecision << endl;
    cout << "Boolean value: " << isMale << endl << endl;
    return 0;
}