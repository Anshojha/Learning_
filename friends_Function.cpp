#include <iostream>

using namespace std;
class Complex {
    int a;
    int b;
    public:

    void setNumber(int n1 , int n2){
        a=n1;
        b=n2;
    }
    void printNumer(){
        cout<<"The complex number is "<<a<<" + "<<b<<"i"<<endl;
    }
    // Below line allow to use the private object also 
    friend Complex sumComplex(Complex o1, Complex o2);

};
Complex sumComplex(Complex o1,Complex o2){
    Complex o3;
    o3.setNumber((o1.a+o2.a),(o1.b+o2.b));
    return o3;
}

int main()
{
    Complex c1,c2,sum;
    c1.setNumber(1,2);
    c1.printNumer();\

    c2.setNumber(5,8);
    c2.printNumer();

    sum = sumComplex(c1,c2);
    sum.printNumer();
    return 0;
}


/* Properties of freineds function
1. Not in the scope of class
2. Since it is not in the scope of class, it cannotbe called from the objects of that class.
    c1.sumcomolex ==== Invalid
3. Can be invoked without the help of any objects
4. Usually containe arguments as objects
5. can be declered any part the class
6. It can not b e acces member ditectly by the name need object name and need a member name to access any member
*/