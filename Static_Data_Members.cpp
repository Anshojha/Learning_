#include <iostream>
using namespace std;
class Employee
{
    int id;
    static int count;

public:
    void setData(void)
    {
        cout << "Enter the ID:" << endl;
        cin >> id;
        count++;
    }
    void getData(void)
    {
        cout << "The id of the emoloyee is " << id <<" and this is employee number is "<<count<< endl;
    }
};
    int Employee:: count; // Default value of count is zero
int main()
{
    Employee ansh;
    Employee arnav;
    Employee avi;
    //    ansh.id=1;
    //    ansh.count=1; This is not possble because id and count is a private data
    ansh.setData();
    ansh.getData();

    arnav.setData();
    arnav.getData();

    avi.setData();
    avi.getData();
    return 0;
}
