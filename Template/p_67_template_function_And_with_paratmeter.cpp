#include <iostream>
using namespace std;

// float funcAverage(int a, int b){
// float avg = (a+b)/2.0;
// return avg;
// }
// float funcAverage(int a, float b){
// float avg = (a+b)/2.0;
// return avg;
// }
// we need not to define different function for defferent parameter so we can define template  instead of
template <class T1, class T2>

float funcAverage(T1 a, T2 b)
{
    float avg = (a + b) / 2.0;
    return avg;
}

template <class T>
void swapp(T &a, T &b)
{
    T temp = a;
    a = b;
    b = temp;
}

int main()
{
    float a;
    a = funcAverage(4, 5);
    cout << "The avg value of those numbers is " << a << endl;
    int x = 4;
    int y = 5;
    swapp(x, y);
    cout << x << endl
         << y;

    return 0;
}