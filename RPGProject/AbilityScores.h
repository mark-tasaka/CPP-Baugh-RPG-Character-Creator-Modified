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
	array<int, 6> generateAbilityScores(int dieRoll);
	void dieRollMethod(int dieRoll) const;
	int getStrength(array<int, 6> abilityScores);
	int getDexterity(array<int, 6> abilityScores);
	int getConstitution(array<int, 6> abilityScores);
	int getIntelligence(array<int, 6> abilityScores);
	int getWisdom(array<int, 6> abilityScores);
	int getCharisma(array<int, 6> abilityScores);
	int getStrengthMod();
	/*
	int getDexterityMod(array<int, 6> abilityScores);
	int getConstitutionMod(array<int, 6> abilityScores);
	int getIntelligenceMod(array<int, 6> abilityScores);
	int getWisdomMod(array<int, 6> abilityScores);
	int getCharismaMod(array<int, 6> abilityScores);*/

private:
	int strength;
	int dexterity;
	int constitution;
	int intelligence;
	int wisdom;
	int charisma;
	int strengthMod;
	int dexterityMod;
	int constitutionMod;
	int intelligenceMod;
	int wisdomMod;
	int charismaMod;
	
};

#endif // !ABILITY_SCORES_H

