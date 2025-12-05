#include <iostream>

using namespace std;

int main(){
    //1
    int sum = 0;
    int i;
    int j;
    int k;

    for(i = 1; i <= 2; i++){
        for (j = 2; j <= 3; j++){
            for (k = 1; k <= 2; k++){
                sum = sum + i;
                
            }
        }
    }
    cout  << sum;
}



