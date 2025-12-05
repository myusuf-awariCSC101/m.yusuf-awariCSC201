#include <iostream>
#include <fstream>

using namespace std;
// ofstream ==> write to a file
// ifstream ==> read from a file
// fstream ==> read and write

int main(){
    ifstream infile("data.txt");

    if(!infile){
        cout << "Error opening this file";
        return 0;
    }

int number;
int sum;
while(infile >> number){
    cout << number<< endl;
    sum = sum + number;
}
cout << "The sum is " << sum;
infile.close();
}