#include <iostream>
using namespace std;

class Person {
public:
    string name;
    Person(string n) {
        name = n;
    }
    Person(const Person &p) { // copy constructor
        name = p.name;
    }
};

int main() {
    Person p1("Alice");
    Person p2(p1);
    cout << "Copied Person: " << p2.name << endl;
    return 0;
}
