/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <string>

void initialize(int& one, int& two, char& ch);
void getHoursRate(double& hrs, double& pRate);
double payCheck(double hrs, double prate);
void printCheck(double hrs, double pRate, double pSalary);
void funcOne(int& pOne, int& pTwo);
void nextChar(char& ch);

using namespace std;
int main()
{
   int x, y;
   char z;
   double rate, hours;
   double amount;
 initialize(x, y, z);

   cout << "After initialization: x = " << x << ", y = "<< y << ", z = "<< z << endl;

   getHoursRate(hours, rate);

   amount = payCheck(hours, rate);

   printCheck(hours, rate, amount);

   funcOne(x, y);

   cout << "After funcOne: x = "<< x << endl;

   z = 'B';
   cout << "z = " << z << endl;

   nextChar(z);

   cout << "After nextChar: z = " << z << endl;
   return 0;
}
void initialize(int& one, int& two, char& ch){
   one = 0;
   two = 0;
   ch = ' ';
}

void getHoursRate(double& hrs, double& pRate){
   cout << "Enter hours worked: ";
   cin >> hrs;

   cout << "Enter pay rate: ";
   cin >> pRate;

   cout << endl;
}

double payCheck(double hrs, double prate){
   double salary;

   if (hrs > 40)
      salary = 40 * prate +
               (hrs - 40) * prate * 1.5;
   else
      salary = hrs * prate;

   return salary;
}

void printCheck(double hrs, double pRate, double pSalary){

   cout << "Hours worked:       " << hrs << endl;

   cout << "Pay Rate:           $" << pRate << endl;

   cout << "This week's salary: $" << pSalary << endl;
}

void funcOne(int& pOne, int& pTwo){

   pOne = 35;
   pTwo = 20;

   int num;

   cout << "Enter an integer: ";
   cin >> num;
   cout << endl;

   pOne = 2 * pOne + pTwo - num;
}

void nextChar(char& ch){
   ch++;
}