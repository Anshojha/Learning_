#include<iostream>
using namespace std;

class student {
    int r_no;
    char name[20];
    double fee;

    public:
        student() {
            cout <<"r_no :";
            cin>>r_no;
            cout<<"Name:";
            cin>>name;
            cout<<"fee :";
            cin>>fee;
        }

        void display() {
             cout << endl << r_no << "\t" << name << "\t" << fee;
        }
};
int main()
{
    student s;
    s.display();
           
 return 0;}