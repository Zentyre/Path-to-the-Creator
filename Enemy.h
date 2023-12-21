#pragma once
#include <string>
#include "Character.h"
using namespace std;

class Enemy : public Character {
public:
	Enemy(string n2, int hp2, int atk2, int live2, int maxh2);
	void attack(Character* Target) override;
	void takeDmg(int dmg) override {
		health -= dmg;
		if (health <= 0) {
			lives -= 1;
			if (lives >= 1) {
				health = maxhealth;
			}
		}
	}
};