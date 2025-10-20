#include <iostream>
#include <cmath>

using namespace std;

int main(){
    double balance, interest, amount, amount2;
    cout << "Enter your Account Balance: ";
    cin >> balance;

    cout << "\nEnter your annual interest rate percent: ";
    cin >> interest;

    cout << "\nBalance after two years: ";
    amount = (balance * interest) / 100.0 + balance;

    amount2 =(amount * interest) / 100.0 + amount;

    cout << amount2;

    return 0;


}