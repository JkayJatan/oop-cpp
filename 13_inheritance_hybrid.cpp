#include <iostream>
using namespace std;

// Base class
class Person {
public:
    void introduce() {
        cout << "I am a person." << endl;
    }
};

// Derived class 1 (Single Inheritance from Person)
class Student : public Person {
public:
    void study() {
        cout << "I am studying." << endl;
    }
};

// Derived class 2 (Single Inheritance from Person)
class Teacher : public Person {
public:
    void teach() {
        cout << "I am teaching." << endl;
    }
};

// Derived class from both Student and Teacher (Multiple Inheritance)
class ResearchScholar : public Student, public Teacher {
public:
    void research() {
        cout << "I am doing research." << endl;
    }
};

int main() {
    ResearchScholar rs;

    // Need to specify because of ambiguity (two Person copies)
    rs.Student::introduce();  
    rs.study();
    rs.teach();
    rs.research();

    return 0;
}
