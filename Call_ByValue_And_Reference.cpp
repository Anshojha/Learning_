#include <iostream>
using namespace std;
void swap(int a, int b) // This will not work
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}
// Call by reference by Pointer Method
void swapPointer(int *a, int *b) // This will not work
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
// Call by reference by variable
void swapReference(int &a, int &b) // This will work
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}

int main()
{
    int a = 4, b = 5;
    cout << "The value of a is " << a << "and the value of b is " << b << endl;

    // swap(4, 5); // This will not work
    //   swapPointer(&a, &b); This will swap the value of a and b by pointer method
    swapReference(a, b); // This will swap the value of a and b by referencr variable
    cout << "The value of a is " << a << "and the value of b is " << b << endl;
    return 0;
}