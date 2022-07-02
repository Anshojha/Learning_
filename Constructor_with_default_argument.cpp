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
   void printData(void);
};

void Simple::printData(){
    cout<<"The value of a and b is "<<a<<" and "<<b<<endl;

};

int main()
{
    Simple s(1);
    s.printData();
           
 return 0;
}