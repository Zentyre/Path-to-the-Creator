#pragma once
#include <string>
#include "Character.h"
using namespace std;

class Player : public Character {
public:
	Player(string n2, int hp2, int atk2, int df2, int lvl2, int live2);
	void attack(Character* Target);
	bool Knife = false;
	bool Sword = false;
	bool Excalibur = false;
	bool leveltonic = false;
	bool superiorleveltonic = false;
	bool superpotion = false;
	bool healthtonic = false;
	bool chestplate = false;
	bool helmet = false;
	bool boots = false;
	bool godarmor = false;
	bool accuratesword = false;
	bool shield = false;
	bool supermove = false;
	bool maxhealthupgrade = false;
	bool defenceupgrade = false;
	bool levelupgrade = false;
	bool attackupgrade = false;
};