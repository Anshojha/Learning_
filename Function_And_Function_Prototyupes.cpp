#include <iostream>
using namespace std;

// Function Prototype
// int function_name(argument);
// int sum(int a, int b); --> Acceptable Format
// int sum(int a,  b); --> Unacceptable Format
// int sum( a,  int b); --> Unacceptable Format
// int sum( int,  int ); --> Unacceptable Format
// int sum( a, b ); --> Unacceptable Format
int sum(int a, int b);
int main()
{
int num1 , num2;
cout<<"Enter the value of num1 "<<endl;
cin>>num1;
cout<<"Enter the value of num2 "<<endl;
cin>>num2;
// Num 1 and Num2 are actul parameters  
cout<<"The sum of "<<num1<<" + "<<num2<<" is "<<sum(num1,num2)<<endl;
void g();
    return 0;

}
int sum(int a, int b)
// int a and int b are formal parameter which taking the value of actual parameter
{
    int c = a + b;
    return c;
}

void g()
{
    cout<<"\nHello , Good Morning Alien!!";
}