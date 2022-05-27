#include<iostream>

using namespace std;

int main()
{int age;
    cout<<"Enter your age : "<<endl;
    cin>>age;

    // *************Selection Control Strcture:: If _ else ladder***********
    // if(age>18 && age <55){
    //     cout<<"You are welcome to the party!!"<<endl;
    // }
    // else if(age==18){
    //     cout<<"You are a kid and get a kid pass to enter into my party!!"<<endl;
    // }
    // else{
    //     cout<<"You are not allowed"<<endl;
    // }

    // *************Selection Control Strcture:: Switch case statement***********
    switch (age)
    {
    case 18:
        cout<<"You are 18"<<endl;
        break;
    case 22:
        cout<<"You are 22"<<endl;
        break;
    case 23:
        cout<<"You are 23"<<endl;
        break;
    
    default:
        cout<<"You are "<<endl;
        break;
    }       
    return 0;
}