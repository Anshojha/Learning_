#include<iostream>
using namespace std;
class sMember {
    public:
        int val;

        sMember(int v = 10) : val(v) {
            cout << "Static object created" << endl;
        }
};


class A {
    public:
        static sMember s;
        A() {cout << "A's constructor called "<<endl;}
};

sMember A :: s = sMember(11);

int main()
{
    cout << "accessing static member without creating the "
            "object: ";
    cout << A :: s.val << endl;

    cout << "Creating a object now: ";
    A obj1;
    cout << endl;

    cout << "Crating a object now: ";
    A obj2;
    cout << endl;

    cout << "Printing each values from the object and classes" << endl;

    cout << "obj1.s.val: " << obj1.s.val << endl;
    cout << "obj2.s.val: " << obj2.s.val << endl;
    cout << "A::s.val: " << A :: s.val<<endl;
           
 return 0;}