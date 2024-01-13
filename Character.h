#pragma once
#include <string>
using namespace std;

class Character {
protected:
	int baselevel;
	int level;
	int kills;
	int timetracker = 0;
public:
	int health;
	int attackPower;
	int defence;
	int maxhealth;
	string factionchoice = "";
	int factionchoiceint = 0;
	bool trickstermovebool = false;
	bool warforgedmovebool = false;
	int lives;
	int Goldloom = 0;
	int storetracker = 0;
	int healthtonicitem = 0;
	string name = "";
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
	bool usinginvispotion = false;
	void itemuseinvispotion(Character* Target);
	void itemusemolotov(Character* Target);
	int invisibilitypotion = 0;
	int molotov = 0;
	void addlives(int extralives);
};