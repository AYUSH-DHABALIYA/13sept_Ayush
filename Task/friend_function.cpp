// WAP using function friend 
#include<iostream>
using namespace std;
class Demo {

private:
        int no;
public:
        friend int ashu();
        

};

int ashu(Demo &obj) {
    obj.no = 1927;
    cout<<"Values of no is : "<<obj.no;
    return 0;
}
int  main() {
    Demo d1;
    ashu(d1);
    return 0;
}