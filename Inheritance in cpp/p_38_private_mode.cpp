#include <iostream>
using namespace std;

class Base
{
    int data1; // Private by default and it is not inheritable so we need a function to get this data
public:
    int data2;
    void setData();
    int getData1();
    int getData2();
};
void Base ::setData(void)
{
    data1 = 10;
    data2 = 20;
}
int Base ::getData1()
{
    return data1;
}
int Base ::getData2()
{
    return data2;
}

class Derived : private Base
{ // here class is derived privately so the public member of base became private in derived class
    int data3;

public:
    void process();
    void display();
};
void Derived::process()
{
    setData(); // Here we can use this as a nested function
    data3 = data2 * getData1();
}
void Derived::display()
{
    cout << "The value of data 1 is " << getData1() << endl;
    cout << "The value of data 2 is " << data2 << endl;
    cout << "The value of data 3 is " << data3 << endl;
}

int main()
{
    Derived der;
    // der.setData();   This cannot be called because this became private member due to private mode
    der.process();
    der.display();

    return 0;
}