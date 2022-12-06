#include<iostream>
using namespace std;

class student{
     protected:
     int roll_number;
     public:
     void set_roll_number(int);
     void get_roll_number(void );
};

void student :: set_roll_number(int r ){
    roll_number=r;
}
void student :: get_roll_number( ){
   cout<<"The roll number is "<< roll_number<<endl;
}


class Exam : public student{

};

int main()
{
           
 return 0;}