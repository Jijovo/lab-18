using namespace std;
#include <iostream>

//define review node
struct Review {
    //private members
    private:
    int rating;
    string comment;
    Review* next;
    //constructor
    public:
    Review(int r, string c);

};

int main() {
    //create linked list
    Review* head;
    //ask user for mode
    int mode;
    cout << "Select mode: Add nodes at head (1) or Add nodes at tail (2): ";
    cin >> mode;
    cout << endl;
    //ask user for review
    int r;
    string c;
    cout<< "Review 1:" << endl << "Enter rating (1-5): ";
    cin >> r;
    cout << endl << "Enter comment: ";
    cin.ignore();
    getline(cin, c);
    //create new review node
    head = new Review(r, c);
    //ask for second review
    cout<< "Review 2:" << endl << "Enter rating (1-5): ";
    cin >> r;
    cout << endl << "Enter comment: ";
    cin.ignore();
    getline(cin, c);
    //create new review node
    
    return 0;
}

//define constructor
Review::Review(int r, string c) {
    rating = r;
    comment = c;
    next = nullptr;
}