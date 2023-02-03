#include <iostream>
#include <string>
#include "Player.h"
using namespace std;

Player::Player(string name, Species race, int hitPoints, int magicPoints)
{
	this->name = name;
	this->race = race;
	this->hitPoints = hitPoints;
	this->magicPoints = magicPoints;
}

string Player::getName() const
{
	return name;
}

Species Player::getSpecies() const
{
	return race;
}

string Player::whatRace() const
{
	return "species description";
}

int Player::getHitPoints() const
{
	return hitPoints;
}

int Player::getMagicPoints() const
{
	return magicPoints;
}

void Player::setName(string name)
{
	this->name = name;
}

void Player::setRace(Species race)
{
	this->race = race;
}

void Player::setHitPoints(int hitPoints)
{
	this->magicPoints = magicPoints;
}

void Player::setMagicPoints(int magicPoints)
{

}