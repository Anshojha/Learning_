#include<iostream>
using namespace std;

class Complex{
    int real, imaginary;
    public:
    void setData(int a, int b){
        real=a;
        imaginary=b;
    }

    void getData(){
        cout<<"The value of real part is "<<real<<endl;
        cout<<"The value of imaginary part is "<<imaginary<<endl;
    }
};
int main()
{
    // Complex c1;
    // Complex *ptr =&c1;

    //Below is the new way to do the same work done by above two line of code
    Complex *ptr= new Complex;
    ptr->setData(4,6);
    // -> this is a arrow operator which can do the same work as a dot operator
    ptr->getData();

    // array of objects
     Complex *ptr1= new Complex[4];
    ptr1->setData(1,4);
    ptr1->getData();
    (ptr1+1)->setData(2,3);
    (ptr1+1)->getData();
 return 0;
}