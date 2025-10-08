#include <iostream>
#include <vector>

using namespace std;

int main() {
    //Vector
    /*
        Vector is essentialy a dynamic array that storage values of same type
    */
    //#include <vector>
    vector<string> friends;
    friends.push_back("Adam Sandler"); //0
    friends.push_back("Brad Pitt"); //1
    friends.push_back("Ryan Gosling"); //2
    friends.insert(friends.begin()+1, "Jim Carrey"); //1 //Jim Carrey goes to 1, and Brad Pitt and Ryan Gosling +1 pos above

    cout << "----- Vector -----" << endl;
    cout << friends.at(0) << endl;
    cout << friends.at(1) << endl;
    cout << friends.at(2) << endl;
    cout << friends.at(3) << endl;
    cout << friends.size() << endl << endl;

    friends.erase(friends.begin()); //F Adam Sandler, now Jim Carrey is in the friends[0]
    cout << friends.at(0) << endl;
    return 0;
}