#include <iostream>

using namespace std;

class Chef{
    public:
        string name;
        int age;

        //Constructor
        Chef(string name, int age) {
            this->name = name;
            this->age = age;
        }

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

class ItalianChef : public Chef {
    public: 
        string countryOfOrigin;

        ItalianChef(string name, int age, string countryOfOrigin) : Chef(name, age) {
            this->countryOfOrigin = countryOfOrigin;
        }

        void makePasta() {
            cout << "The italian chef makes pasta!" << endl;
        }

        void makePizza() {
            cout << "The italian chef makes pizza!" << endl;
        }
};

int main() {
    Chef myChef("A not italian chef", 50);
    ItalianChef myItalianChef("A italian chef", 55, "Italy");
    cout << myItalianChef.age << endl;
    return 0;
}