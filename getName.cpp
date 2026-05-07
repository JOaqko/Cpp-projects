/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
//include statement(s)
#include <iostream>
#include <string>

//using namespace statement
using namespace std;

int main()
{
    //variable declaration
    string name;
    double studyHours;
    
    //executable statements
    cout << "Enter first name: ";
    cin >> name;
    cout << endl;
    
    cout << "Enter study hours: ";
    cin >> studyHours;
    cout << endl;
    
    cout << "Hello " << name << " on the last week you studied " << studyHours << endl;
    
    
    //return statement
    return 0;
}