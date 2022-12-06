#include<iostream>
#include<fstream>
using namespace std;
int main()
{
  int rno ,fee;
  char name[30];
  cout<<"Enter the student Name :";
  cin>>name;
  cout<<"Enter your Roll No :";
  cin>>rno;
  cout<<"Enter the fee details :";
  cin>>fee;
  ofstream win;
  win.open("data.docs",ios::app);
  win<<name<<"\t"<<rno<<"\t"<<fee<<endl;
  win.close();
  ifstream wout;
  wout.open("data.docs");
  cout<<name<<"\t"<<rno<<"\t"<<fee<<endl;

 return 0;}