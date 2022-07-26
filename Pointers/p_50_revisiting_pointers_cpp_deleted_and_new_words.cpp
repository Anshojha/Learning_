#include<iostream>
using namespace std;
int main()
{
    // Basic Examples
    int a=4;
    int *ptr=&a;
    cout<<"The value of a is "<<(*ptr)<<endl;

    float *p= new float(40.78);
    cout<<"The value at address p is "<<*(p)<<endl;

    int *arr =new int[4];
     arr[0]=1;
     arr[1]=2;
     arr[2]=3;
     arr[3]=4;
// delete arr; // it can free the memory of arr
 delete[] arr; // it can free the the memory of dayanamically allocated array
    cout<<"The value of arr[0] is "<<arr[0]<<endl;
    cout<<"The value of arr[0] is "<<arr[1]<<endl;
    cout<<"The value of arr[0] is "<<arr[2]<<endl;
    cout<<"The value of arr[0] is "<<arr[3]<<endl;
 return 0;
}