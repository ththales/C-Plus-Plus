#include <iostream>

using namespace std;

class Book {
    public: 
        string title;
        string author;

        void  readBook() {
            cout << "Reading " + this->title + " by " + this->author << endl << endl;
        }
};

int main() {
    //Classes
    /*
        A class is a blueprint for creating objects. It encapsulates data members (attributes) and member functions (methods).
    */
    Book book1; //Creating book objects
    book1.title = "Harry Potter";
    book1.author = "JK Rowling";
    book1.readBook();
    cout << endl;

    return 0;
}