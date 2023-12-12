#include "Character.h"
#include <iostream>
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
void Character::setmaxhealth(int charactermaxhealth) {
	if (level < 25) {
		charactermaxhealth = 50;
	}
	else if (level >= 150) {
		charactermaxhealth = 300;
	}
	else if (level >= 100) {
		charactermaxhealth = 250;
	}
	else if (level >= 75) {
		charactermaxhealth = 200;
	}
	else if (level >= 50) {
		charactermaxhealth = 150;
	}
	else if (level >= 25) {
		charactermaxhealth = 100;
	}
	//adds more health based on maxhealthupgrade amount
	if (maxhealthtracker == 1) {
		charactermaxhealth += 50;
	}
	else if (maxhealthtracker == 2) {
		charactermaxhealth += 100;
	}
	else if (maxhealthtracker == 3) {
		charactermaxhealth += 150;
	}
	else if (maxhealthtracker == 4) {
		charactermaxhealth += 200;
	}
	else if (maxhealthtracker == 5) {
		charactermaxhealth += 250;
	}
	else {
		charactermaxhealth += 250;
	}
	maxhealth = charactermaxhealth;
}

void Character::addlives(int extralives) {
	lives += extralives;
}

void Character::takeDmg(int d) {
	health -= d - defence;
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