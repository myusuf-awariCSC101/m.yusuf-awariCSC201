#include <iostream>
using namespace std;

int main(){
	int year;
	cout<<"Enter a year: ";
	cin >> year;
	
	switch (year % 12){      //% this is used to calculate  
		case 0:             //the years so even if i put 23,
		    cout<<"Monkey"; //it'll keep counting between 0 and 11
		    break;          //till its done counting
		case 1:
			cout<<"Rooster";
			break;
		case 2:
			cout<<"Dog";
			break;
		case 3:
			cout<<"Pig";
			break;
		case 4:
			cout<<"Rat";
			break;
		case 5:
			cout<<"Ox";
			break;
		case 6:
			cout<<"Tigwer";
			break;
        case 7:
		    cout<<"Rabbit";
		    break;
		case 8:
			cout<<"Dragon";
			break;
		case 9:
			cout<<"Snake";
			break;
		case 10:
			cout<<"Horse";
			break;
		case 11:
			cout<<"Sheep";
            break;
		default :
			cout<<"Not avalid input";	
	}

	return 0;	
}