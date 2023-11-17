#pragma once
#include <string>
#include "Character.h"
using namespace std;

class Player : public Character {
public:
	Player(string n2, int hp2, int atk2);
	void attack(Character* Target);
	bool Knife;
	bool Sword;
	bool Excalibur;
	bool leveltonic;
	bool superiorleveltonic;
	bool superpotion;
	bool healthtonic;
	bool chestplate;
	bool helmet;
	bool boots;
	bool godarmor;
	bool accuratesword;
	bool shield;
	bool supermove;
	bool healthupgrade;
	bool defenceupgrade;
	bool levelupgrade;
	bool attackupgrade;
	bool extralife;
	void takeDmg(int d) override;
};