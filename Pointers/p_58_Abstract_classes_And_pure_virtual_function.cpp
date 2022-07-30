#include <iostream>
#include <cstring>
using namespace std;

class CWH
{
protected:
    string title;
    float rating;

public:
    CWH(string s, float r)
    {
        title= s;
        rating = r;
    }
    virtual void display()=0; // This is called do nothing function ----> Also called pure virtual function
};

class CWHVideo : public CWH
{
    int videoLength;

public:
    CWHVideo(string s, float r, float vL) : CWH(s, r)
    {
        videoLength = vL;
    }
    virtual void display()
    {
        cout << "This is an amazing video with title " << title << endl;
        cout << "Rating: " << rating << "Out of 5 stars" << endl;
        cout << "Length of the video is: " << videoLength << "minutes" << endl;
    }
};
class CWHText : public CWH
{
    int words;

public:
    CWHText(string s, float r, int wc) : CWH(s, r)
    {
        words = wc;
    }
    void display()
    {
        cout << "This is an amazing text tutorial with title " << title << endl;
        cout << "Rating of this text tutorial is: " << rating << " Out of 5 stars" << endl;
        cout << "Number of words in this text tutorial is " << words << " words." << endl;
    }
};
int main()
{
    string title;
    float rating ,vlen;
    int words;

    // For Video tutorial
    title = "Django tutorial";
    vlen=4.34;
    rating = 4.99;
    CWHVideo djvideo(title, rating,vlen);
    // djvideo.display();
    cout<<endl<<endl<<endl;
    // For text tutorial
    title = "Django tutorial textual ";
    words=434;
    rating = 4.89;
    CWHText djText(title, rating,words);
    // djText.display();

    CWH * tuts[2];
    tuts[0]=&djvideo;
    tuts[1]=&djText;

tuts[0]->display();
  cout<<endl<<endl<<endl;
tuts[1]->display();
    return 0;
}

// Rules for Virtual function
// 1. They cannot be static.
// 2. They are accesed by object pointers.
// 3. Virtual function can be a friend of another class.
// 4. A virtual function in a base class might not be used.
// 5. If a virtual function can be difined in a base class , there is no necessity of redefining it in the derived class