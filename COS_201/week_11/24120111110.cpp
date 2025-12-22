#include <iostream>
#include <fstream>
#include <stdlib.h>   // for rand()

using namespace std;

//-------------------Student Exam Score Analyzer--------------------------
int loadData(const char filename[], int ids[], int scores[], int maxSize){
    ifstream infile(filename);

    if(!infile){
        cout << "Error opening this file";
        return 0;
    }

    string header;
    getline(infile, header);  // skip header line

    int count = 0;
    char comma;

    while (count < maxSize && infile >> ids[count] >> comma >> scores[count]) {
        count++;
    }

    infile.close();
    return count;
}


void printAll(int ids[], int scores[], int size){
    for(int i = 0; i < size; i++){
        cout << "StudentID: " << ids[i] << "   Score: " << scores[i] << endl;
    }
}


//------------------PART C -----------------------------
void computeStats(int scores[], int size, double &average, int &minScore, int &maxScore){

    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += scores[i];
    }
    average = (double)sum / size;
    cout << "\nAverage of all numbers: " << average ;

    //--------------Minimum--------------------------
    minScore =  scores[0];
    for(int i = 1; i < size; i++){
        if(scores[i] < minScore){
            minScore = scores[i];
        }
    } 

    cout << "\nThe minimum number is: " << minScore;

    //-------------Maximum---------------------------
    maxScore = scores[0];
    for(int i = 1; i < size; i++){
        if(scores[i] > maxScore){
            maxScore = scores[i];
        }
    } 

    cout << "\nThe maximum number is: " << maxScore;

}

//----------------PART D-----------------------------
void computeGradeDistribution(int scores[], int size, int &countA, int &countB, int &countC,
                              int &countD, int &countF) 
{
    countA = countB = countC = countD = countF = 0;

    for (int i = 0; i < size; i++) {
        int score = scores[i];

        if (score >= 70 && score <= 100)
            countA++;
        else if (score >= 60 && score <= 69)
            countB++;
        else if (score >= 50 && score <= 59)
            countC++;
        else if (score >= 45 && score <= 49)
            countD++;
        else if (score >= 0 && score <= 44)
            countF++;
    }
}

//---------------PART E---------------------------
int pickRandomPassingStudent(int ids[], int scores[], int size) {
    int passingStudentsindex[100];
    int count = 0;

    for (int i = 0; i < size; i++) {
        if (scores[i] >= 50) {
            passingStudentsindex[count] = i;   // store the index
            count++;
        }
    }

    if (count == 0) {
        return -1;//If no student passed
    }

    int r = rand() % count;

    return passingStudentsindex[r];
}

//----------------PART F---------------------------
void saveSummary(const char filename[], double average, int minScore, int maxScore,
                int countA, int countB, int countC,  int countD, int countF, int studentno)
{    fstream file("summary.csv", ios::out | ios::app);

    if(!file){
        cout << "Error opening this file";
        return ;
    }

    file << "Metric, Value\n";
    file << "Number of Students: " << studentno;
    file << "\nAverage Score: " << average ;
    file << "\nMinimum Score: " << minScore;
    file << "\nMaximum Score: " << maxScore;
    file << "\nA Count: " << countA;
    file << "\nB Count: " << countB;
    file << "\nC Count: " << countC;
    file << "\nD Count: " << countD;
    file << "\nF Count: " << countF;    

    file.close();
    cout << "\nSuccessfully Saved";
}

// -----------------------PART G------------------------------
int main() {

    int ids[100], scores[100];
    int size = loadData("scores.csv", ids, scores, 100);

    cout << "Total number of students " << size << "\n\n";

    // Display records
    printAll(ids, scores, size);


    double average;
    int minScore;
    int maxScore;

    computeStats(scores, size, average, minScore, maxScore);

    cout << "\n\nAverage Score: " << average << endl;
    cout << "Minimum Score: " << minScore << endl;
    cout << "Maximum Score: " << maxScore << endl;

    // Grade distribution
    int A, B, C, D, F;
    computeGradeDistribution(scores, size, A, B, C, D, F);

    cout << "\nGrade Distribution:\n";
    cout << "A: " << A << "\nB: " << B << "\nC: " << C
         << "\nD: " << D << "\nF: " << F << endl;

    // Random passing student
    int lucky = pickRandomPassingStudent(ids, scores, size);

    if (lucky == -1) {
        cout << "\nNo passing student.\n";
    } else {
        cout << "\nLucky Passing Student " << "\nID: " << ids[lucky] << "  Score: " << scores[lucky] << endl;
    }

    // Save summary
    saveSummary("summary.csv", average, minScore, maxScore, A, B, C, D, F, size);

    return 0;
}






