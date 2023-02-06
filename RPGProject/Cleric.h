#ifndef CLERIC_H
#define CLERIC_H	

#include <iostream>
#include <string>
#include "Player.h"
using namespace std;

class Cleric : public Player
{
public:
	Cleric(string name, Species race) : Player(name, race, 20, 10)
	{

	}

	string attack() const
	{
		return "I will smite you with my holy wrath";
	}

};

#endif // !CLERIC_H

