#include <iostream>

using namespace std;

int main(){
    //1
    int sum = 0;
    int i = 1;

    while (i<=5){
        sum = +i;
        i++;
        cout <<"\nThe sum is " << sum;
    }
   

    //2

    sum = 0;
    i = 1;

    do{
        sum = +i;
        i++;
        cout <<"\nThe sum is " << sum;

    }
    while (i<=5);


   
}


