#include <iostream>
using namespace std;

class BankAccount {
private:
    string depositorName;
    int accountNumber;
    string accountType;
    double balance;

public:
    // Constructor to initialize the data members
    BankAccount(string name, int accNumber, string type, double initialBalance) {
        depositorName = name;
        accountNumber = accNumber;
        accountType = type;
        balance = initialBalance; //we talk in dollars only :)
    }

    // Member function to deposit an amount
    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Deposited $" << amount << " into the account. New balance: $" << balance << endl;
        } else {
            cout << "Invalid deposit amount." << endl;
        }
    }

    // Member function to withdraw an amount after checking the balance
    void withdraw(double amount) {
        if (amount > 0 && balance >= amount) {
            balance -= amount;
            cout << "Withdrawn $" << amount << " from the account. New balance: $" << balance << endl;
        } else {
            cout << "Invalid withdrawal amount or insufficient balance." << endl;
        }
    }

    // Member function to display the name and balance
    void display() {
        cout << "Account Holder: " << depositorName << endl;
        cout << "Account Number: " << accountNumber << endl;
        cout << "Account Type: " << accountType << endl;
        cout << "Balance: $" << balance << endl;
    }
};

int main() {
    // Create an object of the BankAccount class
    BankAccount cust1("Anup Gupta", 12345, "Savings", 1000.0);

    // Display account information
    cust1.display();

    // Deposit and withdraw some amounts
    cust1.deposit(500.0);
    cust1.withdraw(200.0);
    cust1.withdraw(1500.0); // Should display an error message

    // Display updated account information
    cust1.display();

    return 0;
}
