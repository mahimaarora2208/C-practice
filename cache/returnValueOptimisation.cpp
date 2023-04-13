#include <iostream>
#include <memory>
#include <vector>
#include <unordered_map>
#include <cassert>

using std::cout;
using std::endl;
using std::string;
using std::vector;

std::string f() {
std::string a{ "A" };
std::cout << &a << '\n';
int b{ 3 };
return a;
}
void g() {
std::string x{ f() };
std::cout << &x << '\n';
}
int main() {
g();
}