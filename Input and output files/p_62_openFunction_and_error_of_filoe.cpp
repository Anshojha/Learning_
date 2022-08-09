#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;

int main()
{
    ofstream out;
    out.open("sample60.txt");
    out<<"This is sapme text."<<endl;
    out<<"This is sapme text 2."<<endl;
    out<<"This is sapme text 3."<<endl;
    out<<"This is sapme text 4.";
    out.close();


    ifstream in;
    string st;
    in.open("sample60.txt");
    while (in.eof()==0)
    {
       getline(in,st);
    cout<<st<<endl;
    }
    
    in.close();
 return 0;
}