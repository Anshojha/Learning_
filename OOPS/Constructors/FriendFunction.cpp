#include<iostream>
using namespace std;

class base;

class anotherClass{
    public:
    void memberFunction(base& obj);
};

class base {
    private:
        int pvt_var;
    protected:
        int pro_var;

    public:
        base() {
            pvt_var = 10;
            pro_var = 100;
        }
    friend void anotherClass::memberFunction(base&);
};

void anotherClass :: memberFunction(base& obj) {
    cout<<"Pvt_var :"<< obj.pvt_var << endl;
    cout<<"Proc_var :"<< obj.pro_var<<endl;
}


using namespace std;
int main()
{
    base object1;
    anotherClass object2;
    object2.memberFunction(object1);
           
 return 0;}