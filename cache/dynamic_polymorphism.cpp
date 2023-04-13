#include <iostream>
#include <memory>

using namespace std;

class IShape
{
public:
    virtual void draw() = 0;
};

class Rectangle : public IShape
{
    int m_L, m_B;

public:
    Rectangle(int l, int b) : m_L{l}, m_B{b} {}
    virtual void draw() override
    {
        cout << "Draw Rectangle with " << m_L << " and " << m_B << endl;
    }
};

int main()
{
    // //  Rectangle r1(2,3);
    // IShape* q1 = new Rectangle(5,3);
    // q1->draw();
    // IShape* r = new Rectangle(9,7);

    int v[]{1, 2, 3, 4, 5};
    int length_arr = sizeof(v) / sizeof(v[0]);
    cout <<length_arr << endl;
}