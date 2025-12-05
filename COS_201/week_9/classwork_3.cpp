#include <iostream>
#include <algorithm>   // for max()
using namespace std;

int main() {
    float scores[8] = {35.5, 88.5, 76.0, 77.0, 80.0, 92.0, 58.0, 45.5};

    float max_num = scores[0];
    
    for(int i = 1; i < 8; i++){
        max_num = max(max_num, scores[i]); 
    } 

    cout << "The maximum number is: " << max_num;

    float min_num = scores[0];

    for(int i = 1; i < 8; i++){
       if(scores[i]< min_num){
        min_num = scores[i];
       }
    } 

    cout << "\nThe index of the minimum number is: " << min_num;

    
}
