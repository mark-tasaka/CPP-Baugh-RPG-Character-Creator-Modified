#include <iostream>
#include <string>
#include "Fighter.h"
using namespace std;

Fighter::Fighter(string name, Species race, int hitPoints, int magicPoints) : Player(name, race, hitPoints, magicPoints)
{

}

void Fighter::setHitPoints(int hitPoints)
{
	this->hitPoints = hitPoints;
}

int Fighter::getHitPoints() const
{
	return hitPoints;
}

void Fighter::setMagicPoints(int magicPoints)
{
	this->magicPoints = magicPoints;
}

int Fighter::getMagicPoints() const
{
	return magicPoints;
}

string Fighter::attack() const
{
	return "I will slay you with my sword!";
}