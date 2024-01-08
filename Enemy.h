#pragma once
#include <string>
#include "Character.h"
using namespace std;

class Enemy : public Character {
public:
	Enemy(string n2, int hp2, int atk2, int def2, int live2, int lvl2, int maxh2);
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
			if (lives >= 1) {
				health = maxhealth - level;
			}
		}
	}
};