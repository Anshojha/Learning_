#include <iostream>

using namespace std;
class c2;
class c1{
    int val;
    friend void exchage(c1 &, c2 &);
    public:
    void setValue(int a){
        val=a;
    }
    void displayData(void){
        cout<<val<<endl;
    }
};
class c2{
    int val2;
    friend void exchage(c1 &, c2 &);
    public:
    void setValue(int a){
        val2=a;
    }
    void displayData(void){
        cout<<val2<<endl;
    }
};

void exchange(c1 & x, c2 & y){
    int temp = x.val;
    x.val = y.val2;
    y.val2=temp;
}

int main()
{
c1 oc1;
c2 oc2;

oc1.setValue(34);
oc2.setValue(67);

exchange(oc1,oc2);
cout<<"The value after swaping value is ";
oc1.displayData();
cout<<"The value after swaping value is ";
oc2.displayData();
    return 0;
}