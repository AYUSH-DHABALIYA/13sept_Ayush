//Write a C++ Program to illustrates the use of Constructors in multilevel inheritance
#include<iostream>
using namespace std;
class A {
public : 
        int a,b;
          A(){
        cout << "Enter the value of a : ";
        cin>>a;
    }
};
class B:public A {
public : 
        B(){
        cout << "Enter the value of b : ";
        cin>>b;
    }
};
class C:public B {
public : 
        C(){
        cout <<"Addition is : "<<a+b;
    }
};

int main() {
    C c1;
    return 0;
}