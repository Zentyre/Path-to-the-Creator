#pragma once
#include "Character.h"
class Enemy : public Character {
public:
	Enemy(string n2, int hp2, int atk2, int def2, int live2, int lvl2, int maxh2);
	void attack(Character* Target) override;
	void takeDmg(int dmg) override {
		if (defense > dmg) {
			enemydefenseReduction = "The enemies defense absorbed all " + to_string(dmg) + " enemy damage!";
		}
		else if (defense > 0 && defense < dmg) {
			enemydefenseReduction = "The enemies defense absorbed " + to_string(defense) + " damage!";
		}
		dmg -= defense;
		if (dmg < 0) {
			dmg = 0;
		}
		health -= dmg;
		if (health <= 0) {
			lives -= 1;
			if (lives >= 1) {
				health = maxhealth - floor(level * .8);
			}
		}
	}
	void updateStats(string newName, int newHealth, int newAttack, int newDefense, int newLives, int newLevel, int newMaxhealth) {
        name = newName;
		health = newHealth;
        attackPower = newAttack;
        defense = newDefense;
		lives = newLives;
		level = newLevel;
		maxhealth = newMaxhealth;
    }
	string oldName = "";
	int oldHealth = 0, oldAttack = 0, oldDefense = 0, oldLives = 0, oldLevel = 0, oldMaxhealth = 0;
	void saveOldEnemy() {
		oldName = name;
		oldHealth = health;
		oldAttack = attackPower;
		oldDefense = defense;
		oldLives = lives;
		oldLevel = level;
		oldMaxhealth = maxhealth;
	}
	Enemy* bringBackEnemy() {
		return new Enemy(oldName, oldHealth, oldAttack, oldDefense, oldLives, oldLevel, oldMaxhealth);
	}
};
