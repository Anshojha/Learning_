#include <iostream>
#include <vector>
using namespace std;
template <class T>
void diplat(vector<T> &v)
{
    cout << "diplaying vector !!" << endl;
    for (int i = 0; i < v.size(); i++)
    {

        cout << v.at(i) << " "; // insert element at the position
    }
    cout << endl;
}

int main()
{

    // Ways to create vector
        int element, size = 5;
    vector<int> vec1;
    // cout<<"Enter the size of the vector :"<<endl;
    // cin>>size;
    // for (int i = 0; i <size; i++)
    // {
    //     cout<<"Enter the element to add in the Vector "<<endl;
    //     cin>>element;
    //     vec1.push_back(element);
    // }
    // vec1.pop_back(); // It delete the last element
    // cout << "After iter!!" << endl;
    // vector<int>::iterator iter = vec1.begin();
    //  vec1.insert(iter,565); // It insert the 566 at the begining
    //  vec1.insert(iter+1,565); // It insert the 566 after 1st element
    //  vec1.insert(iter+1,5,565); // It insert the 566 after 1st elememt 5 times
    // vec1.erase(vec1.begin() + 5); // erase the 6th element
    // diplat(vec1);       // Zero length intger vector
    vector<char> vec2(4); // 4 element character vector
    // vec2.push_back('A');
    // diplat(vec2);
    // vector<char> vec3(vec2); // 4 element character vector from vec 2
    // diplat(vec3);
    vector<int> vec4(4, 13); // print 3 six time
    vector<int>::iterator iter = vec4.begin();
    vec4.insert(iter+4,565);

    diplat(vec4);


    return 0;
}