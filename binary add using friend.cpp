#include <iostream>
using namespace std;

class Dist {
    int meter;
public:
    Dist(int m): meter(m) {}
    friend Dist operator+(const Dist &d1, const Dist &d2); // Binary + Overload
    void show() { cout << "Distance: " << meter << " meters" << endl; }
};

Dist operator+(const Dist &d1, const Dist &d2) {
    return Dist(d1.meter + d2.meter);
}

int main() {
    Dist d1(50), d2(70);
    Dist d3 = d1 + d2; // Calls friend function
    d3.show();
    return 0;
}

