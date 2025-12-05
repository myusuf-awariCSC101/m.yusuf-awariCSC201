#include <iostream>
#include <fstream>

using namespace std;
// ofstream ==> write to a file
// ifstream ==> read from a file
// fstream ==> read and write

int main(){
    ofstream outfile("data.txt");

    if(!outfile){
        cout << "Error opening this file";
        return 0;
    }

    outfile << "welcome to c++ class\n";
    outfile << "This is file handling class";

    outfile.close();
    cout << "DONE";
}