#include<iostream>
#include<fstream>
using namespace std;
/*
The useful classes for which with files in cpp are:
1. fstreambase
2. ifstreambase --> deriverd from fstrambase
3. ofstream --> deriverd from fstrambase
*/

// In order work with files in cpp, you will have to open it 
// Primarily, there are 2 ways to open a file:
// 1. Using the constructor
// 2. Using the member function open() of the class
int main()
{
    string st ="My name is Ansh Ojha.";
    string st2;
    int a =45;
    // opening files using constructor and writing it
    // ofstream out("sample60.txt"); // Write operation 
    // out<<st;

    // opening files using constructor and reading it
    ifstream in("sample60B.txt"); // Read operation 
    // in>>st2;
    getline(in,st2);  
    cout<<st2;
    in>>a;
           
 return 0;
}