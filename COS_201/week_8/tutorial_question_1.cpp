#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
#include <iomanip> // for our decimal



using namespace std;

int main(){
    string full_name;
    int jamb_score;
    double waec_average;
    int age;
    bool choice_pau;
    bool disciplinary;
    int hostel_preference;
    int temp;

//--------------------------------------------------------INPUTS----------------------------------------------------
    cout << "Kindly enter your full name: ";
    getline(cin, full_name);

    cout << "Kindly enter your JAMB score: ";
    cin >> jamb_score;

    cout << "Kindly enter your WAEC average: ";
    cin >> waec_average;

    cout << "Kindly enter your Age: ";
    cin >> age;

    cout << "Did you select PAU as your first choice PAU (1 - yes /0 - no)? ";
    cin >> temp;
    choice_pau = (temp == 1);

    cout << "Any previous disciplinary record (1 - yes /0 - no)? ";
    cin >> temp;
    disciplinary = (temp == 1);


    cout << "Select your preferred Hostel(1, 2 or 3): ";
    cout << "\n1. Main";
    cout << "\n2. Annex";
    cout << "\n3. Day\n";
    cin >> hostel_preference;

    double base_tuition = 1500000;
    double hostel_fees;


//------------------------------------------ADMISSION STUFF---------------------------------------------------------
    string admission_status = "Pending";

    // Reject FIRST (IMPORTANT)
    if (disciplinary == true || age < 15){
        admission_status = "Rejected";
    }
    else if ((jamb_score >= 220 && waec_average >= 60 && choice_pau)
          || (jamb_score >= 200 && waec_average >= 70)){
        admission_status = "Admitted";
    }
    else {
        admission_status = "Pending";
    }

//-------------------------------------------SCOLARSHIP--------------------------------------------------------------
    double scholarship_disc = 0;
    if (admission_status == "Admitted"){
        if (jamb_score >= 320){
        scholarship_disc = 30;
        }
        else if (jamb_score >= 280){
            scholarship_disc = 20;
        }
        else if (jamb_score >= 240){
            scholarship_disc = 10;
        }
        else {
            scholarship_disc = 0.0;
        }
    
    
        if (waec_average >= 80 && choice_pau == true)
                scholarship_disc += 5;

        if (scholarship_disc > 35)
                scholarship_disc = 35;

    }
 //-------------------------------------------HOSTEL ASSIGNMENT AND FEES--------------------------------------------------------------
    string hostel_name;
    if (admission_status == "Admitted" && disciplinary == 0){
        if (hostel_preference == 1){
            hostel_name = "Main Hostel";
            hostel_fees = 180000;
        }
        else if (hostel_preference == 2){
            hostel_name = "Annex Hostel";
            hostel_fees = 120000;
        }
        else if (hostel_preference == 3){
            hostel_name = "Day Student";
            hostel_fees = 0;
        }
        else{
            cout << "invalid selection";
            hostel_fees = 0;
        }

    }
    else if (admission_status == "Pending"){
        hostel_name = "On Hold";
        hostel_fees = 0;
    }
    else if (admission_status == "Rejected"){
        hostel_name = "Not Applicable";
        hostel_fees = 0;
    }
//-------------------------------------------RANDOM SHIIII-------------------------------------------------------------
    srand( time(0)); /*this is what allows the random number to change every second*/
    //srand() sets up the randomness
    int r = rand() % 100 + 1;
    bool isPrime = (r==2||r==3||r==5||r==7||r==11||r==13||r==17||r==19||r==23||r==29||
                    r==31||r==37||r==41||r==43||r==47||r==53||r==59||r==61||r==67||
                    r==71||r==73||r==79||r==83||r==89||r==97);

//-----------------------------------------------------TOTALS------------------------------------------------------------------
double merit_grant;
    if (isPrime && admission_status == "Admitted") {
        merit_grant = 50000;
    }
    else{
        merit_grant = 0;
    }

    // TOTALS
    double tuition_after = base_tuition - ((scholarship_disc / 100.0) * base_tuition);
    double total_payable = tuition_after + hostel_fees - merit_grant;

    if (total_payable < 0) {
        total_payable = 0;
    }

    // OUTPUT
    cout << fixed << setprecision(2); //Our decimal is  only 2 places
    cout << "\nName: " << full_name ;
    cout << "\nAdmission Status: " << admission_status;
    cout << "\nScholarship: " << scholarship_disc << "%  Tuition After Scholarship: ₦" << tuition_after;
    cout << "\nHostel: " << hostel_name << "  Fee: ₦" << hostel_fees;
    cout << "\nRandom draw: " << r << "   Merit Grant: ₦" << merit_grant;
    cout << "\nTOTAL PAYABLE: ₦" << total_payable;

    return 0;


}
    
