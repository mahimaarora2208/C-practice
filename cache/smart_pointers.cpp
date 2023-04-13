#include <iostream>
#include <memory>
#include <vector>
#include <unordered_map>
#include <cassert>

using std::cout;
using std::endl;
using std::string;
using std::vector;
// struct Person
// {
//     int age{0};
//     string name{"Person"};
// };

// int main()
// {
//     Person p1{21, "Tom"};
//     Person * john{new Person{34, "John"}};
//     Person *ptr{&p1};
//     cout << (*ptr).age << " is the same as " << ptr->age << endl;
//     cout << (*john).name << " is the same as " << john->name << endl;
//     delete john;
// }

// void double_value(int *ptr){
// *ptr *= 2;
// }
// int main(){
// int value{10};
// std::cout << value << '\n';
// double_value(&value); //pass an address
// std::cout << value << '\n';
// }
int *return_max(int *num1, int *num2)
{
    if (*num1 > *num2)
    {
        return num1;
    }
    return num2;
}
void observe(std::weak_ptr<int> wp) {
std::cout << "wp.use_count() == " << wp.use_count() << "; ";
//create a shared_ptr from a weak_ptr
if (std::shared_ptr<int> sp_tmp = wp.lock())
std::cout << "*sp_tmp == " << *sp_tmp << '\n';
else
std::cout << "wp is expired\n";
}
int main()
{
std::weak_ptr<int> wp;
{
auto sp = std::make_shared<int>(10);
wp = sp;
observe(wp);
}//deallocate memory managed by sp
observe(wp);

}

 // std::unique_ptr<int> smart_ptr{new int{5}};
    // int *raw_ptr = smart_ptr.release(); // release ownership
    // // now raw_ptr points to the memory
    // assert(smart_ptr.get() == nullptr);
    // assert(smart_ptr == nullptr);
    // std::cout << "int is no longer owned by smart_ptr...\n";
    // cout << *raw_ptr;
    // delete raw_ptr;

// std::unique_ptr<int> smart_ptr1(new int{5});
// std::unique_ptr<int> smart_ptr2{std::move(smart_ptr1)};
// cout << smart_ptr1.get(); 

    // vector<int> arr = {1, 2, 3, 4, 5};
    // vector<int>::iterator ptr;

    // for (auto it = arr.begin(); it != arr.end(); it++)
    // {
    //     cout << *it << endl;
    // }

    // using scoreMap = std::unordered_map<string, int>;
    // scoreMap map;
    // map["Mahi"] = 5;
    // map["Aditi"] = 15;

    // for (scoreMap::const_iterator it = map.begin(); it != map.end(); it++)
    // {
    //     cout << it->first << "  " << it->second << endl ;
    // }

    //   for (int value : arr)
    //   {
    //     cout << value;
    //   }

