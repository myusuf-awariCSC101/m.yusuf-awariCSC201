#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(){
    int seed = time(0);/*this is where  the range starts from*/
    srand(seed);
    cout << rand() % 21; /*this is the limit  0 to 20*/
    return 0;
}