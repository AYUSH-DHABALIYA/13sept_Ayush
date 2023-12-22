/* 11. Write a program to calculate the area of circle, rectangle and triangle using Function Overloading
Rectangle: Area * breadth
Triangle: ½ *Area* breadth
Circle: Pi * Area *Area */
#include<iostream>
using namespace std;
class Area{
public :
   int area(int area, int breadth)
   {
        cout << "\nThe area of rectangle is : " << area * breadth;
   }

   int area(float a, int area, int breadth)// 
   {
        cout << "\nThe rectangle is : " << a * area * breadth;
   }

   int area(int area)
   {
        cout << "\nThe area of circle : " << 3.14 * area * area;
   }
};

int main()
{
    int a, b;
    cout << "\nEnter the value of a and b : ";
    cin >> a >> b;

    Area obj;
    obj.area(a,b);
    obj.area(0.5,a,b);
    obj.area(a);
    return 0;
}

