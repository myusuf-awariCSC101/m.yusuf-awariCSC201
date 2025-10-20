#include <iostream>
#include <cmath>

using namespace std;

/*Write a program that reads in two numbers: 
an account balance and an annual interest rate 
expressed as a percentage. 
Your program should then display the new balance after a year. 
There are no deposits or withdrawals—just the interest payment*/

int main(){
    double balance, interest, amount;
    cout << "Enter your Account Balance: ";
    cin >> balance;

    cout << "\nEnter your annual interest rate percent: ";
    cin >> interest;

    cout << "\nBalance after one year: ";
    amount = (balance * interest) / 100.0 + balance;

    cout << amount;

    return 0;


}