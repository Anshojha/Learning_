#include <iostream>
#include<map>
#include<string>
using namespace std;
// Map is an associative arry
int main()
{
map<string, int> marksMap;
marksMap["Ansh"]=89;
marksMap["Vaibhav"]=98;
marksMap["Robin"]=67;
marksMap.insert({{"sairabh",123},{"shah",324}});
map<string, int> :: iterator itr;
for (itr=marksMap.begin();itr!=marksMap.end();itr++)
{
    cout<<(*itr).first<<" "<<(*itr).second<<"\n";
}

cout<<"The size of the max size marksMap is :" << marksMap.max_size()<<endl;
cout<<"The size of the marksMap is :" << marksMap.size()<<endl;

    return 0;
}