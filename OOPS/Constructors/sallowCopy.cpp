#include <iostream>
using namespace std;
class box
{
private:
    int length;
    int breadth;
    int height;
    int *p;
public:

    void set_dimensions(int l, int b, int h, int x)
    {
        length = l;
        breadth = b;
        height = h;
        p = new int;
        *p = x;
    }

    void show_data()
    {
        cout << " Length = " << length
             << "\n Breadth = " << breadth
             << "\n Height = " << height
             << "\n P int pointing to = " << p
             << endl;
    }
};
int main()
{
     // Object of class Box
    box B1, B3;

    // Set dimensions of Box B1
    B1.set_dimensions(14, 12, 16,100);
    B1.show_data();

    // When copying the data of object
    // at the time of initialization
    // then copy is made through
    // COPY CONSTRUCTOR
      // When copying the data of object
    // at the time of initialization
    // then copy is made through
    // COPY CONSTRUCTOR
    box B2 = B1;
    B2.show_data();

    // When copying the data of object
    // after initialization then the
    // copy is done through DEFAULT
    // ASSIGNMENT OPERATOR
    B3 = B1;
    B3.show_data();
  
    return 0;
}