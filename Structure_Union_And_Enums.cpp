#include <iostream>
using namespace std;

typedef struct employee
{
    /* data */
    int eId;
    char favchar;
    float salary;

} ep;

union money
{
    int rice;
    char car;
    float pound;    
};


int main()
{
    enum meal{breakfast,lunch,dinner};

    meal m1 = breakfast;
    meal m2 = lunch;
    meal m3 = dinner;
 cout<<m1<<endl;
 cout<<m2<<endl;
 cout<<m3<<endl;

 cout<<(m1==0)<<endl;
    // cout<<breakfast<<endl;
    // cout<<lunch<<endl;
    // cout<<dinner<<endl;



    // union money m1;
    // m1.rice=34;
    // m1.car='e';
    // cout<<m1.rice<<endl;
    // cout<<m1.car<<endl;


    // ep harry;
    // struct employee harry1;
    // ep harry2;

    // harry.eId = 101;
    // harry.favchar = 'c';
    // harry.salary = 120000000;
    // cout << "The value is " << harry.eId << endl;
    // cout << "The value is " << harry.favchar << endl;
    // cout << "The value is " << harry.salary << endl;
    // cout << endl;

    // harry1.eId = 102;
    // harry1.favchar = 't';
    // harry1.salary = 120000000;
    // cout << "The value is " << harry1.eId << endl;
    // cout << "The value is " << harry1.favchar << endl;
    // cout << "The value is " << harry1.salary << endl;

    // cout << endl;
    // harry2.eId = 103;
    // harry2.favchar = 'v';
    // harry2.salary = 120000000;
    // cout << "The value is " << harry2.eId << endl;
    // cout << "The value is " << harry2.favchar << endl;
    // cout << "The value is " << harry2.salary << endl;

    return 0;
}