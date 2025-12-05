#include <iostream>
using namespace std;

// FUNCTION DECLARATIONSSSSSSSSSS
bool verifyPin(int correctPin);
void displayMenu();
double viewBalance(double balance);
double depositMoney(double balance);
double withdrawMoney(double balance, double dailyLimit);
int resetPin(int currentPin);

// MAIN FUNCTION
int main() {
    double balance = 50000;
    double dailyLimit = 20000;
    int pin = 4321;

// PIN VERIFICATION FAILED
    if (!verifyPin(pin)) {//If you don't get the pin correct, the code just ends here.
        cout << "Oops, your account has been locked.\n";
        return 0;
    }

    int choice;

// MENU LOOP
    do {
        displayMenu();
        cin >> choice;

        switch (choice) {
            case 1:
                viewBalance(balance);
                break;

            case 2:
                balance = depositMoney(balance);
                break;

            case 3:
                balance = withdrawMoney(balance, dailyLimit);
                break;

            case 4:
                pin = resetPin(pin);
                break;

            case 5:
                cout << "Thank you for using our ATM.\n";
                break;

            default:
                cout << "Invalid choice, please select a valid option.\n";
        }

    } while (choice != 5);

    return 0;
}

// PIN VERIFICATIONNNNNNNNN
bool verifyPin(int correctPin) {
    int attempts = 3;
    int user_pin;

    while (attempts > 0) {
        cout << "\nEnter your PIN: ";
        cin >> user_pin;

        if (user_pin == correctPin) {
            return true;
        } else {
            attempts--;
            cout << "\nIncorrect PIN. Attempts left: " << attempts << endl;
        }
    }

    cout << "Account Locked. Please contact your bank.\n";
    return false;
}

// DISPLAY MENU
void displayMenu() {
    cout << "\n\n======== ATM MENU ========\n";
    cout << "1. View Balance\n";
    cout << "2. Deposit Cash\n";
    cout << "3. Withdraw Cash\n";
    cout << "4. Reset PIN\n";
    cout << "5. Exit\n\n";
    cout << "Enter your choice: ";
}//This basically just displays the ATM MENU, nothing is returned.

// VIEW BALANCE
double viewBalance(double balance) {
    cout << "\nCurrent Balance: ₦" << balance << endl;
    return balance;
}//Your balance is displayed

// CHOICE 2: DEPOSIT MONEY 
double depositMoney(double balance) {
    double amount;
    cout << "\nEnter amount to deposit: ₦";
    cin >> amount;

    if (amount > 0) {
        balance += amount;
        cout << "Deposit successful!\n";
    } else {
        cout << "Error: Invalid amount!\n";
    }

    return balance;
}

// CHOICE 3: WITHDRAW MONEY
double withdrawMoney(double balance, double dailyLimit) {
    double amount;
    cout << "\nEnter withdrawal amount: ₦";
    cin >> amount;

    if (amount > balance) {
        cout << "Error: Insufficient balance!\n";
    } else if (amount > dailyLimit) {
        cout << "Error: Amount exceeds daily withdrawal limit!\n";
    } else if (amount <= 0) {
        cout << "Error: Invalid amount.\n";
    } else {
        balance -= amount;
        cout << "Withdrawal successful!\n";
    }

    return balance;
}

// CHOICE 4: RESET THE PIN 
int resetPin(int currentPin) {
    int oldPin, newPin;

    cout << "Enter your old PIN: ";
    cin >> oldPin;

    if (oldPin == currentPin) {
        cout << "Enter new PIN: ";
        cin >> newPin;

        cout << "PIN successfully changed.\n";
        return newPin;
    } else {
        cout << "Incorrect old PIN.\n";
        return currentPin;
    }
}
