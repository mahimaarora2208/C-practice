#include <iostream>
using namespace std;

class Entity
{
    int c = 100;
    void print_private()
    {
        cout << c << endl;
    }

protected:
    int b = 30;
    void print_protected()
    {
        cout << b << endl;
    }

public:
    int a = 20;
    float X = 2.0, Y = 3.0;
    void move(float xa, float xb)
    {
        X += xa;
        Y += xb;
    }
    virtual void print_public()
    {
        cout << "Inside public!!!" << endl;
    }

    void print_all()
    {
        cout << a << b << c << endl;
    }
};

class Player : public Entity
{
public:
    Entity e1;
    const char *Name;
    void print_entityInPlayer()
    {
        e1.print_all();
    }
    void print_public() override
    {
        cout << "Inside player!!" << endl;
    }
};

int main()
{

    Player p1;
    Entity e1;
    e1.print_public();
    p1.print_public();
}