#include <iostream>

using namespace std;

/*Write a c++ program that swaps the value
of 2 integers using a temporary variable*/

int main(){
    int a = 5;
    int b = 10;
    int c;
    cout << "a = " << a;
    cout << "\nb = " << b;


    c = a;
    a = b;
    b = c;
    

    cout << "\nThe new a is " << a;
    cout << "\nThe new b is " << b; 


}