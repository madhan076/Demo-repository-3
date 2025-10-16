#include <iostream>
using namespace std;

class Student {
private:
    int rollNo;

public:
    // Parameterized constructor
    Student(int r) {
        rollNo = r;
    }

    // Copy constructor
    Student(const Student &s) {
        rollNo = s.rollNo;
    }

    void display() {
        cout << "Roll No: " << rollNo << endl;
    }
};

int main() {
    Student s1(101);
    Student s2 = s1;  // Copy constructor called

    s1.display();
    s2.display();
    return 0;
}

