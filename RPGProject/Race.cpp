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


void Race::raceDescription() const
{
	cout << "Now that your ability scores are generated, choose a race for your characters.  There are four races to choose from:" << endl;
	cout << "\tHuman" << endl;
	cout << "\tDwarf" << endl;
	cout << "\tElf" << endl;
	cout << "\tHalfling" << endl << endl;
	
	cout << "Humans can advance in any class, to the maximum level.  Dwarves can choose the Fighter and Thief classes, and can achieve a maxiumum level of 6 in each of these classes.  Elves can choose between the Fighter and Magic-User classes, and can reach a maximum 4th level as Fighters and 8th level as Magic-Users.  Halfings can choose between the Fighter and Thief classes, and can achieve a maximum level of 4th as Fighters and 6th as Thieves." << endl << endl;

	cout << "Please choose the Race for your character (please enter the corrisponding integer:" << endl;
	cout << "\t1. Human" << endl;
	cout << "\t2. Dwarf" << endl;
	cout << "\t3. Elf" << endl;
	cout << "\t4. Halfling" << endl << endl;

}

void Race::getRaceAbilities(int choice) const
{

	if (choice == 1)
	{
		cout << "Human can choice any character classes, and advance to any level" << endl;
	}
	else if (choice == 2)
	{
		cout << "Human can choice any character classes, and advance to any level" << endl;
	}
	else if (choice == 3)
	{
		cout << "Human can choice any character classes, and advance to any level" << endl;
	}
	else if (choice == 4)
	{
		cout << "Human can choice any character classes, and advance to any level" << endl;
	}
	else
	{
		cout << "Human can choice any character classes, and advance to any level" << endl;
	}


}