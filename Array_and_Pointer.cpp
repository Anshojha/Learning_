 #include<iostream>
    using namespace std;

    int main()
    {
    //     int marks[]={23,34,45,89};
        int mathsMark[4];
        mathsMark[0]=234;
        mathsMark[1]=234;
        mathsMark[2]=234;
        mathsMark[3]=234;
    // cout<<"Maths marks!!!"<<endl;
    //     cout<<mathsMark[0]<<endl;
    //     cout<<mathsMark[1]<<endl;
    //     cout<<mathsMark[2]<<endl;
    //     cout<<mathsMark[3]<<endl<<endl;

    //     cout<<marks[0]<<endl;
    //     cout<<marks[1]<<endl;
    //     cout<<marks[2]<<endl;
    //     cout<<marks[3]<<endl;

    // for (int i = 0; i < 4; i++)
    // {
    //     cout<<"The value of marks "<<i<<" is "<<mathsMark[i]<<endl;
    // }
int i=0;

    // while (i<4)
    // {
    //     cout<<"The value of marks "<<i<<" is "<<mathsMark[i]<<endl;
    //     i++;
    // }
    
    do
    {
        cout<<"The value of marks "<<i<<" is "<<mathsMark[i]<<endl;
        i++;
    } while (i<4);
    
    
           return 0;
    }