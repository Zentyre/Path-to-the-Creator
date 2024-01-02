#pragma once
#include <string>
#include "Character.h"
#include <iostream>
using namespace std;

class Player : public Character {
public:
	Player(string n, int maxh, int hp, int atk, int def, int lvl, int live);
	void attack(Character* Target) override;
	void takeDmg(int dmg) override {
		if (defence > dmg) {
			cout << "Your defence absorbed all " << dmg << " enemy damage!" << endl;
		}
		else if (defence > 0 && defence < dmg) {
			cout << "Your defence absorbed " << getdefence() << " damage!" << endl;
		}
		dmg -= defence;
		if (dmg < 0) {
			dmg = 0;
		}
		health -= dmg;
		if (health <= 0) {
		lives -= 1;
			if (lives > 0) {
			health = maxhealth - baselevel * .8;
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
	bool narsosArmor = false;
	bool lockhartsArmor = false;
	bool vladimirsArmor = false;
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
	bool armorupgrade = false;
	bool weaponupgrade = false;
	bool flaminglongsword = false;
	bool maxhealthupgradeitem = false;
	bool healingpotionitem = false;
	bool lightningshard = false;
	int forgehammer = 0;
	bool glassshoes = false;
	bool mystichelmet = false;
	bool dragonscalechestplate = false;
	bool travelersbackpack = false;
	bool playercompanion = false;
};