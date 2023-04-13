# include <iostream>

using std::cout;
using std::endl;

int main(){
// 3 ways to use constness with pointers


    int a = 20; 
    int b = 120; 
    // int* ptr{&a};
    // cout << &a << " and "<< ptr << endl ;

// // type 1: pointers to constants
//     const int * ptr{&a};
//    // *ptr = 90; // ERROR since its constant int
//     ptr = &b; // OK as pointer can point to a different adddress
//     cout << &a << " and "<< ptr << endl ;

// type 2: constant pointers 
    // int * const ptr{&a};
    // *ptr = b; // 
    // // ptr = &b; // ERROR since its constant ptr
    // cout << a << " and "<< ptr << endl ;

// type 3: constant pointers to constant integers 
    const int * const ptr{&a};
    //*ptr = b; // 
    // ptr = &b; // ERROR since its constant ptr
    cout << a << " and "<< ptr << endl ;


}
