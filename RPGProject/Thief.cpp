#include <iostream>
#include <string>
#include "Thief.h"
using namespace std;

Thief::Thief(string name, Species race, int hitPoints, int magicPoints): Player(name, race, hitPoints, magicPoints)
{

}

void Thief::setHitPoints(int hitPoints)
{
	this->hitPoints = hitPoints;
}

int Thief::getHitPoints() const
{
	return hitPoints;
}

void Thief::setMagicPoints(int magicPoints)
{
	this->magicPoints = magicPoints;
}

int Thief::getMagicPoints() const
{
	return magicPoints;
}

string Thief::attack() const
{
	return "I will backstab you with my dagger!";
}