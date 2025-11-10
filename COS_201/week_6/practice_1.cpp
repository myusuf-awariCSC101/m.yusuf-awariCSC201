#include <iostream>
using namespace std;

int main(){
	int day;
	cout<<"Enter a day: ";
	cin>>day;
	
	switch (day){
		case 1:
		    cout<<"Weekday";
		    break;
		case 2:
			cout<<"Weekday";
			break;
		case 3:
			cout<<"Weekday";
			break;
		case 4:
			cout<<"Weekday";
			break;
		case 5:
			cout<<"Weekday";
			break;
		case 0:
			cout<<"Weekend";
			break;
		case 6:
			cout<<"Weekend";
			break;
		default :
			cout<<"NOT A DAY";
	}

		
}