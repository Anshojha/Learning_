#include<iostream>
using namespace std;
// There are two types of header file
// 1. System Header File provided by the compiler
// 2. User Defined Header File Which is defined by user
int main()
{
    int a=5, b=5;
    cout<< "Hello World";
    cout<< "Following are the operators in C++";
    // Arithematic Operator
    
    cout<<"The value of a + b is "<<a+b<<endl;
    cout<<"The value of a - b is "<<a-b<<endl;
    cout<<"The value of a * b is "<<a*b<<endl;
    cout<<"The value of a / b is "<<a/b<<endl;
    cout<<"The value of a % b is "<<a%b<<endl;
    cout<<"The value of a++ is "<<a++<<endl;
    cout<<"The value of a-- is "<<a--<<endl;
    cout<<"The value of --a is "<<--a<<endl;
    cout<<"The value of ++a is "<<++a<<endl;

    // Assignment Operator -> Used to assing the value to operator
     a = 6;
     b =8;
    char c ='c';
    // Comparison Operators 
    cout<<"The value of a==b is "<<(a==b)<<endl;
    cout<<"The value of a!=b is "<<(a==b)<<endl;
    cout<<"The value of a>b is "<<(a==b)<<endl;
    cout<<"The value of a<b is "<<(a==b)<<endl;
    cout<<"The value of a<=b is "<<(a==b)<<endl;
    cout<<"The value of a>=b is "<<(a==b)<<endl;


    return 0;
}

