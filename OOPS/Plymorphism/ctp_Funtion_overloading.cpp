#include<iostream>
using namespace std;
class Add {
    // int a;
    // int b;
    // int c;
    public:
        int add(int a, int b) {
            return a+b;
        }

        int add(int a, int b, int c) {
            return a+b+c;
        }
};
int main()
{
    Add a1;
    cout <<a1.add(1,2) << endl;
    Add a2;
    cout <<a1.add(1,2,4)<<endl;
           
 return 0;}