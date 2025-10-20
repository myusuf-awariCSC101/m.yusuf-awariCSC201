#include <iostream>
#include <cmath>

using namespace std;


/*Write a c++ program that prints the hypotenuse of a right-angled 
triangle. Ask the user to enter the length of the other two sides 
of the triangle. Hint: Use Pythagoras theorem.*/

int main(){
    double num1, num2, hypotenuse, a;
    cout << "Enter the adjacent of the triangle: ";
    cin >> num1;

    cout << "\nEnter the opposite of the triangle: ";
    cin >> num2;

    cout << "\nThe hypotenuse of the triangle: ";
    a = pow(num1,  2) + pow(num2, 2);
    hypotenuse = sqrt(a);

    cout << hypotenuse;

    return 0;

}