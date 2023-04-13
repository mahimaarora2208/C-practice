#include <iostream>
using namespace std;

class ABase{ 
        int iMem; 
}; 
 
class BBase : public virtual ABase { 
        int iMem; 
}; 
 
class CBase : public virtual ABase { 
        int iMem; 
}; 
 
class ABCDerived : public BBase, public CBase { 
        int iMem; 
}; 

int main(void)
{
    // GrandChild d;
    // d.print_base();
    cout << sizeof(ABCDerived);
    return 0;
}