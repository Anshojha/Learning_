#include <iostream>
using namespace std;

template <class T>
class Harry
{
public:
    T data;
    Harry(T a)
    {
        data = a;
    }
    void display();
};
template <class T>
void Harry<T>::display()
{
    cout << data;
}

void func(int a)
{
    cout << "I am first func()" << a << endl;
}
template <class T>
void func(T a)
{
    cout << "I am teamplised func()" << a << endl;
}

int main()
{
    //    Harry <float> h(5.7);
    // //    Harry <int> h(5);
    // //    Harry <char> h('c');
    //    cout<<h.data<<endl;
    //    h.display();

    func(7); // Exact match take the highest priority

    return 0;
}