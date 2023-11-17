#include "Enemy.h"
#include <iostream>
#include <random>
using namespace std;

Enemy::Enemy(string n, int hp, int atk) {

    name = n;
    health = hp;
    attackPower = atk;
}
void Enemy::attack(Character* Target) {
    if (health > 0) {
        random_device r;
        int y, accuracy = 0;
        accuracy = r() % 100 + 1;
        if (accuracy > 15) {
            y = r() % 7 + attackPower;
            cout << name << " dealt " << y << " damage." << endl;
            Target->takeDmg(y);
        }
        else if (accuracy <= 15) {
            cout << name << " has missed its attack!" << endl;
        }
    }
    else {
        cout << "You have killed the " << name << "!" << endl;
    }
}