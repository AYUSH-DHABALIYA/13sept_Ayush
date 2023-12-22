// Assume that the test results of a batch of students are stored in three different classes. Class Students are storing the roll number. Class Test stores the marks obtained in two subjects and class result contains the total marks obtained in the test. The class result can inherit the details of the marks obtained in the test and roll number of students. (Multilevel Inheritance)
#include<iostream>
using namespace std;

class Students 
{
public :
    int roll_num;
    int roll(){
         cout << "Enter the roll number : ";
         cin >> roll_num;
    }
};

class Test : public Students
{
public : 
        int sub1, sub2;
    int test(){
        cout << "\nEnter the marks of subject 1 : ";
        cin >> sub1;
        cout << "\nEnter the marks of subject 2 : ";
        cin >> sub2;
    }
};
class Result : public Test
{
public : 
    int result()
    {
        int total;
        total = sub1 + sub2;
        cout << "\nThe total marks of student is  : " << total;
    }
    
};

int main()
{
    Result obj;
    obj.roll();
    obj.test();
    obj.result();
    return 0;
}