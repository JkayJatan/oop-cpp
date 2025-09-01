#include <iostream>
using namespace std;

class Number {
private:
    int value;   // private, cannot be accessed directly outside class

public:
    Number(int v) : value(v) {}

    // declare friend function
    friend void showValue(Number n);
};

// friend function definition
void showValue(Number n) {
    // can access private member 'value'
    cout << "The value is: " << n.value << endl;
}

int main() {
    Number num(42);

    // normally can't access num.value (private),
    // but friend function can
    showValue(num);

    return 0;
}
