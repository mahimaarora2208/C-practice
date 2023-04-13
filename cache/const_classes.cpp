/* 3 Rules
    1. const function can be called by const and non const objs
    2. const objects can only call const methods
    3. const specifier must appear in .h and .cpp files
*/

#include <iostream>

class Entity
{
    int m_x = 10;
    int m_y = 20;

public:
    const int &getX() const
    {
        return m_x;
    }

    void setX(int x)
    {
        m_x = x;
    }
};

int main()
{
    Entity e1;
    Entity e2;
    e2.setX(221);
    int res = e1.getX();
    std::cout << res << std::endl;
}
