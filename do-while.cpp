/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;

int main() {
    int firstNum; 
    int secondNum;

    cout << "Enter two integers: ";
    cin >> firstNum >> secondNum;

    if (firstNum > secondNum) {
        int temp = firstNum;
        firstNum = secondNum;
        secondNum = temp;
    }

    int i = firstNum;
    do {
        if (i % 2 != 0)
            cout << i << " ";
        i++;
    } while (i <= secondNum);
    cout << endl;

    int sumEven = 0;
    i = firstNum;
    do {
        if (i % 2 == 0)
            sumEven += i;
        i++;
    } while (i <= secondNum);
    cout << sumEven << endl;

    i = 1;
    do {
        cout << i << " " << i * i << "  ";
        i++;
    } while (i <= 10);
    cout << endl;

    int sumOddSquares = 0;
    i = firstNum;
    do {
        if (i % 2 != 0)
            sumOddSquares += i * i;
        i++;
    } while (i <= secondNum);
    cout << sumOddSquares << endl;

    char ch = 'A';
    do {
        cout << ch << " ";
        ch++;
    } while (ch <= 'Z');
    cout << endl;

    return 0;
}