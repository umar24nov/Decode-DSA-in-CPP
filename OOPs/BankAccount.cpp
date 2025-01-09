/* Create a class "BankAccount" with attributes account
 number and balance. Implement methods to deposit and 
 withdraw funds, and a display method to show the account details */
#include <iostream>
using namespace std;

class BankAccount {
private:
    string accountNumber;
    double bankBalance;

public:
    BankAccount(string accountNumber, double bankBalance) {
        this->accountNumber = accountNumber;
        this->bankBalance = bankBalance;
    }

    void depositFunds(double amount) {
        bankBalance = bankBalance + amount;
    }

    void withdrawFunds(double amount) {
        if (bankBalance >= amount) {
            bankBalance = bankBalance - amount;
        } else {
            cout << "Insufficient balance!" << endl;
        }
    }

    void display() {
        cout << "Your account number is " << accountNumber <<" and ";
        cout << "Your bank balance is : " << bankBalance << endl;
    }
};
int main() {
    BankAccount account("1621001500463500", 325);
    account.display();
    account.depositFunds(500);
    account.display();
    account.withdrawFunds(300);
    account.display();
    return 0;
}
