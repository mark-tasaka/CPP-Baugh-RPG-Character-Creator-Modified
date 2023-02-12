#include <iostream>
#include <string>
#include "Race.h"
using namespace std;

string Race::getRace(int choice) const
{
	string race;
	if (choice == 1)
	{
		race = "Human";
	}
	else if (choice == 2)
	{
		race = "Dwarf";
	}
	else if (choice == 3)
	{
		race = "Elf";
	}
	else if (choice == 4)
	{
		race = "Halfling";
	}
	else
	{
		race = "Invalid";
	}

	return race;

}


string Race::getRaceAbilities(int choice) const
{
	string description;
	if (choice == 1)
	{
		description = "Human can choice any character classes, and advance to any level";
	}
	else if (choice == 2)
	{
		description = "Dwarf";
	}
	else if (choice == 3)
	{
		description = "Elf";
	}
	else if (choice == 4)
	{
		description = "Halfling";
	}
	else
	{
		description = "Invalid";
	}

	return description;

}