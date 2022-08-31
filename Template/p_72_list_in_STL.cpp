#include <iostream>
#include <list>
using namespace std;

void display(list<int> &lst){
    list<int> :: iterator it;
    for (it=lst.begin(); it!=lst.end();it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
}

int main()
{
list <int> list1;  // List of Zero length
list1.push_back(4);
list1.push_back(3);
list1.push_back(6);
list1.push_back(8);
list1.push_back(8);
list1.push_back(1);
display(list1);
// list1.pop_back(); // delete element from the end
// list1.pop_front(); // delete the element from the begining  
// list1.remove(6); // Element the element has value 6

 // Sorting the list
 list1.sort();
display(list1);
list <int> list2(4); // Empyt list of size 7    
list <int> :: iterator iter;
iter=list2.begin();
*iter=435;
iter++;
*iter=43;
iter++;
*iter=4;
iter++;
*iter=4;
list2.sort(); 

display(list2);
// Merging the list 
list1.merge(list2);
cout<<"List1 after merging : ";
display(list1);
// reversing the list
cout<<"After reversing the list :";
list1.reverse();
display(list1);
    return 0;
}