#include<iostream>
using namespace std;

class A{
    int a;
    public:
    void setData(int a){
      // a =a;  // this give the garbage value without any error message
      this->a=a;  // This is called this pointer used in this situation
    }
    void getData(){
        cout<<"The value of a is "<<a<<endl;
    }
};

int main()
{
    //this is a keyword which is pointer which points to the objects which invokes the member function
   A a,a2,a3;
   a.setData(4);
   a.getData();  
   a2.setData(5);
   a2.getData();  
   a3.setData(6);
   a3.getData();        
 return 0;
}