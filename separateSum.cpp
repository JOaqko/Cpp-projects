/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    // Write your main here
    int num;
    int digit;
    int sum = 0;
    int pwr = 0;

    cout << "Enter an integer: ";
    cin >> num;
    cout << endl;

    if (num < 0){
        num = -num;
    }
    int temp = num;
    while (temp >= 10) {
        temp /= 10;
        pwr++;
    }
    while (pwr >= 0) {
        int divisor = pow(10, pwr);
        digit = num / divisor;

        cout << digit << " ";

        sum += digit;

        num = num % divisor;
        pwr--;
    }

    cout << " " << sum;

    return 0;
}