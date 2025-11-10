#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(){
    string name;
    bool pau;
    int course_number;
    int location;
    double days = 0;
    int initial_registration = 0;
    double lodging_per_day = 0;
    string course;

    cout << "Enter your full name: "; 
    getline(cin >> ws, name);

    cout << "\nAre you a student of Pan Atlantic University (Enter 1 for Yes and 0 for No)?  ";
    cin >> pau;

    cout << "\nSelect a course of your choice from 1 - 5: ";
    cin >> course_number;

    cout << "\nSelect your preferred location from 1 - 5: ";
    cin >> location;

/*Course selection*/
    if (course_number == 1) { 
        course = "Photography";
        days = 3;
        initial_registration = 10000;
    }

    else if (course_number == 2) {
        course = "Painting";
        days = 5;
        initial_registration = 8000;
    }

    else if (course_number == 3) {
        course = "Fish Farming";
        days = 7;
        initial_registration = 15000;
    }
    
    else if (course_number == 4) {
        course = "Banking";
        days = 5;
        initial_registration = 13000;
    }

    else if(course_number == 5) {
        course = "Painting";
        days  = 2;
        initial_registration = 5000;
    }

    else {
        cout << "Error, no valid selection";
    }

/*location selections*/
    if (location == 1) { 
        string location;
        location = "Camp House A";
        lodging_per_day = 10000;
    }

    else if (location == 2) { 
        string location;
        location = "Camp House B";
        lodging_per_day = 2500;
    }

    else if (location == 3) { 
        string location;
        location = "Camp House C";
        lodging_per_day = 5000;
    }
    
    else if (location == 4) { 
        string location;
        location = "Camp House D";
        lodging_per_day = 13000;
    }

    else if(location == 5) {
        string location;
        location = "Camp House E";
        lodging_per_day = 5000;
    }

    else {
        cout << "Error, no valid selection";
    }

    double discount_registration = 0;
    double discount_lodgingCost = 0;


    double initial_lodgingCost = lodging_per_day * days;
    double total = discount_registration + discount_lodgingCost;
    
;
    

    if (pau == 1) {
        if (location == 1 || location == 2){
            discount_lodgingCost = initial_lodgingCost - 0.05 * initial_lodgingCost;
        }
        else { 
            discount_lodgingCost = initial_lodgingCost;
        }
    }

    if ((days > 5) || (initial_registration > 12000)){
        discount_registration = initial_registration - 0.03 * initial_registration;
    }
    else {
        discount_registration = initial_registration;
    }

    srand( time(0)); /*this is where  the range starts from*/
    int r = rand() % 101; /*this is the limit  0 to 101*/
    cout << "\nRandom Number: " << r;
    
    if (r == 7 || r == 77){
        total = total - 500;
    }
/*Effect of are you a pau student?*/
    string pauStatus;
    if (pau == true) {
        pauStatus = "Yes)";
    } else {
        pauStatus = "No)";
    }

/*Output will look like this*/
    cout << "\n-----------------------------------------------------------";
    cout << "\n\nName: " << name << " (PAU student: " << pauStatus;


    cout << "\n\nCourse: " << course << "  Days: " << days;
    

    cout << "\n\nRegistration: ₦" << initial_registration << "  Final Registration: ₦" << discount_registration << " (after any reg discount)";
    
    cout << "\n\nLodging: ₦" << lodging_per_day <<" x " << days << " = ₦" << initial_lodgingCost << " Final Lodging cost: ₦" << discount_lodgingCost << " (after any lodging discout)";

    cout << "\n\nRandom draw: " << r << " Promo Applied: ₦500 (If 77 is picked)";
    cout << "\n\nTOTAL: ₦" << total;

}