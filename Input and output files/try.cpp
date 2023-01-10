#include<iostream>
#include <string>
using namespace std;
template<class T1,class T2> 
void fun(T1 b ,T2 c) 
{ 
 cout << "Value of b is : " <<b<<endl; 
cout << "Value of c is : " <<c<<endl; 
} 
int main() 
{ 
 fun  (20,30.5); 
 fun  (12.34,1234);
 fun  (1999,"EBG");
 return 0; 
} 