//Write a program of to swap the two values using template

#include<iostream>
using namespace std;

template <typename T>

class temp {
    public:
    T swaping (T a,T b) {
        T c;
        c = a;
        a = b;
        b = c;

        cout<<"Value after swaping : ";
        cout << "\nValue of a is : " << a;
        cout << "\nValue of b is : " << b;
    }
};


int main () {
    int a,b;
    cout<<"Enter Value of a and b : ";
    cin>>a>>b;

    temp <int> t1;
    t1.swaping(a,b);
}