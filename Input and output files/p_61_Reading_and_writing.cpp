#include<iostream>
#include<fstream>

using namespace std;
int main()
{
    //Connecting our file with aout stream
    ofstream aout("sample60.txt");

    //Creating a name name string and filling it with the string entered by th user
    cout<<"Enter your name: ";
    string name;
    cin>>name;

    // Writing a string to the file
    aout<<"My name is "+name;

    aout.close();

    ifstream hin("sample60.txt");
    string content;
    getline(hin,content);
    cout<<"The content of the file is : "<<content<<endl;     
    hin.close
    
    
    
    ();   
 return 0;
}