#include <iostream>
using namespace std;

class shop{
    int itemID[100];
    int itemPrice[100];
    int counter;

    public:

    void initCounter(void){counter =0;}
    void setPrice(void);
    void displayPrice(void);
}; 

void shop ::setPrice(void){
    cout<<"Enter ID of item number "<< counter +1<<":" <<endl;
    cin>>itemID[counter];
    cout<<"Enter the price your item: "<<endl;
    cin>>itemPrice[counter] ;
    counter++;
}

void shop ::displayPrice(void){
    for (int i = 0; i < counter; i++)
    {
        cout<<"The price of Item with Id number "<<itemID[i]<<" is "<<itemPrice[i]<<endl;
    }
    
}

int main()
{
    int n;
    shop dukkan;
    dukkan.initCounter();
cout<<"Enter the total number of Item:"<<endl;
cin>>n;

for (int i = 0; i < n; i++)
{
    dukkan.setPrice();
}

    dukkan.displayPrice();
    return 0;
}