#include <iostream>
using namespace std;
class Monster {
public:
 string m_name;
  int m_life;
  double m_hp;
  double m_initial_hp;
  bool m_is_alive;
// Monster() {//default ctor
//    m_name = "Monster";
//    m_life = 1 ;
//    m_hp = 100.0 ;
//    m_initial_hp = m_hp ;
//    m_is_alive = true;
// }
Monster(string name, int life) {//default ctor
   m_name = name;
   m_life = life ;
   m_hp = 100.0 ;
   m_initial_hp = m_hp ;
   m_is_alive = true;
}
string get_name(){
    return m_name;
  }
void set_name(string name){
    m_name = name;
  }
};
int main(){
Monster aida("u",9); //default ctor called
Monster rogen("gogen",9); //default ctor called
// aida.set_name("aida");
cout << aida.get_name();

}