#ifndef RACE_H
#define RACE_H
#include <iostream>
#include <string>
using namespace std;

class Race {
public:
	string getRace(int choice) const;
	void raceDescription() const;
	void getRaceAbilities(int choice) const;

private:
	string race;

};


#endif // !RACE_H
