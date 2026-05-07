/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;                                   
 
int main()
{
    // Write your main here
    double gallons;
    double miles;
    double speed;

    cout << "how many gallons of fuel are in your car? ";
    cin >> gallons; 
    cout << endl;

    cout << "Your speed: ";
    cin >> speed;
    cout << endl;

    miles = gallons * speed;

    cout << miles << endl;
    return 0;
}