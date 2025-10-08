#include <iostream>

using namespace std;

class Veichle {
    public:
        virtual void move() = 0;
        void getDescription() {
            cout << "Veichles are used to transportation" << endl;
        }
};

class Bicycle : public Veichle {
    public:
        virtual void move() {
            cout << "Bicycle moves in the ground" << endl;
        }
};

class Airplane : public Veichle {
    public:
        virtual void move() {
            cout << "Airplane moves in the air" << endl;
        }
};

int main() {
    Airplane myPlane;
    myPlane.move();
    myPlane.getDescription();
    return 0;
}