#include "Character.h"

//constructors setup an object for the first time
Character::Character()
{
	name = "Jeff";
	level = 1;
	hp = 20;
	mp = 15;
}
Character::Character(string _name, int _level, int _hp, int _mp)
{
	name = _name;
	level = _level;
	hp = _hp;
	mp = _mp;
}
void Character::levelUp() 
{
	level++;
	hp += 10;
	mp += 5;//same as this - mp = mp + 5;
}
void Character::displayStats()
{
	cout << name << " LV: " << level << endl;
	cout << "hp: " << hp << endl;
	cout << "mp: " << mp << endl;
}
