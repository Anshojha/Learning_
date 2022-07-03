#include <iostream>
using namespace std;

// Destructors can  never take an arguments nor does it return any value
int count = 0;
class num
{
public:
    num()
    {
        count++;
        cout << "This is the time when an objct is called" << count << endl;
    }

    // Below is the destructors
    ~num()
    {
        cout << "This is the time when my destructor is called for object number" << count << endl;
        count--;
    }
};
int main()
{
    cout<<"We are inside our main function"<<endl;
    cout<<"Creating first object n1"<<endl;
    num n1;
    {
        cout<<"Entering this block"<<endl;
        cout<<"Creating two more objects"<<endl; 
        num n1,n2;
        cout<<"Exiting the block";
    }
    cout<<"Back to main"<<endl;

    return 0;
}