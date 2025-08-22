#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string name;
    int rollNo;
    int marks[5];   // 5 subjects
    int total;
    float percentage;
    char grade;

public:
    void input() {
        cout << "Enter Student Name: ";
        getline(cin, name);
        cout << "Enter Roll Number: ";
        cin >> rollNo;

        total = 0;
        cout << "Enter marks for 5 subjects (out of 100):\n";
        for (int i = 0; i < 5; i++) {
            cout << "Subject " << i + 1 << ": ";
            cin >> marks[i];
            total += marks[i];
        }

        percentage = total / 5.0;
        calculateGrade();
    }

    void calculateGrade() {
        if (percentage >= 90)
            grade = 'A';
        else if (percentage >= 75)
            grade = 'B';
        else if (percentage >= 60)
            grade = 'C';
        else if (percentage >= 40)
            grade = 'D';
        else
            grade = 'F';
    }

    void display() {
        cout << "\n--------- Report Card ---------\n";
        cout << "Name       : " << name << endl;
        cout << "Roll No    : " << rollNo << endl;
        cout << "Marks      : ";
        for (int i = 0; i < 5; i++) {
            cout << marks[i] << " ";
        }
        cout << "\nTotal      : " << total << "/500" << endl;
        cout << "Percentage    : " << percentage << "%" << endl;
        cout << "Grade      : " << grade << endl;
        cout << "--------------------------------\n";
    }
};

int main() {
    Student s;
    s.input();
    s.display();

    return 0;
}
