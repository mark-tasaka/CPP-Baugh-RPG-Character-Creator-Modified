#ifndef ABILITY_SCORES_H
#define ABILITY_SCORES_H
#include <iostream>
#include <string>
#include <iomanip>
#include<array>
#include<ctime>
#include<cstdlib>
using namespace std;
class AbilityScores {
public:
	array<int, 6> generateAbilityScores();
	int getStrength(array<int, 6> abilityScores);
	int getDexterity(array<int, 6> abilityScores);
	int getConstitution(array<int, 6> abilityScores);
	int getIntelligence(array<int, 6> abilityScores);
	int getWisdom(array<int, 6> abilityScores);
	int getCharisma(array<int, 6> abilityScores);
/*	int getStrength(int* abilityScores[6]);
	int getDexterity(string* abilityScores[6]);
	int getConstitution(string* abilityScores[6]);
	int getIntelligence(string* abilityScores[6]);
	int getWisdom(string* abilityScores[6]);
	int getCharisma(string* abilityScores[6]);*/

private:
	//string abilityScores[6];
	int strength;
	int dexterity;
	int constitution;
	int intelligence;
	int wisdom;
	int charisma;
};

#endif // !ABILITY_SCORES_H

