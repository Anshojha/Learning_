#include<iostream>
using namespace std;

class student {
    int rno;
    string name;
    double fee;

    public:
        student(int, string, double);
        
        student(student& t) {
            rno = t.rno;
            name = t.name;
            fee = t.fee;
            cout<<"This is copy Csontructor"<<endl;
        }

        void display() ;
};

student::student(int no, string n, double f)
{
    rno = no;
    name = n;
    fee = f;
}

void student :: display () {
     cout << rno << "\t" << name << "\t" << fee << endl;
}
int main()
{

    student s(1001, "Akash", 2323);
    s.display();

    student manjeet(s);
    manjeet.display();
           
 return 0;}