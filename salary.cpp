/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>

using namespace std;

int main() {
    ifstream inFile;
    ofstream outFile;

    string fileName;
    string firstName, lastName;
    double salary, payPercentage;

    cin >> fileName;

    inFile.open(fileName);
    outFile.open("Ch3_Ex5Output.dat");
    outFile << fixed << setprecision(2);

    outFile << "[" << endl;

    inFile >> lastName >> firstName >> salary >> payPercentage;
    outFile << firstName << " " << lastName << " " << salary + (salary * 0.05)<< endl;

    inFile >> lastName >> firstName >> salary >> payPercentage;
    outFile << firstName << " " << lastName << " " << salary + (salary * 0.06) << endl;

    inFile >> lastName >> firstName >> salary >> payPercentage;
    outFile << firstName << " " << lastName << " " << salary + (salary * 0.061)<< endl;

    inFile >> lastName >> firstName >> salary >> payPercentage;
    outFile << firstName << " " << lastName << " " << salary + (salary * 0.08)<< endl;

    inFile >> lastName >> firstName >> salary >> payPercentage;
    outFile << firstName << " " << lastName << " " << salary + (salary * 0.02)<< endl;

    inFile >> lastName >> firstName >> salary >> payPercentage;
    outFile << firstName << " " << lastName << " " << salary + (salary * 0.061)<< endl;
    
    outFile << "]" << endl;

    inFile.close();
    outFile.close();
    return 0;
}