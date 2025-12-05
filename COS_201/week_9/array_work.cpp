#include <iostream>
using namespace std;

int main(){
    int numbers[10] = {9, 10, 23, 74, 45, 21, 1, 4, 63, 11};

    // QUESTION 1: Summing all the numbers in an array
    int sum = 0;
    for (int i = 0; i < 10; i++) {
        sum += numbers[i];
    }
    cout << "Sum of all numbers: " << sum << endl;

    //QUESTION 2: Minimum number in an array
    int min_num = numbers[0];
    int min_num_index = 0;

    for(int i = 1; i < 10; i++){
        if(numbers[i] < min_num){
            min_num = numbers[i];
            min_num_index = i;   
        }
    } 

    cout << "The minimum number is: " << min_num;
    cout << "\nIts index is: " << min_num_index << endl;

    // QUESTION 3: Maximum number in an array
    int max_num = numbers[0];
    int max_num_index = 0;

    for(int i = 1; i < 10; i++){
        if(numbers[i] > max_num){
            max_num = numbers[i];
            max_num_index = i;  
        }
    } 

    cout << "The maximum number is: " << max_num;
    cout << "\nIts index is: " << max_num_index << endl;

    // QUESTION 4: Searching for an element in an array
    //LINEAR SEARCH
    int search_element;
    cout << "\nEnter element to search with linear search: ";
    cin >> search_element;
    
    int linear_index = -1;
    for(int i = 0; i < 10; i++) {
        if(numbers[i] == search_element) {
            linear_index = i;
            break;
        }
    }
    
    if(linear_index != -1) {
        cout << "Element found at index: " << linear_index << " (Linear Search)" << endl;
    } else {
        cout << "Element was not found in array(Linear Search)" << endl;
    }

    // QUESTION 5: BINARY SEARCH 

    int sorted_numbers[10];
    for(int i = 0; i < 10; i++) {
        sorted_numbers[i] = numbers[i];
    }
    
    for(int i = 0; i < 9; i++) {
        for(int j = 0; j < 9 - i; j++) {
            if(sorted_numbers[j] > sorted_numbers[j+1]) {
                int temp = sorted_numbers[j];
                sorted_numbers[j] = sorted_numbers[j+1];
                sorted_numbers[j+1] = temp;
            }
        }
    }
    
    cout << "\nSorted array for binary search: ";
    for(int i = 0; i < 10; i++) {
        cout << sorted_numbers[i] << " ";
    }
    cout << endl;
    
    int binary_search_element;
    cout << "Enter element to search using binary search: ";
    cin >> binary_search_element;
    

    int low = 0, high = 9;
    int binary_index = -1;
    
    while(low <= high) {
        int medium = low + (high - low) / 2;
        
        if(sorted_numbers[medium] == binary_search_element) {
            binary_index = medium;
            break;
        }
        else if(sorted_numbers[medium] < binary_search_element) {
            low = medium + 1;
        }
        else {
            high = medium - 1;
        }
    }
    
    if(binary_index != -1) {
        cout << "Element found at index: " << binary_index << " (Binary Search)" << endl;
    } else {
        cout << "Element was not found in array(Binary Search)" << endl;
    }

    
}