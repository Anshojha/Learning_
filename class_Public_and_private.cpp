#include <iostream>
using namespace std;

class Employee
{
private:
    int a, b, c;

public:
    int d, e;
    void setData(int a1, int b1, int c1); /*  This is a declearation of function so that we can define the function out side the class*/
    void getData()
    {
        cout << "The value of a is " << a << endl;
        cout << "The value of b is " << b << endl;
        cout << "The value of c is " << c << endl;
        cout << "The value of d is " << d << endl;
        cout << "The value of e is " << e << endl;
    }
};

void Employee ::setData(int a1, int b1, int c1) /*Here the double colon define that function is previouslty defined The above function is defined here to make the program readable */
{
    a = a1;
    b = b1;
    c = c1;
}

int main()
{
    Employee Harry;
    // Harry.a=2345; -> Error  // We can not directly access the value of a because a is private in class it can only access through the function in class
    Harry.d = 23;
    Harry.e = 89;
    Harry.setData(1, 2, 3);
    Harry.getData();
    return 0;
}