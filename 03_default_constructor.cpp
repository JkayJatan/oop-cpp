#include <iostream>
using namespace std;
class Book {
public:
    string title;
    Book() { // default constructor
        title = "Unknown";
    }
};

int main() {
    Book b1;
    cout << "Book: " << b1.title << endl;
    return 0;
}
