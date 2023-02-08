#include<iostream>
#include<string>
#include<array>
#include <iomanip>
#include<ctime>
#include<cstdlib>
#include "AbilityScores.h"
using namespace std;

array<int, 6> AbilityScores::generateAbilityScores()
{
	array<int, 6> abilityScores;
	for (int i = 0; i < 6; i++)
	{
		int stat = 0;
		stat += rand() % 6 + 1;
		stat += rand() % 6 + 1;
		stat += rand() % 6 + 1;

		abilityScores[i] = stat;
	}

	return abilityScores;
}

int AbilityScores::getStrength(array<int, 6> abilityScores)
{
	strength = get<0>(abilityScores);
	return strength;
}

int AbilityScores::getDexterity(array<int, 6> abilityScores)
{
	dexterity = get<1>(abilityScores);
	return dexterity;
}

int AbilityScores::getConstitution(array<int, 6> abilityScores)
{
	constitution = get<2>(abilityScores);
	return constitution;
}

int AbilityScores::getIntelligence(array<int, 6> abilityScores)
{
	intelligence = get<3>(abilityScores);
	return intelligence;
}

int AbilityScores::getWisdom(array<int, 6> abilityScores)
{
	wisdom = get<4>(abilityScores);
	return wisdom;
}

int AbilityScores::getCharisma(array<int, 6> abilityScores)
{
	charisma = get<5>(abilityScores);
	return charisma;
}