#include <iostream>

using namespace std;

class Book {
    private:
        string title;
        string author;

    public:
        //Constructor
        Book(string title, string author) {
            this->setTitle(title);
            this->setAuthor(author);
        }

        //Modify the private class attributes w/ getters e setters
        //Getters
        string getTitle() {
            return this->title;
        }
        string getAuthor() {
            return this->author;
        }

        //Setters
        void setTitle(string title) {
            this->title = title;
        }
        void setAuthor(string author) {
            this->author = author;
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
    cout << book1.getTitle() << endl;
    cout << book1.getAuthor() << endl;

    book1.setTitle("Blade Runner");
    book1.setAuthor("Philip K Dick");
    cout << book1.getTitle() << endl;
    cout << book1.getAuthor() << endl;
    return 0;
}