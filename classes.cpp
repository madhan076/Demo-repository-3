#include <iostream>
using namespace std;

class BankAccount {
private:
    int accountNumber;
    string holderName;
    double balance;

public:
    void createAccount(int accNo, string name, double bal) {
        accountNumber = accNo;
        holderName = name;
        balance = bal;
    }

    void deposit(double amount) {
        balance += amount;
        cout << "Deposited: " << amount << endl;
    }

    void withdraw(double amount) {
        if (amount > balance)
            cout << "Insufficient funds!" << endl;
        else {
            balance -= amount;
            cout << "Withdrawn: " << amount << endl;
        }
    }

    void display() {
        cout << "\n--- Account Info ---" << endl;
        cout << "Account No: " << accountNumber << endl;
        cout << "Holder Name: " << holderName << endl;
        cout << "Balance: " << balance << endl;
    }
};

int main() {
    BankAccount acc;
    acc.createAccount(1001, "A. Madhan", 5000.0);
    acc.deposit(1500);
    acc.withdraw(2000);
    acc.display();
    return 0;
}

