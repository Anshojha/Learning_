#include <iostream>
using namespace std;
class box
{
private:
    static int length;
    static int breadth;
    static int height;

public:
    static void print()
    {
        cout << "The value of the length is: " << length << endl;
        cout << "The value of the breadth is: " << breadth << endl;
        cout << "The value of the height is: " << height << endl;
    }
};

int box ::length = 10;
int box ::breadth = 20;
int box ::height = 30;

int main()
{
    box b;
    cout << "Static membe is called trogh obect "<< endl;
    b.print();
    return 0;
}