#include <iostream>
using namespace std;

class Student {
public:
    int roll;
    static int totalStudents; // static data member (declaration)

    Student(int r) : roll(r) {
        totalStudents++; // increment every time a student is created
    }
};

// definition outside the class
int Student::totalStudents = 0;

int main() {
    Student s1(101);
    Student s2(102);
    Student s3(103);
    Student s4(104);

    cout << "Total Students: " << Student::totalStudents << endl; 
    return 0;
}
