/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>



int main() {
    using namespace std;

    double radius;
    double area;
    double circumference;
    const double PI = 3.14;

    cout << "Enter the radius: ";

    cin >> radius;

    cout << endl;

    area = PI * radius * radius;
    
    circumference = 2 * PI * radius;
    
    cout << "Area = " << area << endl;
    cout << "Circumference = " << circumference << endl;

    return 0;

    
}