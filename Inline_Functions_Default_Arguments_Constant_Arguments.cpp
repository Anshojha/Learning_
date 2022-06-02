#include<iostream>
using namespace std;

inline int product(int a,int b){
    // Not allowed to use  below line with line function
    // static int c =0; // This execute only once 
    // c= c+1; The value of c is retained
    // return a*b+c;
    return a*b;
}

float moneyRecived(int currentMoney , float factor = 1.04){
    return currentMoney*factor;
}

int main()
{
    // int num1, num2;
    // cout << "Enter the value of num1 " << endl; 
    // cin >> num1;
    // cout << "Enter the value of num2 " << endl;
    // cin >> num2;
    // // cout << "The product of num1 and num2 is " <<product(num1,num2)<<endl;
    // cout << "The product of num1 and num2 is " <<product(num1,num2)<<endl;
    // cout << "The product of num1 and num2 is " <<product(num1,num2)<<endl;
    int money = 10000;

    cout<<"If You have "<< money << "Rs in your account , you will recived "<<moneyRecived(money)<<"Rs after 1 year"<<endl;
    cout<<"For BPL :If You have "<< money << "Rs in your account , you will recived "<<moneyRecived(money,0.5)<<"Rs after 1 year"<<endl;

    return 0;
}