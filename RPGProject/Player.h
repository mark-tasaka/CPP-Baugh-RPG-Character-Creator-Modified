#ifndef PLAYER_H
#define PLAYER_H
#include <iostream>
#include <string>
using namespace std;
//Abstract class

//Enum for the Character Species
enum Species {HUMAN, ELF, DWARF, HALF_ELF, HALFLING, HALF_ORC};

class Player {
public:
	Player(string name, Species race, int hitPoints, int magicPoints);

	//getters
	string getName() const;
	Species getSpecies() const;
	string whatRace() const;
	int getHitPoints() const;
	int getMagicPoints() const;
	
	//setters
	void setName(string name);
	void setRace(Species race);
	void setHitPoints(int hitPoints);
	void setMagicPoints(int magicPoints);

	//Pure virtual function
	virtual string attack() const = 0;

private:
	string name;
	Species race;
	int hitPoints;
	int magicPoints;
};

#endif // !PLAYER_H

