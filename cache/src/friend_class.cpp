#include <iostream>

/*Type 1: Non-Member Friend Function*/
class A
{

    int m_x;
    int m_y;

public:
    A(int x = 1, int y = 2) : m_x{x}, m_y{y} {}

    // declare a friend function
    friend void print_A(const A &);
};

void print_A(const A &a)
{
    std::cout << a.m_x << std::endl;
}
int main()
{
    A a(12);
    print_A(a);
}

/*Type 2: Member Friend Function | Type 3: Friend Class*/
// class A;
// class B{
//     public:
//     void print_A(const A& a);
// };

// class A{
//     int m_x;
//     public:
//     A(int x = 1): m_x{x}{}

//     friend class B;
// };

// void B::print_A(const A& a){
//     std::cout << a.m_x;
// }
int main()
{
    A a(12);
    print_A(a);
}
