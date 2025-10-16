#include <iostream>
using namespace std;

class Box {
private:
    int length;

public:
    Box() {
        length = 10;
    }

    // Friend function declaration
    friend void displayLength(Box b);
};

// Friend function definition
void displayLength(Box b) {
    cout << "Length is: " << b.length << endl;  // Accessing private member
}

int main() {
    Box b1;
    displayLength(b1);     // Friend function call
    return 0;
}
n
