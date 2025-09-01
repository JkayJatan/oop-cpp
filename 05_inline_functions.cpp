#include <iostream>
using namespace std;
class Math {
public:
    inline int square(int x) { return x * x; } // hint to inline
};

int main() {
    Math m;
    cout << m.square(9) << "\n";
    return 0;
}
