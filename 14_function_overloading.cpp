#include <iostream>
using namespace std;

class Calculator {
public:
    // Function to add two integers
    int add(int a, int b) {
        return a + b;
    }

    // Function to add three integers
    int add(int a, int b, int c) {
        return a + b + c;
    }

    // Function to add two floating-point numbers
    double add(double a, double b) {
        return a + b;
    }
};

int main() {
    Calculator calc;

    cout << "Sum of 2 and 3 (int): " << calc.add(2, 3) << endl;
    cout << "Sum of 1, 2, and 3 (int): " << calc.add(1, 2, 3) << endl;
    cout << "Sum of 2.5 and 3.7 (double): " << calc.add(2.5, 3.7) << endl;

    return 0;
}
