#include<iostream>
using namespace std;

class Base{
    protected:
    int a;     // it as private but it can  be inherited 
    private:
    int b;
};
/*
For a procted Member:     
                          Public Derivation        Private Derivation         Protected Derivation
    Private Memeber         Not Inherited            Not Inherited              Not Inherited
    Protected Memeber       Protected                Private                     Protected  
    Public Memeber          Public                   Private                     Protected
   
*/

class Derived : Base{

};

int main()
{
    Base b;
    Derived d;
   // d.a;  //This will not worked as a is protcted
 return 0;
}