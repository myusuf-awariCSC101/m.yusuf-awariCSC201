#include <iostream>
using namespace std;


void edit(int number, int numbers[]){
    number = 1001; // Assign a new value to number
    numbers[0] = 5555; // Assign a new value to numbers[0]
    }
    
int main(){
    int x = 1; // x represents an int value
    int y[4] = {23, 13, 44, 77}; // y represents an array of int values
    y[0] = x; // Re-set y[0] to the value of x(1)
    edit(x, y); // Invoke edit with arguments x and y
    cout << "x is " << x << endl;
    cout << "y[0] is " << y[0] << endl;
    return 0;
}
