#include <iostream>
using namespace std;

class Student
{
protected:
    int roll_number;

public:
    void set_roll_number(int);
    void get_roll_number(void);
};
void Student::set_roll_number(int r)
{
    roll_number = r;
}
void Student::get_roll_number(void)
{
    cout << "The roll number is " << roll_number << endl;
}

class Exam : public Student
{
protected:
    float maths;
    float physics;

public:
    void set_marks(float, float);
    void get_marks(void);
};

void Exam::set_marks(float m1, float m2)
{
    maths = m1;
    physics = m2;
}
void Exam::get_marks()
{
    cout << "The marks is obtained in maths is " << maths << endl;
    cout << "The marks is obtained in physics is " << physics << endl;
}

class Result : public Exam{
    float percentage;
    public:
    void diplay_result(){
        get_roll_number();
        get_marks();
        cout<<"Your percentage is "<<(maths+physics)/2<<"%."<<endl;
    }

};

int main()
{
    /*
    Notes:
    If we are inheriting C from B and B from A : [A--->B--->C]
    1. A is the base class for B and B is the base is the class for c.
    2. A--->B--->C this the inheritance path

    */
  Result Harry, Ansh;
  Harry.set_roll_number(420);
  Ansh.set_roll_number(120);
  Harry.set_marks(99,99);
  Ansh.set_marks(29,29);
  Harry.diplay_result();
  cout<<endl;
  Ansh.diplay_result();
    return 0;
}