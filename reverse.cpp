/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

int reverseDigit(int normal);

int main() {
    // Write your main here
    int number;

    cin >> number;

    number = reverseDigit(number);

    cout << number;

    return 0;
}
int reverseDigit(int normal){
    
    int digit;
    int reverse = 0;
    bool negative;

    if (normal < 0){
        negative = true;
        normal = -normal;
    }

    while (normal > 0){
        digit = normal % 10;
        reverse = reverse * 10 + digit;
        normal = normal / 10;
    }
    
    if (negative){
        reverse = -reverse;
    }
    return reverse;
}