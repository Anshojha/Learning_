#include<iostream>
using namespace std;

int add(int a, int b){
    return a+b;
}

int add(int a, int b, int c){
    return a+b+c;
}


int main()
{
    cout<<"The sum of 2 and 4 is "<<add(2,4)<<endl;
    cout<<"The sum of 3,2 and 4 is "<<add(3,2,4)<<endl;
    return 0;
}