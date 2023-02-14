#include <iostream>
#include <string>
#include <vector>
#include<fstream>
#include <iomanip>
#include<ctime>
#include<cstdlib>
#include <memory>
#include "Player.h"
#include "Cleric.h"
#include "Fighter.h"
#include "MagicUser.h"
#include "Thief.h"
#include "AbilityScores.h"
#include "Race.h"

using namespace std;
/*RPG Character Generator based on a project I worked on for
John P Baugh, Ph.D. 'The Complete C++ Developer Course (Udemy)
Feb 2, 2023
Mark Tasaka
*/

//void generateAbilityScores();

//void printMainMenu();
//void printRaceMenu();
//
//Player* createPlayer(string playerName, int typeNum, int raceNum);
//void doCleanUp(vector<Player*> playerList);
//Species getRace(int raceNum);
//
//void printAll(vector<Player*> playerList);

int main()
{
	srand(time(0));

	int nameChoice;
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
	int reRoll = 0;
	int raceChoice = 0;


	vector<Player*> playerList;

	cout << "Welcome to the RPG character generator.  The first step is to come up with a name for your character." << endl;

	cout << "Please enter a name for your character." << endl;

	getline(cin, playerName);

	cout << endl;

	cout << "Your character's name is " << playerName << ". Are you statisfied with your character's names?  Press 1 if you would like to re-enter your character's name, or another integer if you want to keep the name." << endl;

	cin >> nameChoice;
	cin.get(); //consume newline

	while (!cin.good())
	{
		cin.clear();
		cin.ignore();

		cout << "Please enter an integer value" << endl;
	}

	while (nameChoice == 1)
	{
		cout << "Please enter a name for your character." << endl;

		getline(cin, playerName);

		cout << "Your character's name is " << playerName << ".  Press 1 if you would like to re-enter your character's name, or another integer if you want to keep the name." << endl;

		cin >> nameChoice;
		cin.get(); //consume newline

		while (!cin.good())
		{
			cin.clear();
			cin.ignore();

			cout << "Please enter an integer value" << endl;
		}
	}

	cout << endl;

	cout << "Now that you have selected your character's name (" << playerName << "), the next step is the generate ability scores for your character." << endl;

	cout << "Please select which ability score generation method you would like to use." << endl << endl;

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

	//AbilityScores stats = AbilityScores();
	//Smart Pointer
	unique_ptr<AbilityScores> stats = make_unique<AbilityScores>();
	array<int, 6> abilityScores = stats->generateAbilityScores(dieRoll);
	strength = stats->getStrength(abilityScores);
	dexterity = stats->getDexterity(abilityScores);
	constitution = stats->getConstitution(abilityScores);
	intelligence = stats->getIntelligence(abilityScores);
	wisdom = stats->getWisdom(abilityScores);
	charisma = stats->getCharisma(abilityScores);

	strengthMod = stats->getStrengthMod(abilityScores);
	dexterityMod = stats->getDexterityMod(abilityScores);
	constitutionMod = stats->getConstitutionMod(abilityScores);
	intelligenceMod = stats->getIntelligenceMod(abilityScores);
	wisdomMod = stats->getWisdomMod(abilityScores);
	charismaMod = stats->getCharismaMod(abilityScores);


	cout << "Your character's ability scores are: " << endl << endl;
	cout << "Strength: " << strength << " " << stats->getModifierSign(strengthMod) << strengthMod << endl;
	cout << "Dexterity: " << dexterity << " " << stats->getModifierSign(dexterityMod) << dexterityMod << endl;
	cout << "Constitution: " << constitution << " " << stats->getModifierSign(constitutionMod) << constitutionMod << endl;
	cout << "Intelligence: " << intelligence << " " << stats->getModifierSign(intelligenceMod) << intelligenceMod << endl;
	cout << "Wisdom: " << wisdom << " " << stats->getModifierSign(wisdomMod) << wisdomMod << endl;
	cout << "Charisma: " << charisma << " " << stats->getModifierSign(charismaMod) << charismaMod << endl;
	stats->dieRollMethod(dieRoll);

	cout << endl;

	cout << "Would you like to keep these ability scores?  Enter 1 to re-roll ability scores.  Otherwise any another integer to keep these ability scores." << endl;

	cin >> reRoll;
	cin.get(); //consume newline

	while (!cin.good())
	{
		cin.clear();
		cin.ignore();

		cout << "Please enter an integer value" << endl;
	}

	while (reRoll == 1)
	{
		array<int, 6> abilityScores = stats->generateAbilityScores(dieRoll);
		strength = stats->getStrength(abilityScores);
		dexterity = stats->getDexterity(abilityScores);
		constitution = stats->getConstitution(abilityScores);
		intelligence = stats->getIntelligence(abilityScores);
		wisdom = stats->getWisdom(abilityScores);
		charisma = stats->getCharisma(abilityScores);

		strengthMod = stats->getStrengthMod(abilityScores);
		dexterityMod = stats->getDexterityMod(abilityScores);
		constitutionMod = stats->getConstitutionMod(abilityScores);
		intelligenceMod = stats->getIntelligenceMod(abilityScores);
		wisdomMod = stats->getWisdomMod(abilityScores);
		charismaMod = stats->getCharismaMod(abilityScores);


		cout << playerName << "'s ability scores are: " << endl << endl;
		cout << "Strength: " << strength << " " << stats->getModifierSign(strengthMod) << strengthMod << endl;
		cout << "Dexterity: " << dexterity << " " << stats->getModifierSign(dexterityMod) << dexterityMod << endl;
		cout << "Constitution: " << constitution << " " << stats->getModifierSign(constitutionMod) << constitutionMod << endl;
		cout << "Intelligence: " << intelligence << " " << stats->getModifierSign(intelligenceMod) << intelligenceMod << endl;
		cout << "Wisdom: " << wisdom << " " << stats->getModifierSign(wisdomMod) << wisdomMod << endl;
		cout << "Charisma: " << charisma << " " << stats->getModifierSign(charismaMod) << charismaMod << endl;
		stats->dieRollMethod(dieRoll);


		cout << "Enter 1 to re-roll ability scores, or enter another integer to keep these ability scores." << endl;

		cin >> reRoll;
		cin.get(); //consume newline

		while (!cin.good())
		{
			cin.clear();
			cin.ignore();

			cout << "Please enter an integer value" << endl;
		}

		cout << endl;
	}

	cout << endl;

	cout << playerName << "'s ability scores are: " << endl << endl;
	cout << "\tStr: " << strength << " " << stats->getModifierSign(strengthMod) << strengthMod << endl;
	cout << "\tDex: " << dexterity << " " << stats->getModifierSign(dexterityMod) << dexterityMod << endl;
	cout << "\tCon: " << constitution << " " << stats->getModifierSign(constitutionMod) << constitutionMod << endl;
	cout << "\tInt: " << intelligence << " " << stats->getModifierSign(intelligenceMod) << intelligenceMod << endl;
	cout << "\tWis: " << wisdom << " " << stats->getModifierSign(wisdomMod) << wisdomMod << endl;
	cout << "\tChar: " << charisma << " " << stats->getModifierSign(charismaMod) << charismaMod << endl;

	Race characterRace = Race();

	characterRace.raceDescription();



	/*
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
	*/

	return 0;
}

