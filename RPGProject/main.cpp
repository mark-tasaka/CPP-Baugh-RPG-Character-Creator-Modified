#include <iostream>
#include <string>
#include "Player.h"
#include "Cleric.h"
#include "Fighter.h"
#include "MagicUser.h"
#include "Thief.h"

using namespace std;
/*RPG Character Generator based on a project I worked on for
John P Baugh, Ph.D. 'The Complete C++ Developer Course (Udemy)
Feb 2, 2023
Mark Tasaka
*/


int main()
{
	Thief* playerPtr = new Thief("Bob", HUMAN, 20, 10);

	cout << "The Character's name is " << playerPtr->getName() << endl;
	cout << "The Character race is " << playerPtr->whatRace() << endl;
	cout << "Hit Points: " << playerPtr->getHitPoints() << " Magic Points: " << playerPtr->getMagicPoints() << endl;
	cout << "Get Attack Message: " << playerPtr->attack() << endl;

	return 0;
}