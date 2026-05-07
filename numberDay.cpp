/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <string>

using namespace std;


bool isLeapYear(int year) {
    if (year % 400 == 0)
        return true;
    else if (year % 100 == 0)
        return false;
    else if (year % 4 == 0)
        return true;
    else
        return false;
}
int dayYear(int month, int day, int year){
    int total = 0;

    int dayMonth[] = {0, 31, 28, 31, 30, 31, 30, 31, 30, 31, 30, 31, 30};
    if (isLeapYear){
        dayMonth[2] = 29;
    }

    for (int i = 0; i < month; i++){
        total += dayMonth[i];
    }

    total += day;
    return total;

}

int main() {
    // Write your main here
    string date;
    int dash1;
    int dash2;
    int day, month, year;

    cin >> date;

    dash1 = date.find("-");
    dash2 = date.find("-", dash1 + 1);

    month = stoi(date.substr(0, dash1));
    day = stoi(date.substr(dash1 + 1, dash2 - dash1 - 1));
    year = stoi(date.substr(dash2 + 1));

    cout << dayYear(month, day, year) << endl;

    return 0;
}