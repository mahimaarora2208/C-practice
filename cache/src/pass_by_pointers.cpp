#include <iostream>

using std::cout;
using std::endl;

// void my_function(int ptr){
//     cout << ptr << endl;
// }

// int main(){

//     int a = 100;
//     cout << (&a) << endl;
//     my_function(a);
// }

void changes_value_inside_pointer(int *ptr)
{
    cout << &ptr << " is different than " << ptr << endl;
    *ptr = 20;
    cout << &ptr << " is different than " << ptr << endl;
    cout << *ptr << endl; // 20
    cout << ptr << " is same as before" << endl;
}
void changes_value_inside_pointer_1(int *ptr1)
{
    cout << &ptr1 << " is different than " << ptr1 << endl;
    *ptr1 = 20;
    cout << *ptr1 << endl; // 20
    cout << ptr1 << " is same as before" << endl;
}

int *return_largest(int *num1, int *num2)
{
    cout << "address of num1 is " << &num2 << " Vs " << num1 << endl;
    if (*num1 > *num2)
    {
        return num1;
    }
    return num2;
    
}

int* func1(){

    int a{5};
    int *func1_ptr = new int; // safe
    // int *sec_ptr{&a}; // unsafe
    *func1_ptr = a;
    return func1_ptr;   
}

int main()
{

    int a = 100;
    int b = 200;
    int *result{nullptr};
    cout << &result <<endl;
    // argument is address
    // changes_value_inside_pointer(&a);
    // argument is pointer
    // cout << &ptr1 << " is different than " << &a << endl;
    // cout << ptr1 << " is same to " << &a << endl;
    // changes_value_inside_pointer_1(ptr1);
    // cout << a << endl; // 20
    // return pointer from a function
    // result = return_largest(&a, &b);
    // cout << result << " and " << *result << endl;
    result = func1();
    cout << *result << endl;
    delete result;
}
