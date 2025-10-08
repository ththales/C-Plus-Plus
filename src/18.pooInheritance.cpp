#include <iostream>

using namespace std;

class Chef {
    public:
        void makeChicken() {
            cout << "The chef makes chicken!" << endl;
        }

        void makeSalad() {
            cout << "The chef makes salad!" << endl;
        }

        void makeSpecialDish() {
            cout << "The chef makes dish!" << endl;
        }
};

//Inheritance
class ItalianChef : public Chef {
    public:
        void makePasta() {
            cout << "The italian chef makes pasta!" << endl;
        }

        void makePizza() {
            cout << "The italian chef makes pizza!" << endl;
        }
};

int main() {
    Chef myChef;
    myChef.makeChicken();

    ItalianChef mySecondChef;
    mySecondChef.makeChicken();
    return 0;
}