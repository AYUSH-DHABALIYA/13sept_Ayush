// Write a C++ program to implement a class called Date that has private member variables for day, month, and year. Include member functions to set and get these variables, as well as to validate if the date is valid
#include<iostream>
using namespace std;
class  Data{
private :
    int  day, month, year;

public :
    int data()
    {
        cout << "Enter the number of days : ";
        cin >> day;
       if (day <= 31)
       {
        cout << "\nDays";
       }
       else
       {
        cout << "\nPlease enter proper day";
       }

        cout << "\nEnter number of months : ";
        cin >> month;
       if (month <= 12)
       {
        cout << "\nMonth";
       }
       else
       {
        cout << "\nPlease enter proper month";
       }

        cout << "\nEnter number of year : ";
        cin >> year;
       if (year >= 1900 && year <=2100)
       {
        cout << "\nYear";
       }
       else
       {
        cout << "\nPlease enter proper year";
       }
       
    }
};

int main()
    {
        Data obj;
        obj.data();
    }

    /* if (month <= 31)
        {
          cout << "\nmonth";
        }
        cout << "\nPlease enter valid month";

        cout << "\nEnter number of year : ";
        cin >> year;
        if (year >= 1900 && year <= 2100)
        {
           cout << "\nyear";
        }
        cout << "\nPlease enter year";*/