#include <iostream>
#include <vector>
#include <string>

using namespace std;

struct Employee {
    int id;
    string name;
    double hourlyRate;
    double hoursWorked;
    double totalPay;
};

// Prototypes
void addEmployee(vector<Employee>& employees);
void displayEmployee(const vector<Employee>& employees);
double calculatePay(Employee& emp);

int main()
{
    vector<Employee> employees; 
    int choice;
    
    do{
        cout << "\nPayroll System\n";
        cout << "1. Add Employee\n";
        cout << "2. Display Employees\n";
        cout << "3. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;
        
        switch(choice){

            case 1:
                addEmployee(employees);
                break;

            case 2:
                displayEmployee(employees);
                break;

            case 3:
                cout << "Exiting . . .\n";
                break;

            default:
                cout << "Invalid choice.\n";
        }

    }
    while (choice != 3);
        
    return 0;
}


// Add employee
void addEmployee(vector<Employee>& employees){

    Employee emp;
        
    cout << "\nEnter your ID: ";
    cin >> emp.id;
        
    cin.ignore();
    cout << "Enter your name: ";
    getline(cin, emp.name);
        
    cout << "Enter hourly rate: ";
    cin >> emp.hourlyRate;
        
    cout << "Enter hours worked: ";
    cin >> emp.hoursWorked;

    calculatePay(emp);

    employees.push_back(emp);
        
    cout << "Employee added successfully.\n";
}


// Display employees
void displayEmployee(const vector<Employee>& employees){

    if (employees.size() == 0) {
        cout << "No employee to display.\n";
        return;
    }

    for (int i = 0; i < employees.size(); i++) {

        cout << "\nID: " << employees[i].id;
        cout << "\nName: " << employees[i].name;
        cout << "\nRate: " << employees[i].hourlyRate;
        cout << "\nHours Worked: " << employees[i].hoursWorked;
        cout << "\nTotal Pay: " << employees[i].totalPay;
        cout << "\n------------------------\n";
    }
}


// Calculate payroll
double calculatePay(Employee& emp){

    double overtimeHours;
    double overtimePay;
    double regularPay;

    if (emp.hoursWorked > 40){

        overtimeHours = emp.hoursWorked - 40;

        overtimePay = overtimeHours * (emp.hourlyRate * 1.5);

        regularPay = 40 * emp.hourlyRate;

        emp.totalPay = regularPay + overtimePay;

    }
    else {

        emp.totalPay = emp.hoursWorked * emp.hourlyRate;

    }

    return emp.totalPay;
}