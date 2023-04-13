#include <iostream>

using std::cout;
using std::endl;

// class A {
//     public:
//     //default ctor
//     A() : m_number{ 5 },
//     m_ptr{ new int{10} }{/*empty body*/}

//     //2-param ctor
//     A(int number, int data) : m_number{ number },
//     m_ptr{ new int{data} }{/*empty body*/}

//     //dtor
//     ~A() {delete m_ptr;}
//     //no copy ctor provided
//     //compiler's one used

//     int m_number;
//     int* m_ptr;
// };

class A {
public:
//default ctor
    A() : m_number{ 5 },
    m_ptr{ new int{10} }{
    //empty body
    }
    //copy ctor
    A(const A& source) : //copy ctor
    m_number{ source.m_number },
    m_ptr{ new int{*source.m_ptr} } {
    //empty body
    }

    //dtor
    ~A() {delete m_ptr;}
    int m_number;
    int* m_ptr;
};

void print_A(A a) {
    std::cout << a.m_number << '\n';
    std::cout << a.m_ptr << '\n';
}
int main() {
    A a1; // default constructor
    A a3{a1}; // copy constructor
    A a2 = a1; // copy constructor


    print_A(a2);//copy ctor called
}