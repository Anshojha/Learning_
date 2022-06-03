#include<iostream>
using namespace std;

int factorial(int n){
    if(n<=1){
        return 1;
    }
    return n * factorial(n-1);
}

int fib(int n){
    if(n<2){
        return 1;
    }
    return fib(n-2)+fib(n-1);
}

int main()
{
    int num;
    cout << "Enter the value of num " << endl; 
    cin >> num;
    cout<<"The factorial of "<< num<<" is "<<factorial(num)<<endl;
    cout<<"The fibonaci of "<< num<<" is "<<fib(num);
    return 0;
}