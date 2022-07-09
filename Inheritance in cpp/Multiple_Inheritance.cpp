#include <iostream>
using namespace std;

/*
Syntax for multiple inheritance

class DerivedC : visibility-mode base1 , visibility-mode base2
{
    Class body of the derivedC class
}

*/

class Base1
{
protected:
    int base1int;

public:
    void set_base1int(int a)
    {
        base1int = a;
    }
};

class Base2
{
protected:
    int base2int;

public:
    void set_base2int(int a)
    {
        base2int = a;
    }
};

class Base3
{
protected:
    int base3int;

public:
    void set_base3int(int a)
    {
        base3int = a;
    }
};

class Derived : public Base1, public Base2,public Base3{
    public:
    void show(){
        cout<<"The value of base1 is "<<base1int<<endl;
        cout<<"The value of base2 is "<<base2int<<endl;
        cout<<"The value of base3 is "<<base3int<<endl;
        cout<<"The value of sum of base1 and base2 is "<<base1int+base2int+base3int<<endl;
    }

};

/*
The derived class somthing look like this:

Data Members:
    base1int ---> Protected
    base2int ---> Protected
Datam Function:
    set_base1int--->public
    set_base2int--->public
    show()--------->public
*/

int main()
{
Derived Harry;
Harry.set_base1int(23);
Harry.set_base2int(33);
Harry.set_base3int(43);
Harry.show();

    return 0;
}