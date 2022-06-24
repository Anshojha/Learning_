#include <iostream>

using namespace std;

class Complex
{
    int a,b;
public:
    // Creating a constructor
    // --> Constructor is a special member function with same name as of the class
    // It is used to initialize the objects of its class
    //It is atomatically invoked when a object is created
  Complex(void); // Constructer decleartion
   void printNumber(){
        cout<<"The complex number is "<<a<<"+"<<b<<"i"<<endl;
        cout<<"hello Alien"<<endl;
    }
};

Complex :: Complex(void){ // This is a default constructor which takes no parameter
    a=12;
    b=0;
}

int main()
{
    Complex c;
    c.printNumber();

    return 0;
}

// Properties of constructors 

/* 
1. It should be decleared in the public section of the class
2. They are atomatically invoked whenever the object is created
3. They do not return values and do not have return type
4. It can have default arguments
5. We cannot refer to their address
*/

