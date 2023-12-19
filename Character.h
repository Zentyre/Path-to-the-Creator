#pragma once
#include <string>
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
	int lives;
	string name;
	Character();
	bool isAlive();
	bool killplayer = false;
	virtual void takeDmg(int d);
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
	void addlives(int extralives);
	void setmaxhealth(int charactermaxhealth);
};