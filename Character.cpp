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
int Character::incrementbaselevel(int amount) {
	return baselevel + amount;
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
void Character::itemuseinvispotion(Character* Target) {
	Target->takeDmg(1000000);
	invisibilitypotion -= 1;
}
void Character::addlives(int extralives) {
	lives += extralives;
}
void Character::itemusemolotov(Character* Target) {
	int molotovdmg;
	molotovdmg = ceil(Target->gethealth() * .6);
	Target->takeDmg(molotovdmg);
	cout << "You dealt " << molotovdmg << " damage using the molotov." << endl;
	cout << "The enemy has " << Target->gethealth() << " health remaining." << endl;
	cout << "------------------------------------------------" << endl;
	molotov -= 1;
}
void Character::takeDmg(int dmg) {
	dmg = ceil(dmg - defence);
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