#include <iostream>
#include <cmath>
using namespace std;

class Point{
    int x,y;
    friend void pointDistance(Point , Point); 
    public:
    Point(int a, int b){
         
        x=a;
        y=b;
    }
    void diplayPoint(){
        cout<<"The point is ("<<x<<","<<y<<")"<<endl;    
    }
   
};

void pointDistance(Point p1, Point p2){
    int x_diff = (p2.x-p1.x);
    int y_diff = (p2.y-p1.y);
    int dis = sqrt(pow(x_diff,2)+pow(y_diff,2));
    cout<<"The ditance between point is "<<dis<<endl;
}



int main()
{
Point a1(2,6);
a1.diplayPoint();

Point a2(2,6);
a2.diplayPoint();

Point a3(1,0);
a3.diplayPoint();

Point a4(70,0);
a4.diplayPoint();

pointDistance(a1 ,a2);
pointDistance(a2 ,a3);
pointDistance(a3 ,a4);


    return 0;
}