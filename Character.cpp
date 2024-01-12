#include "Character.h"
#include "Player.h"
#include "Enemy.h"
#include <iostream>
#include <cmath>
using namespace std;

Character::Character() {
	name = name;
	health = 25;
	attackPower = 1;
	lives = 1;
	maxhealth = 50;
	kills = 0;
	level = 0;
	defence = 0;
	baselevel = 0;
}
int Character::getclass() {
	return classtype;
}
int Character::getbaselevel() {
	return baselevel;
}
int Character::getattackPower() {
	return attackPower;
}
int Character::getdefence() {
	return defence;
}
int Character::gethealth() {
	return health;
}
int Character::getlevel() {
	return level + baselevel;
}
int Character::getkills() {
	return kills;
}
int Character::getlives() {
	return lives;
}
int Character::getmaxhealth() {
	return maxhealth;
}
string Character::getname() {
	return name;
}
int Character::incrementbaselevel() {
	return baselevel++;
}
int Character::incrementkills() {
	return kills++;
}
int Character::setkillplayer() {
	return killplayer = true;
}
void Character::itemusehealthtonic() {
	if (level >= 150) {
		health += 100;
	}
	else if (level >= 100) {
		health += 75;
	}
	else if (level >= 50) {
		health += 50;
	}
	else {
		health += 25;
	}
	if (health > maxhealth) {
		health = maxhealth;
	}
	healthtonicitem -= 1;
	cout << "You now have " << health << " health." << endl;
}
void Character::itemuseinvispotion(Enemy* Target) {
	Target->takeDmg(1000000);
	invisibilitypotion -= 1;
}
void Character::itemusemolotov(Enemy* Target) {
	int molotovdmg;
	molotovdmg = ceil(Target->gethealth() * .6);
	Target->takeDmg(molotovdmg);
	cout << "You dealt " << molotovdmg << " damage using the molotov." << endl;
	cout << "The enemy has " << Target->gethealth() << " health remaining." << endl;
	cout << "------------------------------------------------" << endl;
	molotov -= 1;
}
void Character::setmaxhealth(Player* Target) {
	int charactermaxhealth = 0;
	if (level >= 500) {
		charactermaxhealth = 500;
	}
	else if (level >= 450) {
		charactermaxhealth = 450;
	}
	else if (level >= 400) {
		charactermaxhealth = 400;
	}
	else if (level >= 350) {
		charactermaxhealth = 350;
	}
	else if (level >= 300) {
		charactermaxhealth = 300;
	}
	else if (level >= 250) {
		charactermaxhealth = 250;
	}
	else if (level >= 200) {
		charactermaxhealth = 200;
	}
	else if (level >= 150) {
		charactermaxhealth = 150;
	}
	else if (level >= 100) {
		charactermaxhealth = 100;
	}
	else if (level >= 75) {
		charactermaxhealth = 75;
	}
	else if (level >= 50) {
		charactermaxhealth = 50;
	}
	else {
		charactermaxhealth = 30;
	}
	//adds more health based on maxhealthupgrade amount
	if (maxhealthtracker >= 1) {
		charactermaxhealth += ceil(50 * maxhealthtracker);
	}
	//adds more health based on items
	if (Target->upgradedexcalibur == true) {
		charactermaxhealth += Target->trackexcaliburmaxhealth;
	}
	if (Target->upgradedflaminglongsword == true) {
		charactermaxhealth += Target->trackflamingmaxhealth;
	}
	if (Target->upgradedvoidshroudslicer == true) {
		charactermaxhealth += Target->trackvoidshroudmaxhealth;
	}
	if (Target->upgradedDragonscalechestplate == true) {
		charactermaxhealth += 25;
	}
	if (Target->lightningdragonscalechestplate == true) {
		charactermaxhealth += 14;
	}
	if (Target->upgradedgodarmor == true) {
		charactermaxhealth += 40;
	}
	if (Target->upgradedmystichelmet == true) {
		charactermaxhealth += 20;
	}
	if (Target->upgradedglassshoes == true) {
		charactermaxhealth += 14;
	}
	if (Target->mystichelmet == true) {
		charactermaxhealth += 8;
	}
	if (Target->helmet == true) {
		charactermaxhealth += 5;
	}
	if (Target->boots == true) {
		charactermaxhealth += 4;
	}
	if (Target->chestplate == true) {
		charactermaxhealth += 8;
	}
	if (Target->narsosArmor == true) {
		charactermaxhealth += 12;
	}
	if (Target->lockhartsArmor == true) {
		charactermaxhealth += 12;
	}
	if (Target->vladimirsArmor == true) {
		charactermaxhealth += 12;
	}
	//maxhealth upgrade based on faction
	if (factionchoiceint == 3) {
		charactermaxhealth += ceil(.01 * (kills - 50));
	}
	if (factionchoiceint == 4) {
		charactermaxhealth += ceil(.01 * (kills - 50));
	}
	maxhealth = charactermaxhealth;
}
void Character::addlives(int extralives) {
	lives += extralives;
}
void Character::takeDmg(int dmg) {
	dmg = dmg - defence;
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
bool Character::isAlive() {
	if (lives <= 0 || killplayer == true) {
		return false;
	}
	else {
		return true;
	}
}