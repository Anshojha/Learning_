#include <iostream>
using namespace std;

class Number
{
    int a;

public:
    Number() { a = 0; }
    Number(int num)
    {
        a = num;
    }
    void diplay();

    //When copyconstructor is not found then the compiler supplies its own copyConstructor
    Number(Number &obj){
        cout<<"Copy constructor called !!!"<<endl;
        a=obj.a;
    }
};

void Number::diplay()
{
    cout << "The number of the object is " << a << endl;
}

int main()
{
    Number x(23), y(334), z,z2;
    Number n1 ;
    Number(5);
    n1.diplay();
    x.diplay();
    z.diplay();
    y.diplay();
    Number z1(x); // Here copyconctructor is invoked
    z1.diplay();
     z2=z; // Here copyconctructor is not  invoked it run without any erroe
    z2.diplay();

    // z1 should resemble z or x and y this can be done using copy constructor
    return 0;
}