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

string line;
while(getline(infile, line)){
    cout << line << endl;
}
infile.close();
}