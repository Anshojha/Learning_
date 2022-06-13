#include<iostream>
using namespace std;
int main()
{
     int num,original,reversed=0;
    cout<<"Enter the number :"<<endl;
    cin>>num;
    original = num;
    while (num>0)
    {
        reversed = reversed*10+(num%10);
        num = num/10; 
    }
    if(reversed==original){
        cout<<"Given number is palindrome";
    }
    else{
        cout<<"Given number is not palindrome";
    }
    return 0;
}