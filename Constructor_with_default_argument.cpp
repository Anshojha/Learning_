#include<iostream>
using namespace std;
class Simple{
    int a;
    int b;
    public:
    Simple(int x, int y=9){ // Default argument is given y=9
        a=x;
        b=y;
    }
   void printData();
};

void Simple:: printData{
    cout<<"The value of data a is "<<a<<"The value of data b is"<<b;
}

int main()
{
           
 return 0;
}