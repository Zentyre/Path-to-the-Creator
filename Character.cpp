#include "Character.h"
#include <iostream>
#include "Player.h"
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
void Character::itemuseinvispotion() {
	usinginvispotion = true;
	invisibilitypotion -= 1;
}
void Character::healovertime() {
	if (timetracker == 2) {
		timetracker = 0;
		cout << "Your skill has ended." << endl << endl;
	}
	else {
		int heal;
		heal = 5 + (level > 30) ? (level % 30) : (level % 31);
		cout << "Your skill has healed you for " << heal << " health." << endl;
	}
}
void Character::setmaxhealth(int charactermaxhealth) {
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
		charactermaxhealth = charactermaxhealth + (50 * maxhealthtracker);
	}
	maxhealth = charactermaxhealth;
}

void Character::addlives(int extralives) {
	lives += extralives;
}

void Character::takeDmg(int dmg) {
	health -= dmg - defence;
	if (health <= 0) {
		lives -= 1;
		if (lives > 0) {
			health = maxhealth - (level * 1);
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