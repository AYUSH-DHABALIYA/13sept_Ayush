// WAP of creating single parent class and multiple child class to do different function 
#include<iostream>
using namespace std;
int a,b;
int choice;
class Calculator {
 
 public:
       void  get() {
        cout << "\nEnter the value of a : ";
        cin >> a;
        cout << "\nEnter the value of b :";
        cin >> b;

       }

};
class Addition : public Calculator {

public:
       addition(){
         cout << "\nAdditon of a and b : "<< a+b;
       }
}addi;
class Multiplication : public Calculator {

public:
       multiplication(){
         cout << "\nMultipliction of a and b : " << a*b;
       }
}multi;
class Division : public Calculator {

public:
       division(){
         cout << "\nDivision of a and b : " << a/b;
       }
}divi;
class Substraction : public Calculator {

public:
       substraction(){
         cout << "\nSubstraction of a and b : " << a-b;
       }
}sub;
class Modulo : public Calculator {

public:
       modulo(){
         cout << "\nModulo of a and b : " << a%b;
       }
}mod;

int main(){
      cout << "\n1.Addition\n2.Multiplication\n3.Division\n4.Substraction\n5.Modulo\n";
      cin >> choice;
      switch (choice)
      {
      case 1 :
      addi.get();
      addi.addition();
       break;
      case 2 :
      multi.get();
      multi.multiplication();
       break;
      case 3 :
      divi.get();
      divi.division();
       break;
      case 4 :
      sub.get();
      sub.substraction();
       break;
      case 5 :
      mod.get();
      mod.modulo();
       break;
      
      default:
      cout << "Invalid input";
       break;
      }
    return 0;

}