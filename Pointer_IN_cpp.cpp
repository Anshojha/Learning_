    #include<iostream>
    using namespace std;

    int main()
    {
        // Pointer -> Is datatype which holds the address of a variable
    int a =45;
    int *b;
    b= &a;
      // & -> Address of operator
    cout<<"The address of a is "<<&a<<endl;
    cout<<"The address of a is "<<b<<endl;
      // 8 -> Dereference Operator
    cout<<"The address of a is "<<*b<<endl;

    int **c =&b;
    cout<<**c;
        return 0;

    }