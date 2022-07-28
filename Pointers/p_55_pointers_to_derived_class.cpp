#include <iostream>
using namespace std;

class BaseClass
{
public:
    int var_base;
    void display()
    {
        cout << "Diplaying Base class variable var_base " << var_base << endl;
    }
};

class DerivedClass : public BaseClass
{
    public:
    int var_derived;
    void display()
    {
        cout<<"Displaying derived class variable var_derived"<<var_derived<<endl;
        cout << "Diplaying Base class variable var_derived " << var_base << endl;
    }
};
int main()
{
    BaseClass *base_class_pointer;
    BaseClass obj_base;
    DerivedClass obj_derived;
    base_class_pointer = &obj_derived; //pointing base class pointer to derived class
    base_class_pointer->var_base=34;
    // base_class_pointer->var_derived=34; This will throw error 
    base_class_pointer->display();
    base_class_pointer->var_base=3400;
    base_class_pointer->display();
    cout<<endl;
    DerivedClass *derived_class_pointer;
    derived_class_pointer=&obj_derived;
    derived_class_pointer->var_derived=98;
    cout<<endl;
    derived_class_pointer->var_base=909098;
    derived_class_pointer->display();
    return 0;
}