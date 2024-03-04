#include <iostream>

class BankAccount {
public:
    int accountNumber;
    double balance;

    BankAccount(int accNum, double bal) : accountNumber(accNum), balance(bal) {
        std::cout << "Constructor called for account number " << accountNumber << std::endl;
    }

    BankAccount(const BankAccount& other) {
        accountNumber = other.accountNumber;
        balance = other.balance;
        std::cout << "Copy constructor called for account number " << accountNumber << std::endl;
    }

    void displayAccount() const {
        std::cout << "Account Number: " << accountNumber << ", Balance: " << balance << std::endl;
    }
};

int main() {
    BankAccount acc1(12345, 1000.0);
    std::cout << "Account 1 details: ";
    acc1.displayAccount();

    BankAccount acc2 = acc1;
    std::cout << "Account 2 details (copied from account 1): ";
    acc2.displayAccount();

    return 0;
}

