#include <iostream>
#include <string>
using namespace std;

class BankAccount {
private:
    string depositorName; 
    int accountNumber; 
    string accountType; 
    float balance; 

public:
    void initialize(string name, int accNumber, string accType, float initialBalance) {
        depositorName = name;
        accountNumber = accNumber;
        accountType = accType;
        balance = initialBalance;
    }

    void deposit(float amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Amount deposited successfully. New balance: " << balance << endl;
        } else {
            cout << "Invalid deposit amount." << endl;
        }
    }

    void withdraw(float amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            cout << "Amount withdrawn successfully. New balance: " << balance << endl;
        } else {
            cout << "Invalid withdrawal amount or insufficient balance." << endl;
        }
    }

    void display() const {
        cout << "Depositor Name: " << depositorName << endl;
        cout << "Account Balance: " << balance << endl;
    }
};

int main() {
    BankAccount account;
    account.initialize("John Doe", 123456, "Saving", 1000.0);

    account.deposit(500.0);
    account.withdraw(200.0);
    account.display();

    return 0;
}
