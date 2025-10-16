#include <iostream>
using namespace std;

void greet(string name = "Guest") {
    cout << "Hello, " << name << "!" << endl;
}

int main() {
    greet();              // Uses default argument "Guest"
    greet("Madhan");    // Uses provided argument
    return 0;
}

