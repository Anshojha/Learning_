#include<iostream>
using namespace std;
template <class T>
class vector{
    public:
    T * arr;
    int size;
    vector(int m ){
        size =m;
        arr = new T[size];
    }
   T dotProduct(vector &v){
    T d=0;
    for(int i =0;i<size;i++){
        d += this->arr[i]* v.arr[i];
      
    }
      return d;
   }
};


int main()
{
    // vector<int> v1(3);
    // v1.arr[0]=0;
    // v1.arr[1]=1;
    // v1.arr[2]=2;
    // vector<int> v2(3);
    // v2.arr[0]=3;
    // v2.arr[1]=4;
    // v2.arr[2]=5;


    vector<float> v1(3);
    v1.arr[0]=0.5;
    v1.arr[1]=1.1;
    v1.arr[2]=2.6;
    vector<float> v2(3);
    v2.arr[0]=3.5;
    v2.arr[1]=4.9;
    v2.arr[2]=5.8;

    float a = v1.dotProduct(v2);
    cout<<a<<endl;

 return 0;
}