#include <iostream>

using namespace std;
int c = 45;
int main()
{
    // **************bUILT in Datatypes**********
    // int a,b,c;
    // cout<<"Enter the value for a:"<<endl;
    // cin>>a;
    // cout<<"Enter the value for b:"<<endl;
    // cin>>b;
    // c=a+b;
    // cout<<"The value of "<<a<<"+ "<<b<<"is "<<c<<endl;
    // cout<<"The global value of c is "<<::c;
    //    *************Float double and literals**************
    //     float d =34.4;
    //     long double e =34.4;
    //     cout<<"The size of 34.4 is "<<sizeof(34.4)<<endl;
    //     cout<<"The size of 34.4l is "<<sizeof(34.4l)<<endl;
    //     cout<<"The size of 34.4L is "<<sizeof(34.4L)<<endl;
    //     cout<<"The size of 34.4f is "<<sizeof(34.4f)<<endl;
    //     cout<<"The size of 34.4F is "<<sizeof(34.4F)<<endl;
    //    *************OUTPUT**************
    //     The size of 34.4 is 8
    //     The size of 34.4l is 12
    //     The size of 34.4L is 12
    //     The size of 34.4f is 4
    //     The size of 34.4F is 4
    //    *************Reference Variables**************
    // float x =45.3;
    // float & y =x;
    // cout<<x<<endl;
    // cout<<y<<endl;
    //    *************OUTPUT**************
    // 45.3
    // 45.3

    //    *************TypeCasting**************
    int a = 45;
    float b = 45.45;
    cout << "The value of a is " << (float)a << endl;
    cout << "The value of a is " << (int)b << endl;

    cout << "The value of a is " << float(a) << endl;
    cout << "The value of a is " << int(b) << endl;

    int c = int(b);

    cout << "The expression is " << a + b << endl;
    cout << "The expression is " << a + (int)b << endl;
    cout << "The expression is " << a + int(b) << endl;
    //    *************OUTPUT**************

    // The value of a is 45
    // The value of a is 45
    // The value of a is 45
    // The value of a is 45
    // The expression is 90.45
    // The expression is 90
    // The expression is 90
    return 0;
}