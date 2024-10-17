#include <iostream>
using namespace std;
int main()
{
    enum class Color {
        Red,
        Green,
        Blue
    }colors;

    enum class People {
        Good,
        Bad
    };

    enum class Color2 {
        Red,
        Black,
        White
    };

    int Green = 10;

    Color x = Color :: Green;

    if(x == Color :: Red) {
        cout<<"The given coloe is Red\n";
    }
    else {
        cout <<"The givn color is not red\n";
    }

    People p = People::Good;

    if (p == People::Bad)
        cout << "Bad people\n";
    else
        cout << "Good people\n";

        cout << int(x);

        cout<<"The sizeof of color is :: "<<sizeof(colors);


    return 0;
}
