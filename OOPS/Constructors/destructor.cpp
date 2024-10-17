#include <iostream>
using namespace std;

class parent
{
    ~parent()
    {
        cout << "Destructor is called" << endl;
    }

public:
    parent()
    {
        cout << "The constructor is called" << endl;
    }
    void destruct()
    {
        delete this;
    }
};

int main()
{
    parent *p;
    p = new parent;

    p->destruct();

    return 0;
}