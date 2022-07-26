#include<iostream>
using namespace std;

class A{
    int a;
    public:
    void setData(int a){
      //a =a;   this give the garbage value without any error message
      this->a=a;  // This is called this pointer used in this situation
    }
    void getData(){
        cout<<"The value of a is "<<a<<endl;
    }
};

int main()
{
    //this is a keyword which is pointer which points to the objects which invokes the member function
   A a;
   a.setData(3);
   a.getData();        
 return 0;
}