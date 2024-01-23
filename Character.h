#pragma once
#include <string>
using namespace std;

class Character {
protected:
	int baselevel;
	int kills;
public:
	Character();
	string factionchoice = "";
	string name = "";
	string enemyDefenceReduction = "";
	string getname();
	int level;
	int health;
	int attackPower;
	int defence;
	int maxhealth;
	int factionchoiceint = 0;
	bool trickstermovebool = false;
	bool warforgedmovebool = false;
	int lives;
	int Goldloom = 0;
	int storetracker = 0;
	int healthtonicitem = 0;
	bool isAlive();
	bool killplayer = false;
	bool usinginvispotion = false;
	bool endlessmode = false;
	bool storymode = false;
	int getclass();
	int setkillplayer();
	int getbaselevel();
	int getlives();
	int gethealth();
	int getdefence();
	int getattackPower();
	int getlevel();
	int incrementbaselevel(int amount);
	int incrementkills();
	int getkills();
	int getmaxhealth();
	int maxhealthtracker = 0;
	int classtype = 1;
	int invisibilitypotion = 0;
	int molotov = 0;
	int incrementamount = 0;
	void itemusehealthtonic();
	void itemuseinvispotion(Character* Target);
	void itemusemolotov(Character* Target);
	void addlives(int extralives);
	virtual void attack(Character* Target) = 0;
	virtual void takeDmg(int d);
};