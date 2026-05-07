/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>

using namespace std;

int main() {
    // Write your main here
    ifstream inData;
    ofstream outData;

    string firstname, lastname, depart;
    double salary, bonus, tax;
    double paycheck;
    double distance, time;
    double speed;
    int cups;
    double cost;
    double sales;

    inData.open("inData.txt");
    outData.open("outData.txt");
    
    inData >> firstname >> lastname >> depart;
    inData >> salary >> bonus >> tax;
    inData >> distance >> time;
    inData >> cups >> cost;

    paycheck = (salary + (salary * 0.05)) - (salary * 0.30);
    speed = 450 / 9;
    sales = 75 * 1.50;

    outData << "Name: "<< firstname << " " << lastname << ", Department: " << depart << endl;

    outData << fixed << setprecision(2);

    outData << "Monthly Gross Salary: $" << salary << ", Monthly Bonus: " << bonus << "%, Taxes: " 
    << tax << "%" << endl;
    
    outData << "Paycheck: $" << paycheck << endl;
    
    outData << "" << endl;
    
    outData << "Distance Traveled: " << distance << " miles, Traveling Time: " << time << " hours" << endl;
    
    outData << "Average Speed: " << speed << " miles per hour" << endl;
    
    outData << "" << endl;
    
    outData << "Number of Coffee Cups Sold: " << cups << ", Cost: $" << cost << " per cup" << endl;
    
    outData << "Sales Amount = $" << sales << endl;
    inData.close();
    outData.close();
    return 0;
}