#include<iostream>
using namespace std;

//Base class

class Employee{
    public:
    int id;
    float salary;
    Employee(){}
    Employee(int impId){
        id=impId;
        salary=34.0;
    }
 void getData(){
        cout<<id<<endl;
    }

};

//Derived class syntax
/*
{{class Derived-name}} : {{visibility-mode}} {{base-class name}}
{
    member/method/etc.....
}
*/

//Creating a programmer derived class from Employee Base class

class Programmer : Employee{
    public:
    Programmer(int impId){
        id =impId;
        int languageCode;
    }
    void getData(){
        cout<<id<<endl;
    }
  int languageCode=9;
};

int main()
{
    Employee harry(1),ansh(2);
    cout<<harry.salary<<endl;
    cout<<ansh.salary<<endl;
    Programmer skillF(10);
   harry.getData();
    ansh.getData();
    skillF.getData();
   cout<<skillF.languageCode;
           
 return 0;
}



