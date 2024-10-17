#include<iostream>
using namespace std;

class Base{
    public:
};
class A {
    public:
        A() {
            cout<<"A is called"<<endl;
        }
};

class B : public A {

};

class C : public A {
    public:
        C() {
            cout<<"C calles"<<endl;
        }
};

class D {
    public:
    A a;
        D() {
            cout<<"D called"<<endl;
        }
};

int main()
{
    Base base;
    B b;
    C c;
    D d;
           
 return 0;}