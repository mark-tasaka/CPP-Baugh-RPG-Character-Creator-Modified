#ifndef MAGIC_USER_H
#define MAGIC_USER_H

#include <iostream>
#include <string>
#include "Player.h"
using namespace std;

class MagicUser : public Player
{
public:
	MagicUser(string name, Species race, int hitPoints, int magicPoints);
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


#endif // !MAGIC_USER_H