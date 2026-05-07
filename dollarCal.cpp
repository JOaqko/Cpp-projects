/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

int main() {
    // Write your main here
    double quarters;
    double dimes;
    double nickels;
    double pennies;
    double dollar;

    cout << "Enter the number of quarters, dimes and nickels: ";
    cin >> quarters >> dimes >> nickels;
    cout << endl;

    dollar = (quarters * 25) + (dimes * 10) + (nickels * 5);
    pennies = (dollar * 100) / 100;

    cout << pennies << endl;
    return 0;
}