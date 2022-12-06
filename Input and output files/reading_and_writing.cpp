#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    // This is the code write in a file
    //   ofstream hout;
    // hout.open("sample1212.txt",ios::app);
      string name;
    //   cout<<"Enter the text you want to enter: ";
    //   getline(cin,name);
    //   hout<<name<<endl;
    //   hout.close();

      // This code is the sample to code read from a file the 
      ifstream iout;
      iout.open("sample1212.txt");
      getline(iout,name);
       cout<<name<<endl;
    iout.close();

 return 0;}