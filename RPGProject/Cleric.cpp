#include <iostream>
#include <string>
#include "Cleric.h"
using namespace std;

Cleric::Cleric(string name, Species race, int hitPoints, int magicPoints) : Player(name, race, hitPoints, magicPoints)
{

}

void Cleric::setHitPoints(int hitPoints)
{
	this->hitPoints = hitPoints;
}

int Cleric::getHitPoints() const
{
	return hitPoints;
}

void Cleric::setMagicPoints(int magicPoints)
{
	this->magicPoints = magicPoints;
}

int Cleric::getMagicPoints() const
{
	return magicPoints;
}

string Cleric::attack() const
{
	return "I will smite you with my Holy Wrath!";
}