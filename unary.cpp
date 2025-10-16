#include <iostream>
using namespace std;

class Counter {
    int count;
public:
    Counter(): count(0) {}
    void operator++() { count += 1; }  // Unary ++ Overload
    void show() { cout << "Count: " << count << endl; }
};

int main() {
    Counter c;
    ++c;    // Calls overloaded operator
    c.show();
    return 0;
}

