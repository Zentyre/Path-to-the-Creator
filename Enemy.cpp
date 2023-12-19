#include "Enemy.h"
#include <iostream>
#include <random>
using namespace std;

Enemy::Enemy(string n, int hp, int atk) {

    name = n;
    health = hp;
    attackPower = atk;
}
random_device r;
int critchance;
void Enemy::attack(Character* Target) {
    if (trickstermovebool == true && health > 0 && getlevel() >= 100) {
        int attackself, y;
        critchance = r() % 100 + 1;
        attackself = r() % 100 + 1;
        if (attackself > 60 && critchance > 70) {
             y = r() % 10 + attackPower * 1.5;
             health -= y;
             cout << "The enemy is confused and attacked itself for" << y << " damage!" << endl;
        }
        else if (attackself > 60) {
             y = r() % 10 + attackPower;
             health -= y;
             cout << "The enemy is confused and attacked itself for" << y << " damage!" << endl;
        }
        else if (attackself <= 60 && critchance > 70) {
            cout << "The enemy resisted your willpower and did not get confused." << endl;
            y = r() % 10 + attackPower * 1.5;
            Target->takeDmg(y);
        }
        else {
            cout << "The enemy resisted your willpower and did not get confused." << endl;
            y = r() % 10 + attackPower;
            Target->takeDmg(y);
        }
    }
     if (trickstermovebool == true && health > 0) {
        int attackself, y;
        critchance = r() % 100 + 1;
        attackself = r() % 100 + 1;
        if (attackself > 60 && critchance > 70) {
             y = r() % 7 + attackPower * 1.5;
             health -= y;
             cout << "The enemy is confused and attacked itself for" << y << " damage!" << endl;
        }
        else if (attackself > 60) {
             y = r() % 7 + attackPower;
             health -= y;
             cout << "The enemy is confused and attacked itself for" << y << " damage!" << endl;
        }
        else if (attackself <= 60 && critchance > 70) {
            cout << "The enemy resisted your willpower and did not get confused." << endl;
            y = r() % 7 + attackPower * 1.5;
            Target->takeDmg(y);
        }
        else {
            cout << "The enemy resisted your willpower and did not get confused." << endl;
            y = r() % 7 + attackPower;
            Target->takeDmg(y);
        }
    }
    else if (health > 0 && getlevel() >= 100) {
        int y, accuracy;
        accuracy = r() % 100 + 1;
        critchance = r() % 100 + 1;
        if (accuracy > 10 && critchance <= 5) {
            y = r() % 10 + attackPower * 1.5;
            cout << name << " dealt " << y << " damage." << endl;
            Target->takeDmg(y);
        }
        else if (accuracy > 10) {
            y = r() % 10 + attackPower;
            cout << name << " dealt " << y << " damage." << endl;
            Target->takeDmg(y);
        }
        else if (accuracy <= 10) {
            cout << name << " has missed its attack!" << endl;
        }
    }
    else if (health > 0) {
        int y, accuracy;
        accuracy = r() % 100 + 1;
        critchance = r() % 100 + 1;
        if (accuracy > 10 && critchance <= 5) {
            y = r() % 7 + attackPower * 1.5;
            cout << name << " dealt " << y << " damage." << endl;
            Target->takeDmg(y);
        }
        else if (accuracy > 10) {
            y = r() % 7 + attackPower;
            cout << name << " dealt " << y << " damage." << endl;
            Target->takeDmg(y);
        }
        else if (accuracy <= 10) {
            cout << name << " has missed its attack!" << endl;
        }
    }
    else {
        cout << "You have killed the " << name << "!" << endl;
    }
}