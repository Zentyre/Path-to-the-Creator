#pragma once
#include "Character.h"
#include <string>
#include <iostream>
#include <cmath>
using namespace std;

class Player : public Character {
public:
	Player(string n, int maxh, int hp, int atk, int def, int baselvl, int live);
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
				health = maxhealth - floor(baselevel * .8);
			}
		}
	}
	void checkitems();
	void forgerestarting();
	void playerclassexecutioner();
	void playerclasssoulweaver();
	void playerclasswarforged();
	void playerclassdreadnought();
	void playerclasstrickster();
	bool Knife = false;
	bool Sword = false;
	bool Excalibur = false;
	bool upgradedexcalibur = false;
	bool lightningexcalibur = false;
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
	bool upgradedgodarmor = false;
	bool lightningGodarmor = false;
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
	bool upgradedflaminglongsword = false;
	bool lightningflaminglongsword = false;
	bool maxhealthupgradeitem = false;
	bool healingpotionitem = false;
	bool lightningshard = false;
	int forgehammer = 0;
	bool glassshoes = false;
	bool upgradedglassshoes = false;
	bool lightningglassshoes = false;
	bool mystichelmet = false;
	bool upgradedmystichelmet = false;
	bool lightningmystichelmet = false;
	bool dragonscalechestplate = false;
	bool upgradedDragonscalechestplate = false;
	bool lightningdragonscalechestplate = false;
	bool travelersbackpack = false;
	bool playercompanion = false;
	int excaliburtracker = 0;
	int knifetracker = 0;
	int swordtracker = 0;
	int helmtracker = 0;
	int chesttracker = 0;
	int boottracker = 0;
	int shieldtracker = 0;
	int godtracker = 0;
	int defenceupgradetracker = 0;
	int flamingtracker = 0;
	int dragontracker = 0;
	int shoetracker = 0;
	int mystictracker = 0;
	int lightningdragontracker = 0;
	int upgradeddragontracker = 0;
	int lightningexcaliburtracker = 0;
	int upgradedexcaltracker = 0;
	int lightninglongswordtracker = 0;
	int upgradedlongswordtracker = 0;
	int lightninggodtracker = 0;
	int upgradedgodtracker = 0;
	int upgradedmystictracker = 0;
	int lightningmystictracker = 0;
	int upgradedglasstracker = 0;
	int lightningglasstracker = 0;
};