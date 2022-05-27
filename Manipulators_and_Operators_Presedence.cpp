#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    // int a =34;
    // char c='6';
    //  cout<<"The value of a is "<<a<<endl;
    // a=45;
    // c = '4';
    // cout<<"The value of a is "<<c<<endl;
    // int a=4, b=78, c=1124;
    // ****************manipulator**************
//     cout<<"The value of a is "<<a<<endl;
//     cout<<"The value of b is "<<b<<endl;
//     cout<<"The value of c is "<<c<<endl;

//     cout<<"The value of a is "<<setw(4)<<a<<endl;
//     cout<<"The value of b is "<<setw(4)<<b<<endl;
//     cout<<"The value of c is "<<setw(4)<<c<<endl;
//     ****************OUTPUT**************
// The value of a is 4   
// The value of b is 78  
// The value of c is 1124
// The value of a is    4
// The value of b is   78
// The value of c is 1124
// ****************Operator Presedence**************

int a=3, b=4;
int c  =(a*4)+b;
cout<<c;

    return 0;
}