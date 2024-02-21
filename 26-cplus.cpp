#include <iostream>

class BankAccount {
public:
    int accountNumber;
    double balance;

    // Constructor
    BankAccount(int accNum, double bal) : accountNumber(accNum), balance(bal) {
        std::cout << "Constructor called for account number " << accountNumber << std::endl;
    }

    // Copy Constructor
    BankAccount(const BankAccount& other) {
        accountNumber = other.accountNumber;
        balance = other.balance;
        std::cout << "Copy constructor called for account number " << accountNumber << std::endl;
    }

    // Method to display account details
    void displayAccount() const {
        std::cout << "Account Number: " << accountNumber << ", Balance: " << balance << std::endl;
    }
};

int main() {
    // Creating an object of BankAccount class
    BankAccount acc1(12345, 1000.0);
    std::cout << "Account 1 details: ";
    acc1.displayAccount();

    // Using copy constructor to create another account
    BankAccount acc2 = acc1;
    std::cout << "Account 2 details (copied from account 1): ";
    acc2.displayAccount();

    return 0;
}

