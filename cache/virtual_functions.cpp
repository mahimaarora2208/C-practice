#include <iostream>
using namespace std;

class Entity 
{
public:
    // virtual string GetName() 
    // {
    //     return "Entity";
    // }
    // pure virtual method
    virtual string GetName() = 0;
};

class Player : public Entity
{
private:
    string m_Name;

public:
    Player(const string &name) : m_Name{name} {}
    // mark this function as override (makes code more readable and prevent bugs like spelling mistakes)
    string GetName() override
    {
        return m_Name;
    }
  
};

void PrintName(Entity* e){
    cout << e->GetName() << endl;
}

int main()
{
    // Entity *e1 = new Entity();
    // cout << e1->GetName() << endl; // OK --> calls entity's GetName()
    // PrintName(e1);
    Player *p1 = new Player("Mahima");
    // cout << p1->GetName() << endl; // // OK --> calls Player's GetName()
    PrintName(p1);
    // When we use polymorphism, it will break
    Entity *e2 = p1; // still prints Entity as it considers it to be Entity's obj
    // cout << e2->GetName() << endl;
    PrintName(e2);
}