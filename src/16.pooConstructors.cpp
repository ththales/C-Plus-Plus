#include <iostream>

using namespace std;

class Book {
    public: 
        string title;
        string author;

        //Constructors -> easy way to declare a object
        Book(string title, string author) {
            this->title;
            this->author;
        }

        void  readBook() {
            cout << "Reading " + this->title + " by " + this->author << endl << endl;
        }
};

int main() {
    //Classes
    /*
        A class is a blueprint for creating objects. It encapsulates data members (attributes) and member functions (methods).
    */
    Book book1("Neuromancer", "William Gibson"); //Creating book objects
    book1.readBook();
    return 0;
}