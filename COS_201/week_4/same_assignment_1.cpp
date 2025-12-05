#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(){
    string full_name = "";
    bool pau_student = 0;
    double initial_lodging_cost = 0;
    double discount_lodging_cost = 0;

    double initial_registration_cost = 0;
    double discount_registration_cost = 0;

    int course_number = 0;
    string course = "";

    int location_number = 0;
    string location = "";

    int days = 0;
    double lodging_per_day;
    double total = 0;

/*User information input*/
    cout << "Kindly enter your full name: ";
    getline(cin, full_name);

    cout << "Are you a PAU student (yes = 1, no = 0)?";
    cin >> pau_student;

    cout << "Select a course (1-5): ";
    cout << "\n1. Photography \n2. Painting \n3. Fish Farming \n4. Baking \n5. Public Speaking\n";
    cin >> course_number;

    cout << "Select a location (1-5): ";
    cin >> location_number;



/*Selecting the course*/
    if (course_number == 1){
        course = "Photography";
        days = 3;
        initial_registration_cost = 10000;
    }

    else if (course_number == 2){
        course = "Painting";
        days = 5;
        initial_registration_cost = 8000;
    }

    else if (course_number == 3){
        course = "Fish Farming";
        days = 7;
        initial_registration_cost = 15000;
    }

    else if (course_number == 4){
        course = "Baking";
        days = 5;
        initial_registration_cost = 13000;
    }

    else if (course_number == 5){
        course = "Public Speaking";
        days = 2;
        initial_registration_cost = 5000;
    }

    else {
        cout << "Invalid number selection";
    }
/*Selecting the accomodation*/
    if (location_number == 1){
        location = "Camp House A";
        initial_lodging_cost = 10000;
    }

    else if (location_number == 2){
        location = "Camp House B";
        initial_lodging_cost = 2500;
    }

    else if (location_number == 3){
        location = "Camp House C";
        initial_lodging_cost = 5000;
    }

    else if (location_number == 4){
        location = "Camp House D";
        initial_lodging_cost = 13000;
    }

    else if (location_number == 5){
        location = "Camp House E";
        initial_lodging_cost = 5000;
    }

/*Calculations*/
    initial_lodging_cost = lodging_per_day * days;
    total = discount_registration_cost + discount_lodging_cost;

/*Discount Applications*/
    if (pau_student == 1){
        if (location_number == 1 || location_number == 2) {
            discount_lodging_cost = initial_lodging_cost - (0.05 *  initial_lodging_cost);
        }
        else{
            discount_lodging_cost = initial_lodging_cost;
        }
    }

    if (days > 5 || initial_registration_cost > 12000){
        discount_registration_cost = initial_registration_cost - (0.05 *  initial_registration_cost);
    }
    else{
        discount_registration_cost = initial_registration_cost;
    }

   
    srand( time(0)); /*this is where  the range starts from*/
    int r = rand() % 101; /*this is the limit  0 to 100*/
    cout << "\nRandom Number: " << r;
    
    if (r == 7 || r == 77){
        total = total - 500;
    }
/*Effect of are you a pau student?*/
    string pauStatus;
    if (pau_student == true) {
        pauStatus = "Yes)";
    } else {
        pauStatus = "No)";
    }

/*Output will look like this*/
    cout << "\n-----------------------------------------------------------";
    cout << "\n\nName: " << full_name << " (PAU student: " << pauStatus;


    cout << "\n\nCourse: " << course << "  Days: " << days;
    

    cout << "\n\nRegistration: ₦" << initial_registration_cost << "  Final Registration: ₦" << discount_registration_cost << " (after any reg discount)";
    
    cout << "\n\nLodging: ₦" << lodging_per_day <<" x " << days << " = ₦" << initial_lodging_cost << " Final Lodging cost: ₦" << discount_lodging_cost << " (after any lodging discout)";

    cout << "\n\nRandom draw: " << r << " Promo Applied: ₦500 (If 77 is picked)";
    cout << "\n\nTOTAL: ₦" << total;


}