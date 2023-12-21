#pragma once
#include <string>
#include "Character.h"
using namespace std;

class Enemy : public Character {
public:
	Enemy(string n, int hp, int atk);
	void attack(Character* Target);
	void takeDmg(int dmg) override {
		health -= dmg;
	}
};