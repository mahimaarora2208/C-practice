#include <iostream>

using std::cout;
using std::endl;

enum color : char
{
    Red = 9,
    Green,
    Yellow
};

// Does not instantiate apple
// struct
// {
//     float weight;
//     color c;
// } apple;

// Instantiates apple
struct
{
    float weight;
    color c;
} apple;

int main()
{

    apple.c = Red;
    apple.weight = 45.1;

    if (apple.c == 9)
    {
        cout << "true";
    }
}