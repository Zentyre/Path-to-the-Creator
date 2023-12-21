#include "Player.h"
#include <iostream>
#include <random>
using namespace std;

Player::Player(string n, int maxh, int hp, int atk, int def, int lvl, int live) {
    name = n;
    maxhealth = maxh;
    health = hp;
    attackPower = atk;
    defence = def;
    baselevel = lvl;
    lives = live;
}
int tracklevelpotion, tracksuperpotion, tracksuperiorlevelpotion;
void Player::playerclassexecutioner() {
    health -= 10;
    attackPower += 4;
    classtype = 2;
}
void Player::playerclasssoulweaver() {
    health -= 5;
    attackPower -= 1;
    addlives(1);
    classtype = 3;
}
void Player::playerclasswarforged() {
    health += 15;
    maxhealth += 30;
    attackPower -= 2;
    classtype = 4;
}
void Player::playerclassdreadnought() {
    health += 25;
    attackPower -= 3;
    maxhealth += 50;
    classtype = 5;
}
void Player::playerclasstrickster() {
    health -= 5;
    attackPower += 1;
    classtype = 6;
}
void Player::checkitems() {
    if (Excalibur == true) {
        int x = 0;
         if (x == 0) {
            attackPower += 10;
            x += 1;
        }
    }
    else if (Knife == true) {
        int x = 0;
         if (x == 0) {
            attackPower += 2;
            x += 1;
      }
    }
    else if (Sword == true) {
        int x = 0;
         if (x == 0) {
            attackPower += 4.5;
            x += 1;
        }
    }
    else if (leveltonic == true) {
        level += 10;
        tracklevelpotion += 1;
        leveltonic = false;
    }
    else if (superiorleveltonic == true) {
        level += 15;
        tracksuperiorlevelpotion += 1;
        superiorleveltonic = false;
    }
    else if (superpotion == true) {
        level += 15;
        attackPower += 6;
        tracksuperpotion += 1;
        superpotion = false;
    }
    else if (healthtonic == true) {
        if (level >= 150) {
        health += 75;
        }
        else if (level >= 50 && level < 150) {
            health += 50;
        }
        else {
            health += 25;
        }
        if (health > maxhealth) {
            health = maxhealth;
        }
        healthtonic = false;
    }
    else if (helmet == true) {
        int x = 0;
        if (x == 0) {
         defence += 4;
         maxhealth += 5;
            x += 1;
        }
    }
    else if (chestplate == true) {
        int x = 0;
         if (x == 0) {
           defence += 7;
           maxhealth += 8;
           x += 1;
        }
    }
    else if (boots == true) {
        int x = 0;
        if (x == 0) {
          defence += 3;
          maxhealth += 4;
          x += 1;
        }
    }
    else if (shield == true) {
        int x = 0;
        if (x == 0) {
          defence += 10;
          x += 1;
        }
    }
    else if (godarmor == true) {
        int x = 0;
        if (x == 0) {
            defence += 20;
            maxhealth += 12;
            x += 1;
        }
    }
    else if (defenceupgrade == true) {
        int x = 0;
        if (x == 0) {
            defence += 10;
            x += 1;
        }
    }
    else if (maxhealthupgrade == true) {
        maxhealthtracker += 1;
        Character* setmaxhealth();
        health += 50;
        maxhealthupgrade = false;
    }
    else if (attackupgrade == true) {
        attackPower += 10;
        attackupgrade = false;
    }
    else if (levelupgrade == true) {
        level += 15;
        levelupgrade = false;
    }
}
void Player::attack(Character* Target) {
    random_device r;
    int playerInput, x, h;
    int accuracy = 0;
    bool fallen = false;
    if (classtype == 1) { //knight attack messages |health =25|attackPower=4|lives=1|
        if (knightmove == true) {
            cout << "Choose: 1 (" << 4 + (level % 31) + attackPower << "-" << 8 + (level % 31) + attackPower << " dmg) 2 (" << 2 + (level % 31) + attackPower << "-" << 5 + (level % 31) + attackPower << " lifesteal) 3 (" << 6 + (level % 31) + attackPower << "-" << 11 + (level % 31) + attackPower << "dmg) 4 (" << 6 + (level % 31) + attackPower << "-" << 9 + (level % 31) + attackPower << " heal) 5 (" << 7 + (level % 31) + attackPower << "-" << 12 + (level % 31) + attackPower << " lifesteal) 6 (Titans Strike) 9 (Stat page) 10 (Inventory) 0 (Special Skill Info)" << endl;
        }
        else if (level >= 50) {
            cout << "Choose: 1 (" << 4 + (level % 31) + attackPower << "-" << 8 + (level % 31) + attackPower << " dmg) 2 (" << 2 + (level % 31) + attackPower << "-" << 5 + (level % 31) + attackPower << " lifesteal) 3 (" << 6 + (level % 31) + attackPower << "-" << 11 + (level % 31) + attackPower << "dmg) 4 (" << 6 + (level % 31) + attackPower << "-" << 9 + (level % 31) + attackPower << " heal) 5 (" << 7 + (level % 31) + attackPower << "-" << 12 + (level % 31) + attackPower << " lifesteal) 9 (Stat page) 10 (Inventory) 0 (Special Skill Info) 0 (Special Skill Info)" << endl;
        }
        else if (level >= 25) {
            cout << "Choose: 1 (" << 4 + (level % 31) + attackPower << "-" << 8 + (level % 31) + attackPower << " dmg) 2 (" << 2 + (level % 31) + attackPower << "-" << 5 + (level % 31) + attackPower << " lifesteal) 3 (" << 6 + (level % 31) + attackPower << "-" << 11 + (level % 31) + attackPower << "dmg) 4 (" << 6 + (level % 31) + attackPower << "-" << 9 + (level % 31) + attackPower << " heal) 9 (Stat page) 10 (Inventory) 0 (Special Skill Info)" << endl;
        }
        else if (level >= 15) {
            cout << "Choose: 1 (" << 4 + (level % 31) + attackPower << "-" << 8 + (level % 31) + attackPower << " dmg) 2 (" << 2 + (level % 31) + attackPower << "-" << 5 + (level % 31) + attackPower << " lifesteal) 3 (" << 6 + (level % 31) + attackPower << "-" << 11 + (level % 31) + attackPower << "dmg) 9 (Stat page) 10 (Inventory) 0 (Special Skill Info)" << endl;
        }
        else {
            cout << "Choose: 1 (" << 4 + (level % 31) + attackPower << "-" << 8 + (level % 31) + attackPower << " dmg) 2 (" << 2 + (level % 31) + attackPower << "-" << 5 + (level % 31) + attackPower << " lifesteal) 9 (Stat page) 10 (Inventory) 0 (Special Skill Info)" << endl;
        }
    }
    if (classtype == 2) { //executioner attack messages |health =15|attackPower=7|lives=1|
        if (executionermove == true) {
  cout << "Choose: 1 (" << 4 + (level % 31) + attackPower << "-" << 8 + (level % 31) + attackPower << " dmg) 2 (" << 2 + (level % 31) + attackPower << "-" << 5 + (level % 31) + attackPower << " lifesteal) 3 (" << 6 + (level % 31) + attackPower << "-" << 11 + (level % 31) + attackPower << "dmg) 4 (" << 6 + (level % 31) + attackPower << "-" << 9 + (level % 31) + attackPower << " heal) 5 (" << 7 + (level % 31) + attackPower << "-" << 12 + (level % 31) + attackPower << " lifesteal) 6 (Soul Surge) 9 (Stat page) 10 (Inventory) 0 (Special Skill Info)" << endl;
        }
        else if (level >= 50) {
            cout << "Choose: 1 (" << 4 + (level % 31) + attackPower << "-" << 8 + (level % 31) + attackPower << " dmg) 2 (" << 2 + (level % 31) + attackPower << "-" << 5 + (level % 31) + attackPower << " lifesteal) 3 (" << 6 + (level % 31) + attackPower << "-" << 11 + (level % 31) + attackPower << "dmg) 4 (" << 6 + (level % 31) + attackPower << "-" << 9 + (level % 31) + attackPower << " heal) 5 (" << 7 + (level % 31) + attackPower << "-" << 12 + (level % 31) + attackPower << " lifesteal) 9 (Stat page) 10 (Inventory) 0 (Special Skill Info)" << endl;
        }
        else if (level >= 25) {
            cout << "Choose: 1 (" << 4 + (level % 31) + attackPower << "-" << 8 + (level % 31) + attackPower << " dmg) 2 (" << 2 + (level % 31) + attackPower << "-" << 5 + (level % 31) + attackPower << " lifesteal) 3 (" << 6 + (level % 31) + attackPower << "-" << 11 + (level % 31) + attackPower << "dmg) 4 (" << 6 + (level % 31) + attackPower << "-" << 9 + (level % 31) + attackPower << " heal) 9 (Stat page) 10 (Inventory) 0 (Special Skill Info)" << endl;
        }
        else if (level >= 15) {
            cout << "Choose: 1 (" << 4 + (level % 31) + attackPower << "-" << 8 + (level % 31) + attackPower << " dmg) 2 (" << 2 + (level % 31) + attackPower << "-" << 5 + (level % 31) + attackPower << " lifesteal) 3 (" << 6 + (level % 31) + attackPower << "-" << 11 + (level % 31) + attackPower << "dmg) 9 (Stat page) 10 (Inventory) 0 (Special Skill Info)" << endl;
        }
        else {
            cout << "Choose: 1 (" << 4 + (level % 31) + attackPower << "-" << 8 + (level % 31) + attackPower << " dmg) 2 (" << 2 + (level % 31) + attackPower << "-" << 5 + (level % 31) + attackPower << " lifesteal) 9 (Stat page) 10 (Inventory) 0 (Special Skill Info)" << endl;
        }
    }
   if (classtype == 3) { //soulweaver attack messages |health =20|attackPower=3|lives=2|
   if (soulweavermove == true) {
            cout << "Choose: 1 (" << 4 + (level % 31) + attackPower << "-" << 8 + (level % 31) + attackPower << " dmg) 2 (" << 2 + (level % 31) + attackPower << "-" << 5 + (level % 31) + attackPower << " lifesteal) 3 (" << 6 + (level % 31) + attackPower << "-" << 11 + (level % 31) + attackPower << "dmg) 4 (" << 6 + (level % 31) + attackPower << "-" << 9 + (level % 31) + attackPower << " heal) 5 (" << 7 + (level % 31) + attackPower << "-" << 12 + (level % 31) + attackPower << " lifesteal) 6 (Fortuitous Gambit) 9 (Stat page) 10 (Inventory) 0 (Special Skill Info)" << endl;
   }
        if (level >= 50) {
            cout << "Choose: 1 (" << 4 + (level % 31) + attackPower << "-" << 8 + (level % 31) + attackPower << " dmg) 2 (" << 2 + (level % 31) + attackPower << "-" << 5 + (level % 31) + attackPower << " lifesteal) 3 (" << 6 + (level % 31) + attackPower << "-" << 11 + (level % 31) + attackPower << "dmg) 4 (" << 6 + (level % 31) + attackPower << "-" << 9 + (level % 31) + attackPower << " heal) 5 (" << 7 + (level % 31) + attackPower << "-" << 12 + (level % 31) + attackPower << " lifesteal) 9 (Stat page) 10 (Inventory) 0 (Special Skill Info)" << endl;
        }
        else if (level >= 25) {
            cout << "Choose: 1 (" << 4 + (level % 31) + attackPower << "-" << 8 + (level % 31) + attackPower << " dmg) 2 (" << 2 + (level % 31) + attackPower << "-" << 5 + (level % 31) + attackPower << " lifesteal) 3 (" << 6 + (level % 31) + attackPower << "-" << 11 + (level % 31) + attackPower << "dmg) 4 (" << 6 + (level % 31) + attackPower << "-" << 9 + (level % 31) + attackPower << " heal) 9 (Stat page) 10 (Inventory) 0 (Special Skill Info)" << endl;
        }
        else if (level >= 15) {
            cout << "Choose: 1 (" << 4 + (level % 31) + attackPower << "-" << 8 + (level % 31) + attackPower << " dmg) 2 (" << 2 + (level % 31) + attackPower << "-" << 5 + (level % 31) + attackPower << " lifesteal) 3 (" << 6 + (level % 31) + attackPower << "-" << 11 + (level % 31) + attackPower << "dmg) 9 (Stat page) 10 (Inventory) 0 (Special Skill Info)" << endl;
        }
        else {
            cout << "Choose: 1 (" << 4 + (level % 31) + attackPower << "-" << 8 + (level % 31) + attackPower << " dmg) 2 (" << 2 + (level % 31) + attackPower << "-" << 5 + (level % 31) + attackPower << " lifesteal) 9 (Stat page) 10 (Inventory) 0 (Special Skill Info)" << endl;
        }
    }
    if (classtype == 4) { //warforged engineer attack messages |health =40|attackPower=3|lives=1|
        if (warforgedmove == true) {
            cout << "Choose: 1 (" << 4 + (level % 31) + attackPower << "-" << 8 + (level % 31) + attackPower << " dmg) 2 (" << 2 + (level % 31) + attackPower << "-" << 5 + (level % 31) + attackPower << " lifesteal) 3 (" << 6 + (level % 31) + attackPower << "-" << 11 + (level % 31) + attackPower << "dmg) 4 (" << 6 + (level % 31) + attackPower << "-" << 9 + (level % 31) + attackPower << " heal) 5 (" << 7 + (level % 31) + attackPower << "-" << 12 + (level % 31) + attackPower << " lifesteal) 6 (Guardians Respite) 9 (Stat page) 10 (Inventory) 0 (Special Skill Info)" << endl;
        }
        else if (level >= 50) {
            cout << "Choose: 1 (" << 4 + (level % 31) + attackPower << "-" << 8 + (level % 31) + attackPower << " dmg) 2 (" << 2 + (level % 31) + attackPower << "-" << 5 + (level % 31) + attackPower << " lifesteal) 3 (" << 6 + (level % 31) + attackPower << "-" << 11 + (level % 31) + attackPower << "dmg) 4 (" << 6 + (level % 31) + attackPower << "-" << 9 + (level % 31) + attackPower << " heal) 5 (" << 7 + (level % 31) + attackPower << "-" << 12 + (level % 31) + attackPower << " lifesteal) 9 (Stat page) 10 (Inventory) 0 (Special Skill Info)" << endl;
        }
        else if (level >= 25) {
            cout << "Choose: 1 (" << 4 + (level % 31) + attackPower << "-" << 8 + (level % 31) + attackPower << " dmg) 2 (" << 2 + (level % 31) + attackPower << "-" << 5 + (level % 31) + attackPower << " lifesteal) 3 (" << 6 + (level % 31) + attackPower << "-" << 11 + (level % 31) + attackPower << "dmg) 4 (" << 6 + (level % 31) + attackPower << "-" << 9 + (level % 31) + attackPower << " heal) 9 (Stat page) 10 (Inventory) 0 (Special Skill Info)" << endl;
        }
        else if (level >= 15) {
            cout << "Choose: 1 (" << 4 + (level % 31) + attackPower << "-" << 8 + (level % 31) + attackPower << " dmg) 2 (" << 2 + (level % 31) + attackPower << "-" << 5 + (level % 31) + attackPower << " lifesteal) 3 (" << 6 + (level % 31) + attackPower << "-" << 11 + (level % 31) + attackPower << "dmg) 9 (Stat page) 10 (Inventory) 0 (Special Skill Info)" << endl;
        }
        else {
            cout << "Choose: 1 (" << 4 + (level % 31) + attackPower << "-" << 8 + (level % 31) + attackPower << " dmg) 2 (" << 2 + (level % 31) + attackPower << "-" << 5 + (level % 31) + attackPower << " lifesteal) 9 (Stat page) 10 (Inventory) 0 (Special Skill Info)" << endl;
        }
    }
    if (classtype == 5) { //dreadnought attack messages |health =50|attackPower=1|lives=1|
        if (dreadnoughtmove == true) {
            cout << "Choose: 1 (" << 4 + (level % 31) + attackPower << "-" << 8 + (level % 31) + attackPower << " dmg) 2 (" << 2 + (level % 31) + attackPower << "-" << 5 + (level % 31) + attackPower << " lifesteal) 3 (" << 6 + (level % 31) + attackPower << "-" << 11 + (level % 31) + attackPower << "dmg) 4 (" << 6 + (level % 31) + attackPower << "-" << 9 + (level % 31) + attackPower << " heal) 5 (" << 7 + (level % 31) + attackPower << "-" << 12 + (level % 31) + attackPower << " lifesteal) 6 (Healing Remedy) 9 (Stat page) 10 (Inventory) 0 (Special Skill Info)" << endl;
        }
        else if (level >= 50) {
            cout << "Choose: 1 (" << 4 + (level % 31) + attackPower << "-" << 8 + (level % 31) + attackPower << " dmg) 2 (" << 2 + (level % 31) + attackPower << "-" << 5 + (level % 31) + attackPower << " lifesteal) 3 (" << 6 + (level % 31) + attackPower << "-" << 11 + (level % 31) + attackPower << "dmg) 4 (" << 6 + (level % 31) + attackPower << "-" << 9 + (level % 31) + attackPower << " heal) 5 (" << 7 + (level % 31) + attackPower << "-" << 12 + (level % 31) + attackPower << " lifesteal) 9 (Stat page) 10 (Inventory) 0 (Special Skill Info)" << endl;
        }
        else if (level >= 25) {
            cout << "Choose: 1 (" << 4 + (level % 31) + attackPower << "-" << 8 + (level % 31) + attackPower << " dmg) 2 (" << 2 + (level % 31) + attackPower << "-" << 5 + (level % 31) + attackPower << " lifesteal) 3 (" << 6 + (level % 31) + attackPower << "-" << 11 + (level % 31) + attackPower << "dmg) 4 (" << 6 + (level % 31) + attackPower << "-" << 9 + (level % 31) + attackPower << " heal) 9 (Stat page) 10 (Inventory) 0 (Special Skill Info)" << endl;
        }
        else if (level >= 15) {
            cout << "Choose: 1 (" << 4 + (level % 31) + attackPower << "-" << 8 + (level % 31) + attackPower << " dmg) 2 (" << 2 + (level % 31) + attackPower << "-" << 5 + (level % 31) + attackPower << " lifesteal) 3 (" << 6 + (level % 31) + attackPower << "-" << 11 + (level % 31) + attackPower << "dmg) 9 (Stat page) 10 (Inventory) 0 (Special Skill Info)" << endl;
        }
        else {
            cout << "Choose: 1 (" << 4 + (level % 31) + attackPower << "-" << 8 + (level % 31) + attackPower << " dmg) 2 (" << 2 + (level % 31) + attackPower << "-" << 5 + (level % 31) + attackPower << " lifesteal) 9 (Stat page) 10 (Inventory) 0 (Special Skill Info)" << endl;
        }
    }
     if (classtype == 6) { //trickster attack messages |health =20|attackPower=5|lives=1|
        if (trickstermove == true) {
            cout << "Choose: 1 (" << 4 + (level % 31) + attackPower << "-" << 8 + (level % 31) + attackPower << " dmg) 2 (" << 2 + (level % 31) + attackPower << "-" << 5 + (level % 31) + attackPower << " lifesteal) 3 (" << 6 + (level % 31) + attackPower << "-" << 11 + (level % 31) + attackPower << "dmg) 4 (" << 6 + (level % 31) + attackPower << "-" << 9 + (level % 31) + attackPower << " heal) 5 (" << 7 + (level % 31) + attackPower << "-" << 12 + (level % 31) + attackPower << " lifesteal) 6 (Confuse) 9 (Stat page) 10 (Inventory) 0 (Special Skill Info)" << endl;
        }
        else if (level >= 50) {
            cout << "Choose: 1 (" << 4 + (level % 31) + attackPower << "-" << 8 + (level % 31) + attackPower << " dmg) 2 (" << 2 + (level % 31) + attackPower << "-" << 5 + (level % 31) + attackPower << " lifesteal) 3 (" << 6 + (level % 31) + attackPower << "-" << 11 + (level % 31) + attackPower << "dmg) 4 (" << 6 + (level % 31) + attackPower << "-" << 9 + (level % 31) + attackPower << " heal) 5 (" << 7 + (level % 31) + attackPower << "-" << 12 + (level % 31) + attackPower << " lifesteal) 9 (Stat page) 10 (Inventory) 0 (Special Skill Info)" << endl;
        }
        else if (level >= 25) {
            cout << "Choose: 1 (" << 4 + (level % 31) + attackPower << "-" << 8 + (level % 31) + attackPower << " dmg) 2 (" << 2 + (level % 31) + attackPower << "-" << 5 + (level % 31) + attackPower << " lifesteal) 3 (" << 6 + (level % 31) + attackPower << "-" << 11 + (level % 31) + attackPower << "dmg) 4 (" << 6 + (level % 31) + attackPower << "-" << 9 + (level % 31) + attackPower << " heal) 9 (Stat page) 10 (Inventory) 0 (Special Skill Info)" << endl;
        }
        else if (level >= 15) {
            cout << "Choose: 1 (" << 4 + (level % 31) + attackPower << "-" << 8 + (level % 31) + attackPower << " dmg) 2 (" << 2 + (level % 31) + attackPower << "-" << 5 + (level % 31) + attackPower << " lifesteal) 3 (" << 6 + (level % 31) + attackPower << "-" << 11 + (level % 31) + attackPower << "dmg) 9 (Stat page) 10 (Inventory) 0 (Special Skill Info)" << endl;
        }
        else {
            cout << "Choose: 1 (" << 4 + (level % 31) + attackPower << "-" << 8 + (level % 31) + attackPower << " dmg) 2 (" << 2 + (level % 31) + attackPower << "-" << 5 + (level % 31) + attackPower << " lifesteal) 9 (Stat page) 10 (Inventory) 0 (Special Skill Info)" << endl;
        }
    }
    cin >> playerInput;
    switch (playerInput) {
    case 0:
        if (cin.fail()) {
            cout << endl;
            cout << "----------------------" << endl;
            cout << "Please enter a number." << endl;
            cout << "----------------------" << endl << endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            attack(Target);
            break;
        }
        if (classtype == 1) {
            cout << "--The knight class unlocks its special skill (Titans Strike) at level 80. It is just a normal attack but with more damage.--" << endl << endl;
        }
        else if (classtype == 2) {
            cout << "--The executioner class unlocks its special skill (Soul Surge) at level 80. This skill is a slightly better damage lifesteal with a 20% chance to crit.--" << endl << endl;
        }
        else if (classtype == 3) {
            cout << "--The soulweaver class unlocks its special skill (Fortuitous Gambit) at level 90. This skill is a little damage attack that has a 5% chance to give you a life and a 40% chance to deal damage.--" << endl << endl;
        }
        else if (classtype == 4) {
            cout << "--The warforged engineer unlocks its special skill (Guardians Respite) at level 75. This skill makes the enemy deal less damage for 2 turns and heals you over the two rounds but you deal much less damage in its duration.--" << endl << endl;
        }
        else if (classtype == 5) {
            cout << "--The dreadnought class unlocks its special skill (Healing Remedy) at level 75. This skill is a better than normal single heal and has a 10% crit chance.--" << endl << endl;
        }
        else if (classtype == 6) {
            cout << "--The trickster class unlocks its special skill (Confuse) at level 50. This skill has a 40% chance to make the enemy attack itself with a crit rate of 30%.--" << endl << endl;
        }
        cout << "**NOTE** All special skills have 100% accuracy and if it affects an enemy, the enemy will also have 100% accuracy." << endl << endl;
        attack(Target);
        break;
    case 1:
        accuracy = r() & 100 + 1;
        if (accuratesword == true || fallen == true) {
            x = r() % 5 + 4 + (level > 30) ? (level % 30) : (level % 31) + attackPower; //normal attack
            Target->takeDmg(x);
            cout << endl;
            fallen = false;
            int message;
            message = r() % 5 + 1;
            if (message == 1) {
                cout << "-----------------------------------------------" << endl;
                cout << name << ", you dealt " << x << " damage." << endl;
            }
            else if (message == 2) {
                cout << "-----------------------------------------------" << endl;
                cout << "You kicked the slime for " << x << " damage." << endl;
            }
            else if (message == 3) {
                cout << "-----------------------------------------------" << endl;
                cout << "You stabbed the slime for " << x << " damage." << endl;
            }
            else if (message == 4) {
                cout << "-----------------------------------------------" << endl;
                cout << "You kicked the slime in the face for " << x << " damage." << endl;
            }
            else {
                cout << "-----------------------------------------------" << endl;
                cout << "You bludgeon the slime for " << x << " damage." << endl;
            }
            break;
        }
        else if (accuracy > 10) {
            x = r() % 5 + 4 + (level % 31) + attackPower; //normal attack
            Target->takeDmg(x);
            cout << endl;
            fallen = false;
            int message;
            message = r() % 5 + 1;
            if (message == 1) {
                cout << "-----------------------------------------------" << endl;
                cout << name << ", you dealt " << x << " damage." << endl;
            }
            else if (message == 2) {
                cout << "-----------------------------------------------" << endl;
                cout << "You kicked the slime for " << x << " damage." << endl;
            }
            else if (message == 3) {
                cout << "-----------------------------------------------" << endl;
                cout << "You stabbed the slime for " << x << " damage." << endl;
            }
            else if (message == 4) {
                cout << "-----------------------------------------------" << endl;
                cout << "You kicked the slime in the face for " << x << " damage." << endl;
            }
            else {
                cout << "-----------------------------------------------" << endl;
                cout << "You bludgeon the slime for " << x << " damage." << endl;
            }
            break;
        }
        else {
            cout << "-----------------------------------------------" << endl;
            cout << name << " You have slipped and fallen, losing this turn." << endl;
            fallen = true;
            break;
        }
    case 2:
        accuracy = r() & 100 + 1;
        if (accuratesword == true || fallen == true) {
            x = r() % 4 + 2 + (level % 31) + attackPower;
            Target->takeDmg(x);
            h = x - 2;
            cout << endl;
            fallen = false;
            cout << "-----------------------------------------------" << endl;
            cout << name << ", you dealt " << x << " damage." << endl;
            if (health >= maxhealth) {
                health = maxhealth;
                cout << "You have no wounds to heal." << endl;
            }
            else {
                health += h;
                cout << "You healed for " << h << " damage." << endl;
            }
            break;
        }
        else if (accuracy > 10) {
            x = r() % 4 + 2 + (level % 31) + attackPower;
            Target->takeDmg(x);
            h = x - 3;
            cout << endl;
            fallen = false;
            cout << "-----------------------------------------------" << endl;
            cout << name << ", you dealt " << x << " damage." << endl;
            if (health >= maxhealth) {
                health = maxhealth;
                cout << "You have no wounds to heal." << endl;
            }
            else {
                health += h;
                cout << "You healed for " << h << " damage." << endl;
            }
            break;
        }
        else {
            cout << "-----------------------------------------------" << endl;
            cout << name << ", you have slipped and fallen, losing this turn." << endl;
            fallen = true;
            break;
        }
    case 3:
        accuracy = r() & 100 + 1;
        if (baselevel >= 15 && accuratesword == true || fallen == true) {
            x = r() % 6 + 6 + (level % 31) + attackPower; //normal attack
            Target->takeDmg(x);
            cout << endl;
            fallen = false;
            int message;
            message = r() % 5 + 1;
            if (message == 1) {
                cout << "-----------------------------------------------" << endl;
                cout << name << ", you dealt " << x << " damage." << endl;
            }
            else if (message == 2) {
                cout << "-----------------------------------------------" << endl;
                cout << "You kicked the slime for " << x << " damage." << endl;
            }
            else if (message == 3) {
                cout << "-----------------------------------------------" << endl;
                cout << "You stabbed the slime for " << x << " damage." << endl;
            }
            else if (message == 4) {
                cout << "-----------------------------------------------" << endl;
                cout << "You kicked the slime in the face for " << x << " damage." << endl;
            }
            else {
                cout << "-----------------------------------------------" << endl;
                cout << "You bludgeon the slime for " << x << " damage." << endl;
            }
            break;
        }
        else if (baselevel >= 15 && accuracy > 10) {
            x = r() % 6 + 6 + (level % 31) + attackPower;
            Target->takeDmg(x);
            cout << endl;
            fallen = false;
            int message;
            message = r() % 5 + 1;
            if (message == 1) {
                cout << "-----------------------------------------------" << endl;
                cout << name << ", you dealt " << x << " damage." << endl;
            }
            else if (message == 2) {
                cout << "-----------------------------------------------" << endl;
                cout << "You kicked the slime for " << x << " damage." << endl;
            }
            else if (message == 3) {
                cout << "-----------------------------------------------" << endl;
                cout << "You stabbed the slime for " << x << " damage." << endl;
            }
            else if (message == 4) {
                cout << "-----------------------------------------------" << endl;
                cout << "You kicked the slime in the face for " << x << " damage." << endl;
            }
            else {
                cout << "-----------------------------------------------" << endl;
                cout << "You bludgeon the slime for " << x << " damage." << endl;
            }
            break;
        }
        else if (baselevel >= 15 && accuracy <= 10) {
            cout << "-----------------------------------------------" << endl;
            cout << name << ", you have slipped and fallen, losing this turn." << endl;
            fallen = true;
            break;
        }
        else {
            cout << "-----------------------------------------------" << endl;
            cout << "You are not a high enough level for this move." << endl;
            cout << "-----------------------------------------------" << endl;
            cout << endl;
            attack(Target);
            break;
        }
        break;
    case 4:
        accuracy = r() & 100 + 1; //single heal
        if (baselevel >= 25 && accuratesword == true || fallen == true) {
            fallen = false;
            x = r() % 4 + 6 + (level % 31);
            h = x;
            cout << "-----------------------------------------------" << endl;
            if (health >= maxhealth) {
                health = maxhealth;
                cout << "You have no wounds to heal." << endl;
            }
            else {
                health += h;
                cout << "You healed for " << h << " damage." << endl;
            }
            break;
        }
        else if (baselevel >= 25 && accuracy > 10) {
            fallen = false;
            x = r() % 4 + 6 + (level % 31);
            h = x;
            health += h;
            cout << "-----------------------------------------------" << endl;
            if (health >= maxhealth) {
                health = maxhealth;
                cout << "You have no wounds to heal." << endl;
            }
            else {
                health += h;
                cout << "You healed for " << h << " damage." << endl;
            }
            break;
        }
        else if (baselevel >= 25 && accuracy <= 10) {
            cout << "-----------------------------------------------" << endl;
            cout << name << ", you have slipped and fallen, losing this turn." << endl;
            fallen = true;
            break;
        }
        else {
            cout << "-----------------------------------------------" << endl;
            cout << "You are not a high enough level for this move." << endl;
            cout << "-----------------------------------------------" << endl;
            cout << endl;
            attack(Target);
            break;
        }
    case 5:
        accuracy = r() & 100 + 1; //lifesteal attack
        if (baselevel >= 50 && accuratesword == true || fallen == true) {
            x = r() % 6 + 7 + (level % 31) + attackPower;
            Target->takeDmg(x);
            h = x - 5;
            cout << endl;
            fallen = false;
            cout << "-----------------------------------------------" << endl;
            cout << name << ", you dealt " << x << " damage." << endl;
            if (health >= maxhealth) {
                health = maxhealth;
                cout << "You have no wounds to heal." << endl;
            }
            else {
                health += h;
                cout << "You healed for " << h << " damage." << endl;
            }
            break;
        }
        else if (baselevel >= 50 && accuracy > 10) {
            fallen = false;
            x = r() % 6 + 7 + (level % 31) + attackPower;
            Target->takeDmg(x);
            h = x - 5;
            cout << endl;
            cout << "-----------------------------------------------" << endl;
            cout << name << ", you dealt " << x << " damage." << endl;
            if (health >= maxhealth) {
                health = maxhealth;
                cout << "You have no wounds to heal." << endl;
            }
            else {
                health += h;
                cout << "You healed for " << h << " damage." << endl;
            }
            break;
        }
        else if (baselevel >= 50 && accuracy <= 10) {
            cout << "-----------------------------------------------" << endl;
            cout << name << ", you have slipped and fallen, losing this turn." << endl;
            fallen = true;
            break;
        }
        else {
            cout << "-----------------------------------------------" << endl;
            cout << "You are not a high enough level for this move." << endl;
            cout << "-----------------------------------------------" << endl;
            cout << endl;
            attack(Target);
            break;
        }
    case 6:
        if (soulweavermove == true) {
            int maybeaddlife;
            maybeaddlife = r() % 100 + 1;
            if (maybeaddlife <= 5) {
                addlives(1);
                x = r() % 4 + 4 + (level % 31) + attackPower;
                Target->takeDmg(x);
                cout << name << ", you dealt " << x << " damage." << endl;
            }
            else if (maybeaddlife > 5 && maybeaddlife <= 40) {
                x = r() % 4 + 4 + (level % 31) + attackPower;
                Target->takeDmg(x);
                cout << name << ", you dealt " << x << " damage." << endl;
            }
            else if (maybeaddlife > 40) {
                cout << name << ", your skill failed." << endl;
            }
            break;
        }
        else if (warforgedmove == true) {
            if (timetracker == 1 || timetracker == 2) {
                cout << "This skill is already in use." << endl << endl;
                attack(Target);
            }
            else {
                warforgedmovebool = true;
                cout << endl;
            }
            break;
        }
        else if (trickstermove == true) {
            trickstermovebool = true;
            cout << endl;
            break;
        }
        else if (knightmove == true) {
            x = r() % 7 + 8 + (level % 31) + attackPower;
            Target->takeDmg(x);
            cout << name << ", you dealt " << x << " damage." << endl;
            break;
        }
        else if (dreadnoughtmove == true) {
            x = r() % 7 + 10 + (level % 31);
            int critchance = 0;
            critchance = r() % 100 + 1;
            if (critchance <= 10) {
                x = x * 1.5;
            }
            h = x;
            cout << "-----------------------------------------------" << endl;
            if (health >= maxhealth) {
                health = maxhealth;
                cout << "You have no wounds to heal." << endl;
            }
            else {
                health += h;
                cout << "You healed for " << h << " damage." << endl;
            }
            break;
        }
        else if (executionermove == true) {
            x = r() % 11 + 7 + (level % 31) + attackPower;
            int critrate;
            critrate = r() % 100 + 1;
            if (critrate <= 20) {
                x = x * 1.5;
            }
            h = x * .77;
            cout << endl;
            cout << "-----------------------------------------------" << endl;
            cout << name << ", you dealt " << x << " damage." << endl;
            if (health >= maxhealth) {
                health = maxhealth;
                cout << "You have no wounds to heal." << endl;
            }
            else {
                health += h;
                cout << "You healed for " << h << " damage." << endl;
            }
            break;
        }
        else {
            cout << "-------------------------------------" << endl;
            cout << " You have not unlocked this skill." << endl;
            cout << "-------------------------------------" << endl;
            cout << endl;
            attack(Target);
            break;
        }
    case 9:
        cout << " --Stats--" << endl;
        cout << "--" << maxhealth << " Maxhealth--" << endl;
        cout << "--" << health << " Health--" << endl;
        cout << "--" << defence << " Defence--" << endl;
        cout << "--" << baselevel << " Baselevel--" << endl;
        cout << "--" << level + baselevel << " Level--" << endl;
        cout << "--" << attackPower << " Attack--" << endl;
        cout << "--" << lives << " Lives--" << endl;
        cout << "--" << kills << " Kills--" << endl;
            if (classtype == 1) {
                cout << "-Class = Knight-" << endl;
            }
            else if (classtype == 2) {
                cout << "-Class = Executioner-" << endl;
            }
            else if (classtype == 3) {
                cout << "-Class = Soulweaver-" << endl;
            }
            else if (classtype == 4) {
                cout << "-Class = Warforged Engineer-" << endl;
            }
            else if (classtype == 5) {
                cout << "-Class = Dreadnought-" << endl;
            }
            else if (classtype == 6) {
                cout << "-Class = Trickster-" << endl;
            }
        attack(Target);
        break;
    case 10: 
        if (accuratesword == true) {
            cout << "Accurate Sword (No more slipping!)" << endl;
        }
        else if (helmet == true) {
            cout << "Helmet (+7 defence)" << endl;
        }
        else if (boots == true) {
            cout << "Boots (+5 defence)" << endl;
        }
        else if (chestplate == true) {
            cout << "Chestplate (+10 defence)" << endl;
        }
        else if (Excalibur == true) {
            cout << "Excalibur (+8 attack)" << endl;
        }
        else if (Knife == true) {
            cout << "Knife (+2 attack)" << endl;
        }
        else if (Sword == true) {
            cout << "Sword (+4 attack)" << endl;
        }
        else if (leveltonic == true) {
            cout << "Level Tonic (+10 level)" << endl;
        }
        else  if (superiorleveltonic == true) {
            cout << "Superior Level Tonic (+15 level)" << endl;
        }
        else if (superpotion == true) {
            cout << "Super Potion (+20 level|+10 attack)" << endl;
        }
        else if (defenceupgrade == true) {
            cout << "Defence Perk (+10 defence)" << endl;
        }
        else if (godarmor == true) {
            cout << "God Armor (+20 defence)" << endl;
        }
        else if (attackupgrade == true) {
            cout << "Attack Perk (+10 attack)" << endl;
        }
        else  if (levelupgrade == true) {
            cout << "Level Perk (+15 level)" << endl;
        }
        else if (shield == true) {
            cout << "Shield (+15 defence)" << endl;
        }
        else if (tracklevelpotion >= 1) {
            cout << "Level Potions (+ " << 10 * tracklevelpotion << " levels)" << endl;
        }
        else if (tracksuperiorlevelpotion >= 1) {
            cout << "Superior Level Potions (+ " << 15 * tracksuperiorlevelpotion << " levels)" << endl;
        }
        else if (tracksuperpotion >= 1) {
            cout << "Super Potions (+ " << 15 * tracksuperpotion << " levels + " << 6 * tracksuperpotion << " Attack)" << endl;
        }
        else if (maxhealthtracker >= 1) {
            cout << "Level Potions (+ " << 10 * tracklevelpotion << " levels)" << endl;
        }
        else if (shield == false && levelupgrade == false && superiorleveltonic == false && defenceupgrade == false && godarmor == false && superpotion == false && attackupgrade == false && leveltonic == false && Sword == false && Knife == false && Excalibur == false && accuratesword == false && helmet == false && chestplate == false && boots == false) {
            cout << "----------------------" << endl;
            cout << "You have no items yet." << endl;
            cout << "----------------------" << endl << endl;
        }
        attack(Target);
        break;
    default:
        cout << "-------------------------" << endl;
        cout << "Invalid Move, try again!" << endl;
        cout << "-------------------------" << endl;
        cout << endl;
        attack(Target);
        break;
    }
}