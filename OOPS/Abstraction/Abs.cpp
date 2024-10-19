#include<iostream>
using namespace std;
class Vehicle {
    private:
        void piston () {
            cout << "4 piston\n";
        }

        void manWhoMade() {
            cout<< "Self made\n";
        }

    public:
        void company() {
            cout << "spaceX\n";
        }

        void model() {
            cout << "Tesla 2.0\n";
        }
};
int main()
{
  Vehicle v1;
  v1.company();
  v1.piston();
           
 return 0;}