#include<iostream>
using namespace std;

class Shop{
    int id;
    float price;
    public:
    void setData(int a, float b){
        id =a;
        price=b;
    }
    void getData(void){
        cout<<"The code of the item "<<id<<endl;
        cout<<"The price of the item is "<<price<<endl;
    }

};
int main()
{
    int size=3;
    Shop *ptr = new Shop [size];
    Shop *ptrTemp =ptr;
    int p ;
    float q;
    
    for (int i = 0; i < size; i++)
    {
        cout<<"Enter the  code and price of the item "<<i+1<<endl;
        cin>>p>>q;
        ptr->setData(p,q);
        ptr++;
    }
    for (int i = 0; i < size; i++)
    {
        cout<<"Iten number: "<<i+1<<endl;
        ptrTemp->getData();
        ptrTemp++;
    }
    
 return 0;
}