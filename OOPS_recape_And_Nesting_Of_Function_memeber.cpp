    // *************OOPs-Classes and object******************

    // C++ -> Initillt called -> C with classes by stroustroup
    // Class -->  Extension of structure (in c)
    // C++ had limitation
    //         --> member are public
    //         --> No Methods
    // Classes --> Structure + More
    // Classes --> Can have method and propertise
    // Classes --< Can make few memeber as public and few as a private
    // We can declear objects along with classes as follows
    /*  class Employee{
        Function decleartion
      } Harry , Rohan , Ansh; */
    // Harry.salary=234234; --> Dosen't make sense if the salary is private You have to use the some method
    // Structure in C++ are already typed of so no need to typedof i


    //**********Nesting Of Function****************
#include <iostream>
#include <string>
using namespace std;

class binary
{
    string s;

public:
    void read(void);
    void chk_bin(void);
    void ones_comp(void);
    void display(void);
};

void binary ::read(void)
{
    cout << "Enter the Binary number:" << endl;
    cin >> s;
}

void binary ::chk_bin(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "Incorrect Binary Number" << endl;
            exit(0);
        }
    }
}

void binary ::ones_comp(void){
    chk_bin(); //  user no need to check the binary
    for (int i = 0; i < s.length(); i++)
    {
        if(s.at(i)=='0'){
            s.at(i)='1';
        }
        else{
            s.at(i)='0';
        }

    }
}


void binary :: display(void){
    cout<<"Displaying the ones binary"<<endl;
    for (int i = 0; i < s.length(); i++)
    {
      cout<<s.at(i);

    }
}

int main()
{

    binary b;
    b.read();
    // b.chk_bin();
    b.ones_comp();
    b.display();
    return 0;
}