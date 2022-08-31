#include <iostream>
#include <functional>
#include <algorithm>
using namespace std;
int main()
{
    // Fucntion Objects :--> Function wrapped in a class so that it can availble like an object
    int arr[]={1,24,3,44,23,56};
    sort(arr,arr+6,greater<int>());
    for (int i = 0; i < 6; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    return 0;
}