#include<iostream>
#include<string>
#include<array>
#include <iomanip>
#include<ctime>
#include<cstdlib>
#include<algorithm>
#include "AbilityScores.h"
using namespace std;

array<int, 6> AbilityScores::generateAbilityScores(int dieRoll)
{
	array<int, 6> abilityScores = { 0, 0, 0, 0, 0, 0 };

	if (dieRoll == 1)
	{
		for (int i = 0; i < 6; i++)
		{
			int stat = 0;
			stat += rand() % 6 + 1;
			stat += rand() % 6 + 1;
			stat += rand() % 6 + 1;

			abilityScores[i] = stat;
		}
	}
	else if (dieRoll == 2)
	{
		array<int, 4> roll4d6;
		for (int i = 0; i < 6; i++)
		{
			int stat = 0;

			roll4d6[0] = rand() % 6 + 1;
			roll4d6[1] = rand() % 6 + 1;
			roll4d6[2] = rand() % 6 + 1;
			roll4d6[3] = rand() % 6 + 1;

			int temp;

			//sorting array in ascending order
			for (int j = 0; j < roll4d6.size(); j++)
			{
				for (int k = i + 1; k < roll4d6.size(); k++)
				{
					if (roll4d6[j] > roll4d6[k])
					{
						temp = roll4d6[j];
						roll4d6[j] = roll4d6[k];
						roll4d6[k] = temp;
					}
				}
			}

			stat += roll4d6[1];
			stat += roll4d6[2];
			stat += roll4d6[3];

			abilityScores[i] = stat;
		}
	}

	return abilityScores;
}


void AbilityScores::dieRollMethod(int dieRoll) const
{
	if (dieRoll == 1)
	{
		cout << "Ability Score Generation: Roll 3d6 (Old School)" << endl;
	}
	else
	{
		cout << "Ability Score Generation: Roll 4d6, drop the lowest" << endl;
	}

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