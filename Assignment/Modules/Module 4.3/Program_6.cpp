// Write a C++ program to implement a class called Employee that has private member variables for name, employee ID, and salary. Include member functions to calculate and set salary based on employee performance. Using of constructor
#include<iostream>
using namespace std;
class Employee {
private :
    string name;
    int employee_id,performance;
    float salary;

public :
         Employee(){
        cout << "Enter the name of Employee : ";
        cin >> name;
        cout << "\nEnter employee id : ";
        cin >> employee_id;
        cout << "\nEnter employee performance : ";
        cin >> performance;

        if (performance <= 25)
        {
           cout << "\nYour salary is 25000.0 rupees ";
        }
        else if (performance <= 50)
        {
           cout << "\nYour salary is 50000.0 rupees";
        }
        else if (performance <= 75)
        {
           cout << "\nYour salary is 75000.0 rupees";
        }
        else if (performance <= 100)
        {
           cout << "\nYour salary is 100000.0 rupees";
        }
         exit(0);      
    }
};

int main()
{
    Employee emp;
    Employee();
    return 0;
}