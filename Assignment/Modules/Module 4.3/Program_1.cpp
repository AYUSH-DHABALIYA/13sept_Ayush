// Write a program to find the multiplication values and the cubic values using inline function
#include<iostream>
using namespace std;
class Multiplication {
public :
    inline  multiplication_num(int a, int b){  cout << "\nMultiplication of number is " << a * b;} 
    
     inline int multiplication_cube(int x){  cout << "\nCube of number is  " << x * x * x;}
};

int main(){
    Multiplication obj;
    obj.multiplication_num(10,2);
    obj.multiplication_cube(3);
}