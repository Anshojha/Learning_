#include<iostream>
// using namespace std;

// class Test
// {
// private:
//   int x;
// public:
//   Test(int x = 0) { this->x = x; }
//   void change(Test *t) { this = t; }
//   void print() { cout << "x = " << x << endl; }
// };

// int main()
// {
//   Test obj(5);
//   Test *ptr = new Test (10);
//   obj.change(ptr);
//   obj.print();
//   return 0;
// }



// using namespace std;

// class Test
// {
// private:
//   int x;
//   int y;
// public:
//   Test(int x = 0, int y = 0) { this->x = x; this->y = y; }
//   static void fun1() { cout << "Inside fun1()"; }
//   static void fun2() { cout << "Inside fun2()"; this->fun1(); }
// };

// int main()
// {
//   Test obj;
//   obj.fun2();
//   return 0;
// }


using namespace std;

class Test
{
private:
  int x;
  int y;
public:
  Test(int x = 0, int y = 0) { this->x = x; this->y = y; }
  Test &setX(int a) { x = a; return *this; }
  Test &setY(int b) { y = b; return *this; }
  void print() { cout << "x = " << x << " y = " << y << endl; }
};

int main()
{
  Test obj1(5, 5);

  // Chained function calls.  All calls modify the same object
  // as the same object is returned by reference
  obj1.setX(10).setY(20);

  obj1.print();
  return 0;
}