#include <iostream>
using namespace std;

class ATM {
private:
    double balance;
    string pin;

public:
    // Constructor
    ATM(double initialBalance, string setPin) {
        balance = initialBalance;
        pin = setPin;
    }

    // Verify PIN
    bool verifyPin(string enteredPin) {
        return enteredPin == pin;
    }

    // Check Balance
    void checkBalance() {
        cout << "Your current balance is: ₹" << balance << endl;
    }

    // Deposit Money
    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Successfully deposited ₹" << amount << endl;
        } else {
            cout << "Invalid deposit amount!" << endl;
        }
    }

    // Withdraw Money
    void withdraw(double amount) {
        if (amount > balance) {
            cout << "Insufficient balance!" << endl;
        } else if (amount <= 0) {
            cout << "Invalid withdrawal amount!" << endl;
        } else {
            balance -= amount;
            cout << "Successfully withdrawn ₹" << amount << endl;
        }
    }
};

int main() {
    ATM myATM(5000, "1234"); // Initial balance ₹5000, PIN = 1234
    string enteredPin;
    cout << "===== Welcome to ATM =====" << endl;
    cout << "Enter PIN: ";
    cin >> enteredPin;

    if (!myATM.verifyPin(enteredPin)) {
        cout << "Incorrect PIN! Exiting..." << endl;
        return 0;
    }

    int choice;
    double amount;

    do {
        cout << "\n===== ATM Menu =====" << endl;
        cout << "1. Check Balance" << endl;
        cout << "2. Deposit" << endl;
        cout << "3. Withdraw" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            myATM.checkBalance();
            break;
        case 2:
            cout << "Enter amount to deposit: ";
            cin >> amount;
            myATM.deposit(amount);
            break;
        case 3:
            cout << "Enter amount to withdraw: ";
            cin >> amount;
            myATM.withdraw(amount);
            break;
        case 4:
            cout << "Thank you for using the ATM!" << endl;
            break;
        default:
            cout << "Invalid choice! Try again." << endl;
        }
    } while (choice != 4);

    return 0;
}
