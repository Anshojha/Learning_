#include <iostream>
#include <cmath>
using namespace std;

class SimpleCalculator
{
    int a;
    int b;

public:
    void getData()
    {
        cout << "Enter the value of a: ";
        cin >> a;
        cout << "Enter the value of b: ";
        cin >> b;
    }

    void performOperation()
    {
        cout << "The value of a + b is: " << a + b << endl;
        cout << "The value of a - b is: " << a - b << endl;
        cout << "The value of a * b is: " << a * b << endl;
        cout << "The value of a / b is: " << a / b << endl;
    }
};

class SciencetificCalculator
{
    int a;
    int b;

public:
    void getData()
    {
        cout << "Enter the value of a: ";
        cin >> a;
       
    }

    void performOperation(){
 cout << "The value of cos(a) is: " << cos(a) << endl;
 cout << "The value of sin(a) is: " << sin(a) << endl;
 cout << "The value of exp(a) is: " << exp(a) << endl;
 cout << "The value of tan(a) is: " << tan(a) << endl;
    }};

    int main()
    {
        SciencetificCalculator calc;
        calc.getData();
        calc.performOperation();
        return 0;
    }