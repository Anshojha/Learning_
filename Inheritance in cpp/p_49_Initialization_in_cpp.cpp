#include<iostream>
using namespace std;
/*

Syntax for Initialization list in constructor 

constructor (argument-list):initialization-section
{
    assignment + other code;
};

class Test{
    int a;
    int b;
    public:
    Test(int i,int j): a(i),b(j){constructor-body}
}

*/
class Test{
    int a;
    int b;
    public:
    // Test(int i,int j): a(i),b(i)
    // Test(int i,int j): a(i),b(i+j+1+i)
    // Test(int i,int j): a(i),b(a*j)
    Test(int i,int j): b(i),a(i+b)
    {
        cout<<"Cnstructor executed"<<endl;
        cout<<"The value of a is "<<a<<endl;
        cout<<"The value of b is "<<b<<endl;
    }
};
int main()
{
   Test t(3,5);        
 return 0;
}