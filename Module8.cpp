// Module8.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class BankAccount {
private:
    double balance;
    double fees;
    double tolerance;
    bool isFrozen;

public:
    BankAccount() {
        balance = 0.0;
        fees = 0.0;
        tolerance = 500.00;
        isFrozen = false;
      
    }
    void setTolerance(double t) {
        tolerance = t;
        if (fees > tolerance) {
            FreezeAccount();
        }
    }
    bool getIsFrozen() {
        return isFrozen;
    }
    void deposit(double amount) {
        if (isFrozen == true) {
            cout << "Account Frozen, please contact support" << endl;
        }
        else {
            balance += amount;
            cout << "Added starting balance of " << balance << endl;
            saveTransaction("Deposit", amount, "Bank");
        }
      
    }
    
    void overdraft(double num) {
        double overdraftFee = (num - balance) + 25;
            fees += overdraftFee;
            cout << " You have overdrawn your account, a $25 fee has been added to your account" << endl;
            saveTransaction("Overdraft Fee", overdraftFee, "Bank System");
            if (fees > tolerance) {
                FreezeAccount();
            }
    }

    void payFee(double num) {
        fees -= num;
        cout << "You have payed: $" << num << endl;
        cout << "Remaining amount owed is: $" << fees << endl;
    }

    void makePurchase(string item, double cost, string location) {
        if (isFrozen == true) {
            cout << "Account Frozen, please contact support" << endl;
        }
        else {
            if (cost > balance) {
                cout << "Insufficient funds for " << item << endl;
                saveTransaction("Declined Purchase - " + item, 0.00, location);
                overdraft(cost);
            }
            else {
                balance -= cost;
                cout << "Purchased " << item << endl;
                saveTransaction("Purchase - " + item, cost, location);
            }
        }
       
    }
    void displayBalance() {
        if (isFrozen == true) {
            cout << "Account Frozen, please contact support" << endl;
        }
        else {
            cout << "Current Balance: $" << balance << endl;
            cout << "Current Fees: $" << fees << endl;
        }
        
    }

    void FreezeAccount() {
        isFrozen = true;
        cout << "Your Account has been frozen" << endl;
        const double FrozenBalence = balance;
        const double FrozenFee = fees;
        cout << "Remaining assets in account is: $" << balance - fees << endl;

    }

    void saveTransaction(string type, double amount, string location) {
        ofstream file("transactions.txt", ios::app);
        if (file.is_open()) {
            file << type << ": $" << amount << " | Location: " << location << endl;
            file.close();
        }
    }
};

int main() {
    BankAccount myAccount;
    double userTolerence = 500.00;
    string input;
    cout << "Enter account tolerance threashold (Default 500.00)" << endl;
    getline(cin, input);

    if (!input.empty()) {
        userTolerence = stod(input);
    }
    myAccount.setTolerance(userTolerence);


    myAccount.deposit(100.00);
    myAccount.makePurchase("Coffee", 4.50, ".5 miles from Home Address");
    myAccount.makePurchase("Book", 25.00, "3.5 miles from Home Address");
    do {
        myAccount.makePurchase("Amazon Gift card", 25.00, "5,675 miles from Home Address");
    } while (myAccount.getIsFrozen() == false);
   
   
   
    myAccount.displayBalance();

    return 0;
}


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
