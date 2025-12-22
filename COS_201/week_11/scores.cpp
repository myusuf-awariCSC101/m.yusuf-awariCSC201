#include <iostream>
#include <fstream>

using namespace std;


int main(){
    ofstream outfile("scores.csv");

    if(!outfile){
        cout << "Error opening this file";
        return 0;
    }

    outfile << "STUDENT ID, SCORE\n";
    outfile << "\n1001, 72\n" << "1002, 45\n" << "1003, 88\n" << "1004, 67\n"
    << "1005, 90\n" << "1006, 53\n" << "1007, 89";

    outfile.close();
    cout << "Student Id and scores ready";
}