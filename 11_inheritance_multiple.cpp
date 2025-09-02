#include <iostream>
using namespace std;

// Base class 1
class Teacher {
public:
    void teach() {
        cout << "Teacher is teaching." << endl;
    }
};

// Base class 2
class Researcher {
public:
    void research() {
        cout << "Researcher is researching." << endl;
    }
};

// Derived class inherits from both Teacher and Researcher
class Professor : public Teacher, public Researcher {
public:
    void guide() {
        cout << "Professor is guiding students." << endl;
    }
};

int main() {
    Professor p;
    p.teach();     // from Teacher
    p.research();  // from Researcher
    p.guide();     // from Professor
    return 0;
}
