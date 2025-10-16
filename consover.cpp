#include <iostream>
using namespace std;

class Student {
private:
    int rollNo;
    string name;

public:
    // Default constructor
    Student() {
        rollNo = 0;
        name = "Unknown";
    }

    // Parameterized constructor
    Student(int r, string n) {
        rollNo = r;
        name = n;
    }

    void display() {
        cout << "Roll No: " << rollNo << ", Name: " << name << endl;
    }
};

int main() {
    Student s1;                   // Calls default constructor
    Student s2(101, "Ravi");      // Calls parameterized constructor

    s1.display();
    s2.display();
    return 0;
}

