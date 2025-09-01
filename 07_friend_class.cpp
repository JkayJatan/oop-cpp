#include <iostream>
using namespace std;
class Secret {
    int code = 42;
    friend class Hacker; // friend class
};

class Hacker {
public:
    int steal(const Secret& s) { return s.code; }
};

int main() {
    Secret s;
    Hacker h;
    cout << h.steal(s) << "\n";
    return 0;
}
