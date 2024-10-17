#include<iostream>
using namespace std;
class half{
    int a;
    int b;

    public:
        int solve(int input) {
            a = input;
            b = a/2;
            return b;
        }
};
int main()
{
    int n;
    cin>>n;
    half t;
    cout<<t.solve(n);
           
 return 0;}