// Write a C++ program to create a class called Triangle that has private member variables for the lengths of its three sides. Implement member functions to determine if the triangle is equilateral, isosceles, or scalene.
#include<iostream>
using namespace std;
class Triangle{
private :
    int len1, len2, len3;

public : 
    int triangle(){
    cout << "Enter the three lengths of triangle :";
    cin >> len1 >> len2 >> len3;
    
    if (len1 == len2 && len2 == len3 && len3 == len1)
    {
       cout << "\nThe triangle is Equilateral";
    }
    else if (len1 == len2 || len2 == len3 || len3 == len1)
    {
       cout << "\nThe triangle is Isoclecs";
    }
    else
    {
        cout << "\nThe triangle is Scalene";
    }
    } 
};

int main()
{
    Triangle tri;
    tri.triangle();
    return 0;

}