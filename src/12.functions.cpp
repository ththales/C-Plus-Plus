#include <iostream>

using namespace std;

void saiHi() {
    cout << "Hi" << endl;
}

int addNumbers(int num1, int num2) {
    return num1+num2;
}

int main() {
    int sum = addNumbers(2, 3);
    cout << sum << endl;
    saiHi();
    return 0;
}