#include<iostream>
using namespace std;
/*
Case 1:
CLASS B :Publicly a1{
    // Order of execution of constructors --> first A() than B()
};

Case 2:
class A : public b,virtual public c{
// Order of execution of constructors --> first B() then C() and A()
};

*/
class Base1{
    int data1;
    public:
    Base1(int i){
        data1 =i;
        cout<<"Base1 class constructor called"<<endl;
    }
    void printDatabase1(void){
        cout<<"The value of data1 is "<<data1<<endl;
    }
};

class Base2{
 int data2;
    public:
    Base2(int i){
        data2 =i;
        cout<<"Base2 class constructor called"<<endl;
    }
    void printDatabase2(void){
        cout<<"The value of data2 is "<<data2<<endl;
    }
};

class Derived : public Base2, public Base1{
    int derived1, derived2;
    public:
     Derived(int a, int b, int c, int d): Base1(a), Base2(b){
        derived1=c;
        derived2=d;
     }
      void printDataderived(void){
        cout<<"Derived class constructor called"<<endl;
        cout<<"The value of derived1 is "<<derived1<<endl;
        cout<<"The value of derived2 is "<<derived2<<endl;
    } 

};

int main()
{
  Derived ansh(1,3,4,5);
  ansh.printDatabase1();
  ansh.printDatabase2();
  ansh.printDataderived();
 return 0;
}