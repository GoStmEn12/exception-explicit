#include <iostream>
enum monster_type {ork, troll};
class Перший 
{  
public:
  Перший(int, monster_type ty) 
  { 
  monster_type t=ty;
  }
  //Перший функція() { return 0;}
};
class Другий {  
public:
  explicit  Другий(int) {}
  Другий функція() { return 0;}
};
int main() {
	monster_type moster = ork;
	Перший перший(1, moster);  
  // помилка компіляції через заборону неявного перетворення!
	Другий другий = 1.0;
	return 0;
}