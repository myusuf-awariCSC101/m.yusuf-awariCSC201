#include <iostream>
using namespace std;

int main(){
    float scores[10] = {35.5, 88.5, 76.0, 77.0, 80.0, 92.0, 58.0, 45.5,
    67.5, 84.0};

    float sum = 0.0, average = 0.0;

    for(int i = 0; i < 10; i++){
        sum += scores[i];
    }
    average = sum / 10.0;
    cout << "The average of the student scores is " << average;
    return 0;
}