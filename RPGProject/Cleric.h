#ifndef CLERIC_H
#define CLERIC_H	

#include <iostream>
#include <string>
#include "Player.h"
using namespace std;

class Cleric : public Player
{
public:
	Cleric(string name, Species race, int hitPoints, int magicPoints);
	void setHitPoints(int hitPoints);
	int getHitPoints() const;
	void setMagicPoints(int magicPoints);
	int getMagicPoints() const;
	string attack() const;

private:
	int hitPoints;
	int magicPoints;
	//string attack;
};

#endif // !CLERIC_H

