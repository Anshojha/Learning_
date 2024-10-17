 
#include <bits/stdc++.h>
using namespace std;
 
class Test {

 
private:
    ~Test() // Private Destructor
    {
        cout << "Destructor called\n";
    }
};
 
int main()
{
     Test* t = new Test;
    delete t;   
    return 0;
}