#include <iostream>

using namespace std;


/* Question 1  
Write a c++ program that reads two numbers and prints
out the sum, product and difference
*/

int main()
{
    double a;
    double b;
    cout<<"Enter a value for a and b\n";
    cout<<"a = ";
    cin>> a ;
    cout<< "b = ";
    cin>> b;
    double sum = a + b;
    double difference = a - b;
    double product = a * b;

    cout<<"\nSum = " << sum ;
    cout<<"\nDifference = " << difference;
    cout<<"\nProduct = " << product;
    return 0;
}