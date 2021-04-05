#pragma once
#include <iostream>
#include <string>

using namespace std;

class Character
{
public:
	//data/attributes/variables/data members
	string name;
	int level;
	int hp, mp;

	//constructor
	//special function that gets called when we build Character objects
	//Rules: function with same name as class, has no return type
	Character();//default constructor
	Character(string _name, int _level, int _hp, int _mp);//overloaded constructor
	//overloaded functions have same name, but difference parameters lists

	//functions/behaviours
	void levelUp();
	void displayStats();
};

