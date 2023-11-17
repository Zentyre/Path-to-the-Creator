#include "Character.h"
#include <iostream>
using namespace std;


Character::Character() {
	name = name;
	health = 25;
	attackPower = 1;
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
	return level;
}
int Character::incrementlevel() {
	return level++;
}
int Character::getkills() {
	return kills++;
}
/*
int Character::getlives() {
	return lives;
}
*/
string Character::getname() {
	return name;
}
void Character::takeDmg(int d) {
	health -= d;
}
/*
if (health <= 0) {
	lives -= 1;
}
*/
bool Character::isAlive() {
	if (lives <= 0) { //try to add live system
		return false;
	}
	else {
		return true;
	}
}