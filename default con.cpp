#include <iostream>
using namespace std;

class Student {
public:
    Student() { // Default Constructor
        cout << "Default Constructor Called!" << endl;
    }
};

int main() {
    Student s1;  // Constructor is called automatically
    return 0;
}

