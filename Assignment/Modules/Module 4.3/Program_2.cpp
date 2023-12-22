// Write a program of Addition, Subtraction, Division, Multiplication using constructor
#include<iostream>
using namespace std;
class Calculator{
public :
         Calculator(int a, int b){
        cout << "Addition of a and b is " << a + b;
        cout << "\nSubstraction of a and b is " << a - b;
        cout << "\nDivision of a and b is " << a / b;
        cout << "\nMultiplication of a and b is " << a * b;
    }

};

int main()
{
    int num1, num2;
    cout << "\nEnter first number  ";
    cin >> num1;
    cout << "\nEnter second number ";
    cin >> num2;
    Calculator obj(num1,num2);
    return 0;

}