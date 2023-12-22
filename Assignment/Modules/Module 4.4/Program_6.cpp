// Write a C++ Program to show access to Private Public and Protected using Inheritance
#include<iostream>
using namespace std;
class Parent {
public :
    int i = 10, k =20;
    int parent()
    {
        cout << "Additon of  i and k is " << i + k;
    }
private :
    string str = "ayush dhabliya";
    int demo()
    {
        cout << "\nYour string is " << str;
    }
};
class Demo{
protected :
    int a = 10, b = 20;
    int data()
    {
        cout << "\nMultiplication of and b : " << a * b ;
    }
};

class child : public Parent, virtual Demo
{
public :
  int chill()
  {
    parent();
    data();
  }
};

int main()
{
    child obj;
    obj.chill();
    return 0;
}