#include <iostream>

using namespace std;

int main(){

    int x;
    cout << "Kindly enter your age: ";
    cin >> x;

    if (x >= 18){
        cout << "You are an Adult";
    }
    else{
        cout << "You are NOT an adult";
    }
    return 0;
}