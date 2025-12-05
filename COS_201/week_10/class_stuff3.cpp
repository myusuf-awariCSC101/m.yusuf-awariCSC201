#include <iostream>
#include <fstream>

using namespace std;
// ofstream ==> write to a file
// ifstream ==> read from a file
// fstream ==> read and write


//fstream
//ios::out ==> write mode
//ios::app ===> append mode
//ios::trunc ==> erase file before writing
//ios::in ====> read mode
int main(){
    fstream file("data.txt", ios::out | ios::app);

    file << "\nAdding a new line\n";
    file.close();
    cout << "DONE";
}