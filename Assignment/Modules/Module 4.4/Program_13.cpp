//Write a program to find the max number from given two numbers using friend function
#include<iostream>
using namespace std;
class Demo{
private :
    int a,b;
public :
    friend int data(Demo &obj);
};
int data(Demo &obj)
{
    cout << "Enter the value of a and b : ";
    cin >> obj.a >> obj.b;
    if (obj.a > obj.b)
    {
       cout <<"\nMaximum number is : " <<  obj.a;
    }
    else
    {
        cout << "\nMaximum number is : " <<  obj.b;
    }
    
};

int main()
{
    Demo demo;
    data(demo);
}