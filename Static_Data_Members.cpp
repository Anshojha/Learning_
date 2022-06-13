#include <iostream>
using namespace std;
class Employee
{
    int id;
    static int count;
    char name[10];

public:
    void setData(void)
    {
        cout << "Enter the ID:" << endl;
        cin >> id;
         cout<<"Enter the name of the employee"<<endl;
        cin>>name;
        count++;
    }
    void getData(void)
    {
        cout << "The id of the emoloyee is " << id <<" and this is employee number is "<<count<< endl;
        cout<<"The name of the employee is "<<name<<endl;
    }
    static void getCount(void){
        // cout<<id; it must declerared here before using it throw error here
        cout<<"The value of getCount is "<<count<<endl;
    }
};
    int Employee:: count =1000; // Default value of count is zero but we can give any value to count here
    // count is the static member of class employee
int main()
{
    Employee ansh;
    Employee arnav;
    Employee avi;
    //    ansh.id=1;
    //    ansh.count=1; This is not possble because id and count is a private data
    Employee::getCount();
    ansh.setData();
    ansh.getData();

    Employee::getCount();
    arnav.setData();
    arnav.getData();

    Employee::getCount();
    avi.setData();
    avi.getData();
    return 0;
}