//
//void printMainMenu()
//{
//	cout << endl;
//	cout << "Which of the following would you like?" << endl;
//	cout << "\t1 - Create a Fighter" << endl;
//	cout << "\t2 - Create a Cleric" << endl;
//	cout << "\t3 - Create a Magic-User" << endl;
//	cout << "\t4 - Create a Thief" << endl;
//	cout << "\t0 - Finish creating player characters" << endl;
//}
//
//void printRaceMenu()
//{
//	cout << "Now, which race do you want?" << endl;
//	cout << "\t1 - Human" << endl;
//	cout << "\t2 - Elf" << endl;
//	cout << "\t3 - Dwarf" << endl;
//	cout << "\t4 - Half-Elf" << endl;
//	cout << "\t5 - Halfling" << endl;
//	cout << "\t6 - Half-Orc" << endl;
//}
//
//Player* createPlayer(string playerName, int typeNum, int raceNum)
//{
//	Species playerRace = getRace(raceNum);
//
//	Player* tempPlayer = nullptr;
//
//	if (typeNum == 1)
//	{
//		tempPlayer = new Fighter(playerName, playerRace);
//	}
//	else if (typeNum == 2)
//	{
//		tempPlayer = new Cleric(playerName, playerRace);
//	}
//	else if (typeNum == 3)
//	{
//		tempPlayer = new MagicUser(playerName, playerRace);
//	}
//	else if (typeNum == 4)
//	{
//		tempPlayer = new Thief(playerName, playerRace);
//	}
//
//	return tempPlayer;
//}
//
//void doCleanUp(vector<Player*> playerList)
//{
//	for (Player* player : playerList)
//	{
//		delete player;
//	}
//	playerList.clear();
//}
//
//Species getRace(int raceNum)
//{
//	Species race;
//
//	if (raceNum == 1)
//	{
//		race = HUMAN;
//	}
//	else if (raceNum == 2)
//	{
//		race = ELF;
//	}
//	else if (raceNum == 3)
//	{
//		race = DWARF;
//	}
//	else if (raceNum == 4)
//	{
//		race = HALF_ELF;
//	}
//	else if (raceNum == 5)
//	{
//		race = HALFLING;
//	}
//	else if (raceNum == 6)
//	{
//		race = HALF_ORC;
//	}
//
//	return race;
//}
//
//void printAll(vector<Player*> playerList)
//{
//	for (Player* player : playerList)
//	{
//		cout << player->getName() << ": I am a " << player->whatRace() << " and my attack is: " << player->attack() << endl;
//
//		//cout << "I am a " << player->whatRace() << " and my attack is: " << player->attack() << endl;
//	}
//}
