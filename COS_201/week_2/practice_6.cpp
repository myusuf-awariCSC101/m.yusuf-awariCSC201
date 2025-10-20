#include <iostream>

using namespace std;

int main()
{
    double pi = 3.142;
    double r;
    cout<<"Enter the radius: ";
    cin>> r;
    double area = pi * r * r;

    cout<<"Area: " << area;
    return 0;
}
