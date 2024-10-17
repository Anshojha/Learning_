#include<iostream>
using namespace std;
class Student {
    public:
        static int total;

        Student() {
            total =  total + 1;
        }
};

int Student :: total = 0;   
int main()
{
    Student s1;
    cout << "Number of student: " << s1.total << endl;

    Student s2;
    cout << "Number of student: " << s2.total << endl;

    Student s3;
    cout << "Number of student: " << s3.total << endl;
           
 return 0;}