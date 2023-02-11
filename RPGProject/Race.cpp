#include <iostream>
#include <string>
#include "Race.h"
using namespace std;

Race::Race(int choice)
{
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
}