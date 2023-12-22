// Write a C++ program to implement a class called Bank Account that has private member variables for account number and balance. Include member functions to deposit and withdraw money from the account
#include<iostream>
using namespace std;
class Bank_account{
private :
    long account_number;
    long balance;

public :
    void get(){
        cout << "Enter your account number : ";
        cin >> account_number;
        cout << "\nEnter your balance : ";
        cin >> balance;
        cout << "\nYour account balance is " << balance;
    }

    int depositer(){
        int deposite;
        cout << "Enter amount you want to deposite : ";
        cin >> deposite;
        balance = deposite + balance;
        cout << "\nYour account balance is " << balance;

        
    }

    int withdrawer(){
        int withdraw;
        cout << "\nEnter amount you  want to wuthdraw";
        cin >> withdraw;
        if (withdraw > balance)
        {
          cout << "\nPlease enter proper amount";
        }
        else
        {
            balance = balance - withdraw;
        }
        cout << "\nYour balance is " << balance;
    }
};

int main()
{   
    int choice;
    Bank_account obj;
    obj.get();
    cout << "\n1.Deposite\n2.Withdraw";
    cout << "\nEnter your choice : ";
    cin >> choice;
    
    switch (choice)
    {
    case 1 :
        obj.depositer();
        break;
    case 2 :
        obj.withdrawer();
        break;
    
    default:
        cout << "\nError";
        break;
    }
    return 0;
}