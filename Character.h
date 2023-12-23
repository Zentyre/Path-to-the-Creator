#pragma once
#include <string>
#include "Enemy.h"
using namespace std;

class Character {
protected:
	int health;
	int attackPower;
	int baselevel;
	int level;
	int defence;
	int kills;
	int maxhealth;
public:
	bool trickstermovebool = false;
	bool warforgedmovebool = false;
	int timetracker = 0;
	int lives;
	int Goldloom = 0;
	int storetracker = 0;
	int healthtonicitem = 0;
	string name;
	Character();
	bool isAlive();
	bool killplayer = false;
	virtual void takeDmg(int d);
	int getclass();
	int setkillplayer();
	int getbaselevel();
	int getlives();
	int gethealth();
	int getdefence();
	int getattackPower();
	int getlevel();
	int incrementbaselevel();
	int incrementkills();
	int getkills();
	int getmaxhealth();
	int maxhealthtracker = 0;
	int classtype = 1;
	string getname();
	virtual void attack(Character* Target) = 0;
	void itemusehealthtonic();
	void itemuseinvispotion(Character* Target);
	bool usinginvispotion = false;
	int invisibilitypotion = 1;
	void itemusemolotov();
	int molotov = 0;
	void healovertime();
	void addlives(int extralives);
	void setmaxhealth(int charactermaxhealth);
};