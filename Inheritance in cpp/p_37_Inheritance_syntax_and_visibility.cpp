#include<iostream>
using namespace std;


//Base class
class Employee{
    public:
    int id;
    float salary;
    Employee(int empId){
        id=empId;
        salary=34.0;
    }
    Employee(){};
    
};

//Derived class syntax
/*
class {{Derived-class-name}} : {{visibility-mode}} {{base-class-name}}
{
    class member/name/method....etc
Note:
1. Default visibility mode is private
2. Private visibilty mode: Public member of the base class becomes private member of the derived class
3. Public visibilty mode: Public member of the base class becomes public member of the derived class
4. Private member never inherited
}*/



//Creating programmer class derived from Employee base class

class Programmer : public Employee{
    public:
    Programmer(int empId){
        id=empId;
    }
    int languageCode=9;
    void getDATA(void){
        cout<<id;
    }

};


int main()
{
    Employee harry(1),ansh(2);
    cout<<harry.salary<<endl;
    cout<<ansh.salary<<endl;
    Programmer skillf(10);
    cout<<skillf.languageCode<<endl;
    cout<<skillf.id<<endl; // This run because visibility mode is public
    skillf.getDATA();
 return 0;
}