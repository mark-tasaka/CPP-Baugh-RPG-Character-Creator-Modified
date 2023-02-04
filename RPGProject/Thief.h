#ifndef THIEF_H
#define THIEF_H

#include <iostream>
#include <string>
#include "Player.h"
using namespace std;

class Thief: public Player
{
public:
	Thief(string name, Species race, int hitPoints, int magicPoints);
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

#endif // !THIEF_H