#include <iostream>
#include <string>
#include "MagicUser.h"
using namespace std;

MagicUser::MagicUser(string name, Species race, int hitPoints, int magicPoints) : Player(name, race, hitPoints, magicPoints)
{

}

void MagicUser::setHitPoints(int hitPoints)
{
	this->hitPoints = hitPoints;
}

int MagicUser::getHitPoints() const
{
	return hitPoints;
}

void MagicUser::setMagicPoints(int magicPoints)
{
	this->magicPoints = magicPoints;
}

int MagicUser::getMagicPoints() const
{
	return magicPoints;
}

string MagicUser::attack() const
{
	return "I will destroy you will my arcane magic!";
}