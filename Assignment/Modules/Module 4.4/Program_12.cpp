//Write a program to swap the two numbers using friend function without using third variable
#include<iostream>
using namespace std;
class Demo{
private :
    int x, y;

public : 
    friend int data(Demo &obj);
    
};
int data(Demo &obj)
{
    cout << "Enter the value of x : ";
    cin >> obj.x;
    cout << "\nEnter the value of y : ";
    cin >> obj.y;

    obj.x = obj.x + obj.y;// x = 10 + 20 = 30
    obj.y = obj.x - obj.y;// y = 30 - 20 = 10
    obj.x = obj.x - obj.y;// x = 30 - 10 = 20

    cout << "\nAfte swapping ";
    cout << "\nValue of x is : " << obj.x;
    cout << "\nValue of y is :" << obj.y;

}

int main()
{
    Demo demo;
    data(demo);
    return 0;
}