#include <iostream>
using namespace std;

class Complex
{
    int a,b;
public:
  Complex(int, int); // Constructer decleartion
   void printNumber(){
        cout<<"The complex number is "<<a<<"+"<<b<<"i"<<endl;
    }
};
Complex :: Complex(int x , int y){ // This is a parameterized constructor as it takes two parameter
    a=x;
    b=y;
}

int main()
{
Complex a(5,7);
a.printNumber();

Complex b= Complex(34,43);
b.printNumber();
    return 0;
}