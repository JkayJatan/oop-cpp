#include <iostream>
using namespace std;

// Base class
class Animal {
public:
    void eat() {
        cout << "This animal eats food." << endl;
    }
};

// Derived from Animal
class Dog : public Animal {
public:
    void bark() {
        cout << "The dog barks." << endl;
    }
};

// Derived from Dog
class Puppy : public Dog {
public:
    void sleeps() {
        cout << "The puppy sleeps." << endl;
    }
};

int main() {
    Puppy p;
    p.eat();   // from Animal
    p.bark();  // from Dog
    p.sleeps();  // from Puppy
    return 0;
}
