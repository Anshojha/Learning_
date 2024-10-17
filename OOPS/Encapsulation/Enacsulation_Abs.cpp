#include<iostream>
using namespace std;

class Person {
    string name;
    int age;

    public:
        Person(string name, int age) {
            this -> name = name;
            this -> age = age;
        }

        void setName(string name) {
            this->name = name;
        }

        string getName() {
            return name;
        }

        void setAge(int age) {
            this->age = age;
        }

        int getAge() {
            return age;
        }
};
int main()
{

    Person person("Huda", 98);
    cout<<"Name :" << person.getName()<<endl;
    cout<<"Age :" << person.getAge() <<endl;

    person.setName("Naganiya");
    person.setAge(1000);

    cout<<"Name :" << person.getName()<<endl;
    cout<<"Age :" << person.getAge() <<endl;
 return 0;}