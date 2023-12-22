// Write a C++ Program to find Area of Rectangle using inheritance
#include<iostream>
using namespace std;
class Triangle
{
public :
    int area, base, height;
};

class triangle : public Triangle
{
public :
    int get()
    {
        cout << "\nEnter the base of triangle : ";
        cin >> base;
        cout << "\nEnter the height of triangle : ";
        cin >> height;

        area = 0.5 * base * height;
        cout << "\nThe area of triangle is " << area;
    }
};

int main()
{
    triangle tri;
    tri.get();
    return 0;
}