#include <iostream>
using namespace std;

class Employee{
int id;
int salary;
public:
void setId(void){
    cout<<"Enter the id of Employee: "<<endl;
    cin>>id;
    salary=1222;
}
void getId(void){
    cout<<"The id of the employee is "<<id<<" And the salary is "<<salary<<endl;;
}
};


int main()
{
// Employee Harry , Ansh , Vaibhav;

// Harry.setId();
// Harry.getId();
                     
// Ansh.setId();
// Ansh.getId();

// Vaibhav.setId();
// Vaibhav.getId();


// for doing  more than 10 employee we can use a function as follows


Employee fb[10];
for (int i = 0; i < 10; i++)
{
    fb[i].setId();
    fb[i].getId();
}   


    return 0;
}