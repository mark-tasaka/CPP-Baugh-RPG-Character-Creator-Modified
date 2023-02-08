#include <iostream>
#include <string>
#include <vector>
#include<fstream>
#include <iomanip>
#include<ctime>
#include<cstdlib>
#include "Player.h"
#include "Cleric.h"
#include "Fighter.h"
#include "MagicUser.h"
#include "Thief.h"
#include "AbilityScores.h"

using namespace std;
/*RPG Character Generator based on a project I worked on for
John P Baugh, Ph.D. 'The Complete C++ Developer Course (Udemy)
Feb 2, 2023
Mark Tasaka
*/

//void generateAbilityScores();

void printMainMenu();
void printRaceMenu();

Player* createPlayer(string playerName, int typeNum, int raceNum);
void doCleanUp(vector<Player*> playerList);
Species getRace(int raceNum);

void printAll(vector<Player*> playerList);

int main()
{
	srand(time(0));

	int choice;
	int raceNum;
	string playerName;

	int strength = 0;
	int strengthMod = 0;
	int dexterity = 0;
	int dexterityMod = 0;
	int constitution = 0;
	int constitutionMod = 0;
	int intelligence = 0;
	int intelligenceMod = 0;
	int wisdom = 0;
	int wisdomMod = 0;
	int charisma = 0;
	int charismaMod = 0;

	int dieRoll = 0;


	vector<Player*> playerList;

	cout << "Welcome to the RPG character generator.  The first step is to generate ability scores.  Please select which ability score generation method you would like to use." << endl << endl;

	cout << "\t1 - Roll 3d6 (Old School method)" << endl;
	cout << "\t2 - Roll 4d6, and drop the lowest die" << endl;

	cin >> dieRoll;
	cin.get(); //consume newline

	while (!cin.good())
	{
		cin.clear();
		cin.ignore();

		cout << "Please enter an integer value" << endl;
	}

	while (dieRoll != 1 && dieRoll != 2)
	{
		cout << "Invalid number entered.  Please re-enter ability score generation method." << endl << endl;

		cout << "\t1 - Roll 3d6 (Old School method)" << endl;
		cout << "\t2 - Roll 4d6, and drop the lowest die" << endl;

		cin >> dieRoll;
		cin.get(); //consume newline
	}

	AbilityScores stats = AbilityScores();
	array<int, 6> abilityScores = stats.generateAbilityScores(dieRoll);
	cout << "Your character's ability scores are: " << endl << endl;
	cout << "Strength: " << stats.getStrength(abilityScores) << endl;
	cout << "Dexterity: " << stats.getDexterity(abilityScores) << endl;
	cout << "Constitution: " << stats.getConstitution(abilityScores) << endl;
	cout << "Intelligence: " << stats.getIntelligence(abilityScores) << endl;
	cout << "Wisdom: " << stats.getWisdom(abilityScores) << endl;
	cout << "Charisma: " << stats.getCharisma(abilityScores) << endl << endl;
	stats.dieRollMethod(dieRoll);

	//generateAbilityScores();

	printMainMenu();

	cin >> choice;
	cin.get(); //consume newline

	while (choice != 0)
	{
		cout << "What would you like to name your character?" << endl;
		getline(cin, playerName);

		printRaceMenu();
		cin >> raceNum;
		cin.get();

		Player* tempPlayer = createPlayer(playerName, choice, raceNum);
		playerList.push_back(tempPlayer);

		//next round?
		printMainMenu();
		cin >> choice;
		cin.get();//consume new line
	}

	printAll(playerList);

	doCleanUp(playerList);

	cout << "Program done" << endl;

	return 0;
}

/*
void generateAbilityScores()
{
	AbilityScores stats = AbilityScores();
	array<int, 6> abilityScores = stats.generateAbilityScores();
	cout << "Your character's ability scores are: " << endl << endl;
	cout << "Strength: " << stats.getStrength(abilityScores) << endl;
	cout << "Dexterity: " << stats.getDexterity(abilityScores) << endl;
	cout << "Constitution: " << stats.getConstitution(abilityScores) << endl;
	cout << "Intelligence: " << stats.getIntelligence(abilityScores) << endl;
	cout << "Wisdom: " << stats.getWisdom(abilityScores) << endl;
	cout << "Charisma: " << stats.getCharisma(abilityScores) << endl;
}*/

void printMainMenu()
{
	cout << endl;
	cout << "Which of the following would you like?" << endl;
	cout << "\t1 - Create a Fighter" << endl;
	cout << "\t2 - Create a Cleric" << endl;
	cout << "\t3 - Create a Magic-User" << endl;
	cout << "\t4 - Create a Thief" << endl;
	cout << "\t0 - Finish creating player characters" << endl;
}

void printRaceMenu()
{
	cout << "Now, which race do you want?" << endl;
	cout << "\t1 - Human" << endl;
	cout << "\t2 - Elf" << endl;
	cout << "\t3 - Dwarf" << endl;
	cout << "\t4 - Half-Elf" << endl;
	cout << "\t5 - Halfling" << endl;
	cout << "\t6 - Half-Orc" << endl;
}

Player* createPlayer(string playerName, int typeNum, int raceNum)
{
	Species playerRace = getRace(raceNum);

	Player* tempPlayer = nullptr;

	if (typeNum == 1)
	{
		tempPlayer = new Fighter(playerName, playerRace);
	}
	else if (typeNum == 2)
	{
		tempPlayer = new Cleric(playerName, playerRace);
	}
	else if (typeNum == 3)
	{
		tempPlayer = new MagicUser(playerName, playerRace);
	}
	else if (typeNum == 4)
	{
		tempPlayer = new Thief(playerName, playerRace);
	}

	return tempPlayer;
}

void doCleanUp(vector<Player*> playerList)
{
	for (Player* player : playerList)
	{
		delete player;
	}
	playerList.clear();
}

Species getRace(int raceNum)
{
	Species race;

	if (raceNum == 1)
	{
		race = HUMAN;
	}
	else if (raceNum == 2)
	{
		race = ELF;
	}
	else if (raceNum == 3)
	{
		race = DWARF;
	}
	else if (raceNum == 4)
	{
		race = HALF_ELF;
	}
	else if (raceNum == 5)
	{
		race = HALFLING;
	}
	else if (raceNum == 6)
	{
		race = HALF_ORC;
	}

	return race;
}

void printAll(vector<Player*> playerList)
{
	for (Player* player : playerList)
	{
		cout << player->getName() << ": I am a " << player->whatRace() << " and my attack is: " << player->attack() << endl;

		//cout << "I am a " << player->whatRace() << " and my attack is: " << player->attack() << endl;
	}
}
