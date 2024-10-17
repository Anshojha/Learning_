#include<iostream>
using namespace std;
class storeVal{
    public:
    storeVal() {}
    storeVal(const storeVal& s) {
         cout << "Copy constructor has been called " << endl;
    }
};      

storeVal foo() {
    storeVal obj;
    return obj;
}

void foo2( storeVal& obj) {
    return;
}

int main()
{
    storeVal obj1;

    cout << "Case 1: ";
    foo();
    cout << endl;

    cout << "Case 2: ";
    foo2(obj1);
    cout << endl;

    cout << "Case 3: ";
    storeVal obj2 = obj1;
           
 return 0;}