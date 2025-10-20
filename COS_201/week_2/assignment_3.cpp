#include <iostream>

using namespace std;

/*Question 3
Ask the user for the total
purchase amount and compute the sales task at 6%*/

int main() {
    cout << "Please enter your total purchase amout: ";
    double x;

    cin >> x;

    double selling_price = x - 0.06 * x ;

    cout << "The selling price now is: " << selling_price;
} 