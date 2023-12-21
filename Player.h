#pragma once
#include <string>
#include "Character.h"
using namespace std;

class Player : public Character {
public:
	Player(string n, int maxh, int hp, int atk, int def, int lvl, int live);
	void attack(Character* Target);
	void takeDmg(int dmg) override {
		health -= dmg - defence;
			if (health <= 0) {
			lives -= 1;
				if (lives > 0) {
				health = maxhealth - baselevel / 1.5;
				}
			}
	}
	void checkitems();
	void playerclassexecutioner();
	void playerclasssoulweaver();
	void playerclasswarforged();
	void playerclassdreadnought();
	void playerclasstrickster();
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
	bool trickstermove = false;
	bool soulweavermove = false;
	bool warforgedmove = false;
	bool knightmove = false;
	bool dreadnoughtmove = false;
	bool executionermove = false;
	bool maxhealthupgrade = false;
	bool defenceupgrade = false;
	bool levelupgrade = false;
	bool attackupgrade = false;
};