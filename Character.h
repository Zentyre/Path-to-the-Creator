#pragma once
#include <string>
using namespace std;

class Character {

protected:
	string name;
	int health;
	int attackPower;
	int level;
	int defence;
	int kills;
	int lives;
public:
	Character();
	bool isAlive();
	bool extralife;
	virtual void takeDmg(int d);
	int getlives();
	int gethealth();
	int getdefence();
	int getattackPower();
	int getlevel();
	int incrementlevel();
	int getkills();
	string getname();
	virtual void attack(Character* Target) = 0;
	void addlives(int extralives);
};