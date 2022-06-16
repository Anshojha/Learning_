#include <iostream>
using namespace std;

//Forward Decleartion to tell comopiler that the class is 100% available to use
class Complex;


class Calculator{
    public:
    int add(int a,int b){
        return (a+b);
    }
    
int sumRealComplex(Complex , Complex);
int sumCompComplex(Complex , Complex);

};


class Complex
{
    int a;
    int b;
    // Individually declearing function as a friends class  
    // friend int Calculator :: sumRealComplex(Complex o1, Complex o2);
    // friend int Calculator :: sumCompComplex(Complex o1, Complex o2);
// Aliter : Dcllearing all finction as a friends of class
 friend class Calculator;
    public:
    void setData(int v1, int v2)
    {
        a = v1;
        b = v2;
    }
   
    void printNumber(){
        cout<<"The complex number is "<<a<<"+"<<b<<"i"<<endl;
    }
};

int Calculator ::sumRealComplex(Complex o1, Complex o2){
    return (o1.a+o2.a);
}
int Calculator ::sumCompComplex(Complex o1, Complex o2){
    return (o1.b+o2.b);
}

int main()
{

   Complex o1,o2;
   o1.setData(1,2);
   o2.setData(5,6);
  Calculator calc;
  int res=calc.sumRealComplex(o1,o2);
  cout<<"The sum of real part of o1 and o2 is :"<<res<<endl;
  int res2=calc.sumCompComplex(o1,o2);
  cout<<"The sum of imagonary  part of o1 and o2 is :"<<res2<<endl;

    return 0;
}