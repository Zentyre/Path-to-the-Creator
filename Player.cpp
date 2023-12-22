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
        int excaliburtracker = 0;
         if (excaliburtracker == 0) {
            attackPower += 14;
            excaliburtracker += 1;
        }
    }
    else if (Knife == true) {
        int knifetracker = 0;
         if (knifetracker == 0) {
            attackPower += 2;
            knifetracker += 1;
      }
    }
    else if (Sword == true) {
        int swordtracker = 0;
         if (swordtracker == 0) {
            attackPower += 4.5;
            swordtracker += 1;
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
    else if (travelersbackpack == true && healthtonic == true) {
        healthtonicitem += 1;
        healthtonic = false;
    }
    else if (healthtonic == true && travelersbackpack == false) {
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
        healthtonic = false;
    }
    else if (helmet == true) {
        int helmtracker = 0;
        if (helmtracker == 0) {
         defence += 4;
         maxhealth += 5;
         helmtracker += 1;
        }
    }
    else if (chestplate == true) {
        int chesttracker = 0;
         if (chesttracker == 0) {
           defence += 7;
           maxhealth += 8;
           chesttracker += 1;
        }
    }
    else if (boots == true) {
        int boottracker = 0;
        if (boottracker == 0) {
          defence += 3;
          maxhealth += 4;
          boottracker += 1;
        }
    }
    else if (shield == true) {
        int shieldtracker = 0;
        if (shieldtracker == 0) {
          defence += 10;
          shieldtracker += 1;
        }
    }
    else if (godarmor == true) {
        int godtracker = 0;
        if (godtracker == 0) {
            defence += 20;
            maxhealth += 12;
            godtracker += 1;
        }
    }
    else if (defenceupgrade == true) {
        int defenceupgradetracker = 0;
        if (defenceupgradetracker == 0) {
            defence += 10;
            defenceupgradetracker += 1;
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
    else if (flaminglongsword == true) {
        int flamingtracker = 0;
        if (flamingtracker == 0) {
            attackPower += 11;
            flamingtracker += 1;
        }
    }
    else if (dragonscalechestplate == true) {
        int dragontracker = 0;
        if (dragontracker == 0) {
            defence += 11;
            maxhealth += 14;
            dragontracker += 1;
        }
    }
    else if (glassshoes == true) {
        int shoetracker = 0;
        if (shoetracker == 0) {
            defence += 7;
            maxhealth += 6;
            shoetracker += 1;
        }
    }
    else if (mystichelmet == true) {
        int mystictracker = 0;
        if (mystictracker == 0) {
            defence += 9;
            maxhealth += 8;
            mystictracker += 1;
        }
    }
    else if (healingpotionitem == true) {
        health = maxhealth;
        cout << "You have healed to " << health << " health." << endl;
        healingpotionitem = false;
    }
}
void Player::attack(Character* Target) {
    random_device r;
    int playerInput, x, h;
    string purchasechoice, yesnobackpack;
    int accuracy = 0;
    bool fallen = false;
    if (classtype == 1) { //knight attack messages |health =25|attackPower=4|lives=1|
        if (knightmove == true) {
            cout << "Choose: 1 (" << 4 + (((level >= 30) ? 30 : level)) + attackPower << "-" << 8 + (((level >= 30) ? 30 : level)) + attackPower << " dmg) 2 (" << 2 + (((level >= 30) ? 30 : level)) + attackPower << "-" << 5 + (((level >= 30) ? 30 : level)) + attackPower << " lifesteal) 3 (" << 6 + (((level >= 30) ? 30 : level)) + attackPower << "-" << 11 + (((level >= 30) ? 30 : level)) + attackPower << "dmg) 4 (" << 6 + (((level >= 30) ? 30 : level)) + attackPower << "-" << 9 + (((level >= 30) ? 30 : level)) + attackPower << " heal) 5 (" << 7 + (((level >= 30) ? 30 : level)) + attackPower << "-" << 12 + (((level >= 30) ? 30 : level)) + attackPower << " lifesteal) 6 (Titans Strike) 7 (Store) 9 (Stats) 10 (Inventory) 0 (Special Skill Info)" << endl;
        }
        else if (level >= 50) {
            cout << "Choose: 1 (" << 4 + (((level >= 30) ? 30 : level)) + attackPower << "-" << 8 + (((level >= 30) ? 30 : level)) + attackPower << " dmg) 2 (" << 2 + (((level >= 30) ? 30 : level)) + attackPower << "-" << 5 + (((level >= 30) ? 30 : level)) + attackPower << " lifesteal) 3 (" << 6 + (((level >= 30) ? 30 : level)) + attackPower << "-" << 11 + (((level >= 30) ? 30 : level)) + attackPower << "dmg) 4 (" << 6 + (((level >= 30) ? 30 : level)) + attackPower << "-" << 9 + (((level >= 30) ? 30 : level)) + attackPower << " heal) 5 (" << 7 + (((level >= 30) ? 30 : level)) + attackPower << "-" << 12 + (((level >= 30) ? 30 : level)) + attackPower << " lifesteal) 7 (Store) 9 (Stats) 10 (Inventory) 0 (Special Skill Info) 0 (Special Skill Info)" << endl;
        }
        else if (level >= 25) {
            cout << "Choose: 1 (" << 4 + (((level >= 30) ? 30 : level)) + attackPower << "-" << 8 + (((level >= 30) ? 30 : level)) + attackPower << " dmg) 2 (" << 2 + (((level >= 30) ? 30 : level)) + attackPower << "-" << 5 + (((level >= 30) ? 30 : level)) + attackPower << " lifesteal) 3 (" << 6 + (((level >= 30) ? 30 : level)) + attackPower << "-" << 11 + (((level >= 30) ? 30 : level)) + attackPower << "dmg) 4 (" << 6 + (((level >= 30) ? 30 : level)) + attackPower << "-" << 9 + (((level >= 30) ? 30 : level)) + attackPower << " heal) 7 (Store) 9 (Stats) 10 (Inventory) 0 (Special Skill Info)" << endl;
        }
        else if (level >= 15) {
            cout << "Choose: 1 (" << 4 + (((level >= 30) ? 30 : level)) + attackPower << "-" << 8 + (((level >= 30) ? 30 : level)) + attackPower << " dmg) 2 (" << 2 + (((level >= 30) ? 30 : level)) + attackPower << "-" << 5 + (((level >= 30) ? 30 : level)) + attackPower << " lifesteal) 3 (" << 6 + (((level >= 30) ? 30 : level)) + attackPower << "-" << 11 + (((level >= 30) ? 30 : level)) + attackPower << "dmg) 7 (Store) 9 (Stats) 10 (Inventory) 0 (Special Skill Info)" << endl;
        }
        else {
            cout << "Choose: 1 (" << 4 + (((level >= 30) ? 30 : level)) + attackPower << "-" << 8 + (((level >= 30) ? 30 : level)) + attackPower << " dmg) 2 (" << 2 + (((level >= 30) ? 30 : level)) + attackPower << "-" << 5 + (((level >= 30) ? 30 : level)) + attackPower << " lifesteal) 7 (Store) 9 (Stats) 10 (Inventory) 0 (Special Skill Info)" << endl;
        }
    }
    if (classtype == 2) { //executioner attack messages |health =15|attackPower=7|lives=1|
        if (executionermove == true) {
  cout << "Choose: 1 (" << 4 + (((level >= 30) ? 30 : level)) + attackPower << "-" << 8 + (((level >= 30) ? 30 : level)) + attackPower << " dmg) 2 (" << 2 + (((level >= 30) ? 30 : level)) + attackPower << "-" << 5 + (((level >= 30) ? 30 : level)) + attackPower << " lifesteal) 3 (" << 6 + (((level >= 30) ? 30 : level)) + attackPower << "-" << 11 + (((level >= 30) ? 30 : level)) + attackPower << "dmg) 4 (" << 6 + (((level >= 30) ? 30 : level)) + attackPower << "-" << 9 + (((level >= 30) ? 30 : level)) + attackPower << " heal) 5 (" << 7 + (((level >= 30) ? 30 : level)) + attackPower << "-" << 12 + (((level >= 30) ? 30 : level)) + attackPower << " lifesteal) 6 (Soul Surge) 7 (Store) 9 (Stats) 10 (Inventory) 0 (Special Skill Info)" << endl;
        }
        else if (level >= 50) {
            cout << "Choose: 1 (" << 4 + (((level >= 30) ? 30 : level)) + attackPower << "-" << 8 + (((level >= 30) ? 30 : level)) + attackPower << " dmg) 2 (" << 2 + (((level >= 30) ? 30 : level)) + attackPower << "-" << 5 + (((level >= 30) ? 30 : level)) + attackPower << " lifesteal) 3 (" << 6 + (((level >= 30) ? 30 : level)) + attackPower << "-" << 11 + (((level >= 30) ? 30 : level)) + attackPower << "dmg) 4 (" << 6 + (((level >= 30) ? 30 : level)) + attackPower << "-" << 9 + (((level >= 30) ? 30 : level)) + attackPower << " heal) 5 (" << 7 + (((level >= 30) ? 30 : level)) + attackPower << "-" << 12 + (((level >= 30) ? 30 : level)) + attackPower << " lifesteal) 7 (Store) 9 (Stats) 10 (Inventory) 0 (Special Skill Info)" << endl;
        }
        else if (level >= 25) {
            cout << "Choose: 1 (" << 4 + (((level >= 30) ? 30 : level)) + attackPower << "-" << 8 + (((level >= 30) ? 30 : level)) + attackPower << " dmg) 2 (" << 2 + (((level >= 30) ? 30 : level)) + attackPower << "-" << 5 + (((level >= 30) ? 30 : level)) + attackPower << " lifesteal) 3 (" << 6 + (((level >= 30) ? 30 : level)) + attackPower << "-" << 11 + (((level >= 30) ? 30 : level)) + attackPower << "dmg) 4 (" << 6 + (((level >= 30) ? 30 : level)) + attackPower << "-" << 9 + (((level >= 30) ? 30 : level)) + attackPower << " heal) 7 (Store) 9 (Stats) 10 (Inventory) 0 (Special Skill Info)" << endl;
        }
        else if (level >= 15) {
            cout << "Choose: 1 (" << 4 + (((level >= 30) ? 30 : level)) + attackPower << "-" << 8 + (((level >= 30) ? 30 : level)) + attackPower << " dmg) 2 (" << 2 + (((level >= 30) ? 30 : level)) + attackPower << "-" << 5 + (((level >= 30) ? 30 : level)) + attackPower << " lifesteal) 3 (" << 6 + (((level >= 30) ? 30 : level)) + attackPower << "-" << 11 + (((level >= 30) ? 30 : level)) + attackPower << "dmg) 7 (Store) 9 (Stats) 10 (Inventory) 0 (Special Skill Info)" << endl;
        }
        else {
            cout << "Choose: 1 (" << 4 + (((level >= 30) ? 30 : level)) + attackPower << "-" << 8 + (((level >= 30) ? 30 : level)) + attackPower << " dmg) 2 (" << 2 + (((level >= 30) ? 30 : level)) + attackPower << "-" << 5 + (((level >= 30) ? 30 : level)) + attackPower << " lifesteal) 7 (Store) 9 (Stats) 10 (Inventory) 0 (Special Skill Info)" << endl;
        }
    }
   if (classtype == 3) { //soulweaver attack messages |health =20|attackPower=3|lives=2|
   if (soulweavermove == true) {
            cout << "Choose: 1 (" << 4 + (((level >= 30) ? 30 : level)) + attackPower << "-" << 8 + (((level >= 30) ? 30 : level)) + attackPower << " dmg) 2 (" << 2 + (((level >= 30) ? 30 : level)) + attackPower << "-" << 5 + (((level >= 30) ? 30 : level)) + attackPower << " lifesteal) 3 (" << 6 + (((level >= 30) ? 30 : level)) + attackPower << "-" << 11 + (((level >= 30) ? 30 : level)) + attackPower << "dmg) 4 (" << 6 + (((level >= 30) ? 30 : level)) + attackPower << "-" << 9 + (((level >= 30) ? 30 : level)) + attackPower << " heal) 5 (" << 7 + (((level >= 30) ? 30 : level)) + attackPower << "-" << 12 + (((level >= 30) ? 30 : level)) + attackPower << " lifesteal) 6 (Fortuitous Gambit) 7 (Store) 9 (Stats) 10 (Inventory) 0 (Special Skill Info)" << endl;
   }
        if (level >= 50) {
            cout << "Choose: 1 (" << 4 + (((level >= 30) ? 30 : level)) + attackPower << "-" << 8 + (((level >= 30) ? 30 : level)) + attackPower << " dmg) 2 (" << 2 + (((level >= 30) ? 30 : level)) + attackPower << "-" << 5 + (((level >= 30) ? 30 : level)) + attackPower << " lifesteal) 3 (" << 6 + (((level >= 30) ? 30 : level)) + attackPower << "-" << 11 + (((level >= 30) ? 30 : level)) + attackPower << "dmg) 4 (" << 6 + (((level >= 30) ? 30 : level)) + attackPower << "-" << 9 + (((level >= 30) ? 30 : level)) + attackPower << " heal) 5 (" << 7 + (((level >= 30) ? 30 : level)) + attackPower << "-" << 12 + (((level >= 30) ? 30 : level)) + attackPower << " lifesteal) 7 (Store) 9 (Stats) 10 (Inventory) 0 (Special Skill Info)" << endl;
        }
        else if (level >= 25) {
            cout << "Choose: 1 (" << 4 + (((level >= 30) ? 30 : level)) + attackPower << "-" << 8 + (((level >= 30) ? 30 : level)) + attackPower << " dmg) 2 (" << 2 + (((level >= 30) ? 30 : level)) + attackPower << "-" << 5 + (((level >= 30) ? 30 : level)) + attackPower << " lifesteal) 3 (" << 6 + (((level >= 30) ? 30 : level)) + attackPower << "-" << 11 + (((level >= 30) ? 30 : level)) + attackPower << "dmg) 4 (" << 6 + (((level >= 30) ? 30 : level)) + attackPower << "-" << 9 + (((level >= 30) ? 30 : level)) + attackPower << " heal) 7 (Store) 9 (Stats) 10 (Inventory) 0 (Special Skill Info)" << endl;
        }
        else if (level >= 15) {
            cout << "Choose: 1 (" << 4 + (((level >= 30) ? 30 : level)) + attackPower << "-" << 8 + (((level >= 30) ? 30 : level)) + attackPower << " dmg) 2 (" << 2 + (((level >= 30) ? 30 : level)) + attackPower << "-" << 5 + (((level >= 30) ? 30 : level)) + attackPower << " lifesteal) 3 (" << 6 + (((level >= 30) ? 30 : level)) + attackPower << "-" << 11 + (((level >= 30) ? 30 : level)) + attackPower << "dmg) 7 (Store) 9 (Stats) 10 (Inventory) 0 (Special Skill Info)" << endl;
        }
        else {
            cout << "Choose: 1 (" << 4 + (((level >= 30) ? 30 : level)) + attackPower << "-" << 8 + (((level >= 30) ? 30 : level)) + attackPower << " dmg) 2 (" << 2 + (((level >= 30) ? 30 : level)) + attackPower << "-" << 5 + (((level >= 30) ? 30 : level)) + attackPower << " lifesteal) 7 (Store) 9 (Stats) 10 (Inventory) 0 (Special Skill Info)" << endl;
        }
    }
    if (classtype == 4) { //warforged engineer attack messages |health =40|attackPower=3|lives=1|
        if (warforgedmove == true) {
            cout << "Choose: 1 (" << 4 + (((level >= 30) ? 30 : level)) + attackPower << "-" << 8 + (((level >= 30) ? 30 : level)) + attackPower << " dmg) 2 (" << 2 + (((level >= 30) ? 30 : level)) + attackPower << "-" << 5 + (((level >= 30) ? 30 : level)) + attackPower << " lifesteal) 3 (" << 6 + (((level >= 30) ? 30 : level)) + attackPower << "-" << 11 + (((level >= 30) ? 30 : level)) + attackPower << "dmg) 4 (" << 6 + (((level >= 30) ? 30 : level)) + attackPower << "-" << 9 + (((level >= 30) ? 30 : level)) + attackPower << " heal) 5 (" << 7 + (((level >= 30) ? 30 : level)) + attackPower << "-" << 12 + (((level >= 30) ? 30 : level)) + attackPower << " lifesteal) 6 (Guardians Respite) 7 (Store) 9 (Stats) 10 (Inventory) 0 (Special Skill Info)" << endl;
        }
        else if (level >= 50) {
            cout << "Choose: 1 (" << 4 + (((level >= 30) ? 30 : level)) + attackPower << "-" << 8 + (((level >= 30) ? 30 : level)) + attackPower << " dmg) 2 (" << 2 + (((level >= 30) ? 30 : level)) + attackPower << "-" << 5 + (((level >= 30) ? 30 : level)) + attackPower << " lifesteal) 3 (" << 6 + (((level >= 30) ? 30 : level)) + attackPower << "-" << 11 + (((level >= 30) ? 30 : level)) + attackPower << "dmg) 4 (" << 6 + (((level >= 30) ? 30 : level)) + attackPower << "-" << 9 + (((level >= 30) ? 30 : level)) + attackPower << " heal) 5 (" << 7 + (((level >= 30) ? 30 : level)) + attackPower << "-" << 12 + (((level >= 30) ? 30 : level)) + attackPower << " lifesteal) 7 (Store) 9 (Stats) 10 (Inventory) 0 (Special Skill Info)" << endl;
        }
        else if (level >= 25) {
            cout << "Choose: 1 (" << 4 + (((level >= 30) ? 30 : level)) + attackPower << "-" << 8 + (((level >= 30) ? 30 : level)) + attackPower << " dmg) 2 (" << 2 + (((level >= 30) ? 30 : level)) + attackPower << "-" << 5 + (((level >= 30) ? 30 : level)) + attackPower << " lifesteal) 3 (" << 6 + (((level >= 30) ? 30 : level)) + attackPower << "-" << 11 + (((level >= 30) ? 30 : level)) + attackPower << "dmg) 4 (" << 6 + (((level >= 30) ? 30 : level)) + attackPower << "-" << 9 + (((level >= 30) ? 30 : level)) + attackPower << " heal) 7 (Store) 9 (Stats) 10 (Inventory) 0 (Special Skill Info)" << endl;
        }
        else if (level >= 15) {
            cout << "Choose: 1 (" << 4 + (((level >= 30) ? 30 : level)) + attackPower << "-" << 8 + (((level >= 30) ? 30 : level)) + attackPower << " dmg) 2 (" << 2 + (((level >= 30) ? 30 : level)) + attackPower << "-" << 5 + (((level >= 30) ? 30 : level)) + attackPower << " lifesteal) 3 (" << 6 + (((level >= 30) ? 30 : level)) + attackPower << "-" << 11 + (((level >= 30) ? 30 : level)) + attackPower << "dmg) 7 (Store) 9 (Stats) 10 (Inventory) 0 (Special Skill Info)" << endl;
        }
        else {
            cout << "Choose: 1 (" << 4 + (((level >= 30) ? 30 : level)) + attackPower << "-" << 8 + (((level >= 30) ? 30 : level)) + attackPower << " dmg) 2 (" << 2 + (((level >= 30) ? 30 : level)) + attackPower << "-" << 5 + (((level >= 30) ? 30 : level)) + attackPower << " lifesteal) 7 (Store) 9 (Stats) 10 (Inventory) 0 (Special Skill Info)" << endl;
        }
    }
    if (classtype == 5) { //dreadnought attack messages |health =50|attackPower=1|lives=1|
        if (dreadnoughtmove == true) {
            cout << "Choose: 1 (" << 4 + (((level >= 30) ? 30 : level)) + attackPower << "-" << 8 + (((level >= 30) ? 30 : level)) + attackPower << " dmg) 2 (" << 2 + (((level >= 30) ? 30 : level)) + attackPower << "-" << 5 + (((level >= 30) ? 30 : level)) + attackPower << " lifesteal) 3 (" << 6 + (((level >= 30) ? 30 : level)) + attackPower << "-" << 11 + (((level >= 30) ? 30 : level)) + attackPower << "dmg) 4 (" << 6 + (((level >= 30) ? 30 : level)) + attackPower << "-" << 9 + (((level >= 30) ? 30 : level)) + attackPower << " heal) 5 (" << 7 + (((level >= 30) ? 30 : level)) + attackPower << "-" << 12 + (((level >= 30) ? 30 : level)) + attackPower << " lifesteal) 6 (Healing Remedy) 7 (Store) 9 (Stats) 10 (Inventory) 0 (Special Skill Info)" << endl;
        }
        else if (level >= 50) {
            cout << "Choose: 1 (" << 4 + (((level >= 30) ? 30 : level)) + attackPower << "-" << 8 + (((level >= 30) ? 30 : level)) + attackPower << " dmg) 2 (" << 2 + (((level >= 30) ? 30 : level)) + attackPower << "-" << 5 + (((level >= 30) ? 30 : level)) + attackPower << " lifesteal) 3 (" << 6 + (((level >= 30) ? 30 : level)) + attackPower << "-" << 11 + (((level >= 30) ? 30 : level)) + attackPower << "dmg) 4 (" << 6 + (((level >= 30) ? 30 : level)) + attackPower << "-" << 9 + (((level >= 30) ? 30 : level)) + attackPower << " heal) 5 (" << 7 + (((level >= 30) ? 30 : level)) + attackPower << "-" << 12 + (((level >= 30) ? 30 : level)) + attackPower << " lifesteal) 7 (Store) 9 (Stats) 10 (Inventory) 0 (Special Skill Info)" << endl;
        }
        else if (level >= 25) {
            cout << "Choose: 1 (" << 4 + (((level >= 30) ? 30 : level)) + attackPower << "-" << 8 + (((level >= 30) ? 30 : level)) + attackPower << " dmg) 2 (" << 2 + (((level >= 30) ? 30 : level)) + attackPower << "-" << 5 + (((level >= 30) ? 30 : level)) + attackPower << " lifesteal) 3 (" << 6 + (((level >= 30) ? 30 : level)) + attackPower << "-" << 11 + (((level >= 30) ? 30 : level)) + attackPower << "dmg) 4 (" << 6 + (((level >= 30) ? 30 : level)) + attackPower << "-" << 9 + (((level >= 30) ? 30 : level)) + attackPower << " heal) 7 (Store) 9 (Stats) 10 (Inventory) 0 (Special Skill Info)" << endl;
        }
        else if (level >= 15) {
            cout << "Choose: 1 (" << 4 + (((level >= 30) ? 30 : level)) + attackPower << "-" << 8 + (((level >= 30) ? 30 : level)) + attackPower << " dmg) 2 (" << 2 + (((level >= 30) ? 30 : level)) + attackPower << "-" << 5 + (((level >= 30) ? 30 : level)) + attackPower << " lifesteal) 3 (" << 6 + (((level >= 30) ? 30 : level)) + attackPower << "-" << 11 + (((level >= 30) ? 30 : level)) + attackPower << "dmg) 7 (Store) 9 (Stats) 10 (Inventory) 0 (Special Skill Info)" << endl;
        }
        else {
            cout << "Choose: 1 (" << 4 + (((level >= 30) ? 30 : level)) + attackPower << "-" << 8 + (((level >= 30) ? 30 : level)) + attackPower << " dmg) 2 (" << 2 + (((level >= 30) ? 30 : level)) + attackPower << "-" << 5 + (((level >= 30) ? 30 : level)) + attackPower << " lifesteal) 7 (Store) 9 (Stats) 10 (Inventory) 0 (Special Skill Info)" << endl;
        }
    }
     if (classtype == 6) { //trickster attack messages |health =20|attackPower=5|lives=1|
        if (trickstermove == true) {
            cout << "Choose: 1 (" << 4 + (((level >= 30) ? 30 : level)) + attackPower << "-" << 8 + (((level >= 30) ? 30 : level)) + attackPower << " dmg) 2 (" << 2 + (((level >= 30) ? 30 : level)) + attackPower << "-" << 5 + (((level >= 30) ? 30 : level)) + attackPower << " lifesteal) 3 (" << 6 + (((level >= 30) ? 30 : level)) + attackPower << "-" << 11 + (((level >= 30) ? 30 : level)) + attackPower << "dmg) 4 (" << 6 + (((level >= 30) ? 30 : level)) + attackPower << "-" << 9 + (((level >= 30) ? 30 : level)) + attackPower << " heal) 5 (" << 7 + (((level >= 30) ? 30 : level)) + attackPower << "-" << 12 + (((level >= 30) ? 30 : level)) + attackPower << " lifesteal) 6 (Confuse) 7 (Store) 9 (Stats) 10 (Inventory) 0 (Special Skill Info)" << endl;
        }
        else if (level >= 50) {
            cout << "Choose: 1 (" << 4 + (((level >= 30) ? 30 : level)) + attackPower << "-" << 8 + (((level >= 30) ? 30 : level)) + attackPower << " dmg) 2 (" << 2 + (((level >= 30) ? 30 : level)) + attackPower << "-" << 5 + (((level >= 30) ? 30 : level)) + attackPower << " lifesteal) 3 (" << 6 + (((level >= 30) ? 30 : level)) + attackPower << "-" << 11 + (((level >= 30) ? 30 : level)) + attackPower << "dmg) 4 (" << 6 + (((level >= 30) ? 30 : level)) + attackPower << "-" << 9 + (((level >= 30) ? 30 : level)) + attackPower << " heal) 5 (" << 7 + (((level >= 30) ? 30 : level)) + attackPower << "-" << 12 + (((level >= 30) ? 30 : level)) + attackPower << " lifesteal) 7 (Store) 9 (Stats) 10 (Inventory) 0 (Special Skill Info)" << endl;
        }
        else if (level >= 25) {
            cout << "Choose: 1 (" << 4 + (((level >= 30) ? 30 : level)) + attackPower << "-" << 8 + (((level >= 30) ? 30 : level)) + attackPower << " dmg) 2 (" << 2 + (((level >= 30) ? 30 : level)) + attackPower << "-" << 5 + (((level >= 30) ? 30 : level)) + attackPower << " lifesteal) 3 (" << 6 + (((level >= 30) ? 30 : level)) + attackPower << "-" << 11 + (((level >= 30) ? 30 : level)) + attackPower << "dmg) 4 (" << 6 + (((level >= 30) ? 30 : level)) + attackPower << "-" << 9 + (((level >= 30) ? 30 : level)) + attackPower << " heal) 7 (Store) 9 (Stats) 10 (Inventory) 0 (Special Skill Info)" << endl;
        }
        else if (level >= 15) {
            cout << "Choose: 1 (" << 4 + (((level >= 30) ? 30 : level)) + attackPower << "-" << 8 + (((level >= 30) ? 30 : level)) + attackPower << " dmg) 2 (" << 2 + (((level >= 30) ? 30 : level)) + attackPower << "-" << 5 + (((level >= 30) ? 30 : level)) + attackPower << " lifesteal) 3 (" << 6 + (((level >= 30) ? 30 : level)) + attackPower << "-" << 11 + (((level >= 30) ? 30 : level)) + attackPower << "dmg) 7 (Store) 9 (Stats) 10 (Inventory) 0 (Special Skill Info)" << endl;
        }
        else {
            cout << "Choose: 1 (" << 4 + (((level >= 30) ? 30 : level)) + attackPower << "-" << 8 + (((level >= 30) ? 30 : level)) + attackPower << " dmg) 2 (" << 2 + (((level >= 30) ? 30 : level)) + attackPower << "-" << 5 + (((level >= 30) ? 30 : level)) + attackPower << " lifesteal) 7 (Store) 9 (Stats) 10 (Inventory) 0 (Special Skill Info)" << endl;
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
            x = r() % 5 + 4 + (((level >= 30) ? 30 : level)) + attackPower; //normal attack
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
            x = r() % 5 + 4 + (((level >= 30) ? 30 : level)) + attackPower; //normal attack
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
            x = r() % 4 + 2 + ((level >= 30) ? 30 : level) + attackPower;
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
            x = r() % 4 + 2 + ((level >= 30) ? 30 : level) + attackPower;
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
            x = r() % 6 + 6 + ((level >= 30) ? 30 : level) + attackPower; //normal attack
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
            x = r() % 6 + 6 + ((level >= 30) ? 30 : level) + attackPower;
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
            x = r() % 4 + 6 + ((level >= 30) ? 30 : level);
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
            x = r() % 4 + 6 + ((level >= 30) ? 30 : level);
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
            x = r() % 6 + 7 + ((level >= 30) ? 30 : level) + attackPower;
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
            x = r() % 6 + 7 + ((level >= 30) ? 30 : level) + attackPower;
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
                x = r() % 4 + 4 + ((level >= 30) ? 30 : level) + attackPower;
                Target->takeDmg(x);
                cout << name << ", you dealt " << x << " damage." << endl;
            }
            else if (maybeaddlife > 5 && maybeaddlife <= 40) {
                x = r() % 4 + 4 + ((level >= 30) ? 30 : level) + attackPower;
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
            x = r() % 7 + 8 + ((level >= 30) ? 30 : level) + attackPower;
            Target->takeDmg(x);
            cout << name << ", you dealt " << x << " damage." << endl;
            break;
        }
        else if (dreadnoughtmove == true) {
            x = r() % 7 + 10 + ((level >= 30) ? 30 : level);
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
            x = r() % 11 + 7 + ((level >= 30) ? 30 : level) + attackPower;
            int critrate;
            critrate = r() % 100 + 1;
            if (critrate <= 20) {
                x = x * 1.5;
            }
            h = x * .77;
            Target->takeDmg(x);
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
    case 7:
        if (storetracker >= 2) {
            cout << "Welcome to my store, you are welcome to browse my wares..." << endl;
            cout << "Spelling does count, make sure to be precise in my shop. **NOTS** Only Forge Hammer, Invisibility Potion and Molotov can be bought more than once." << endl;
            cout << "You currently have " << Goldloom << " Goldloom to spend." << endl << endl;
            int shop1, shop2, shop3;
            shop1 = r() % 5 + 1;
            shop2 = r() % 5 + 6;
            shop3 = r() % 4 + 11;
            if (shop1 == 1) {
                cout << "Armor Plating - 100 - A mysterious plating that enhances armor if combined with a forgehammer..." << endl << endl;
            }
            else if (shop1 == 2) {
                cout << "Sharpening Stone - 100 - A space stone that enhances weapons if combined with a forgehammer..." << endl << endl;
            }
            else if (shop1 == 3) {
                cout << "Forge Hammer - 50 -Used with other items to do various things." << endl << endl;
            }
            else if (shop1 == 4) {
                cout << "Lightning Shard - 200 - When combined with a forgehammer something mysterious will happen to your item..." << endl << endl;
            }
            else if (shop1 == 5) {
                cout << "Invisibility Potion - 400 - Used to skip a battle when you find it necessary.(Can't be used on bosses and you wont recieve rewards from fight)" << endl << endl;
            }
            if (shop2 == 6) {
                cout << "Travelers Backpack - 250 - When you have this item, potions you recieve are now saved and available when you want them, instead of being instantly used." << endl << endl;
            }
            else if (shop2 == 7) {
                cout << "Companion - 500 - This little guy may look innocent but he isn't. Causes random events to happen, good or bad..." << endl << endl;
            }
            else if (shop2 == 8) {
                cout << "Flaming Longsword - 250 - A weapon not as good as excalibur, but a weapon nontheless." << endl << endl;
            }
            else if (shop2 == 9) {
                cout << "Molotov - 250 - Throw this at an enemy to deal 60% of their max health." << endl << endl;
            }
            else if (shop2 == 10) {
                cout << "Dragonscale Chestplate - 250 - A chestplate only wore by the gods..." << endl << endl;
            }
            if (shop3 == 11) {
                cout << "Maxhealth Upgrade - 300 - This item can only be purchases once and increases max health by 50." << endl << endl;
            }
            else if (shop3 == 12) {
                cout << "Healing Potion - 150 - Heals you to max hp (instant use)" << endl << endl;
            }
            else if (shop3 == 13) {
                cout << "Glass Shoes - 250 - I think cinderella dropped something." << endl << endl;
            }
            else if (shop3 == 14) {
                cout << "Mystic Helmet - 250 - A helmet that can protect you from anything that falls on your head." << endl << endl;
            }
            cout << "What would you like to buy this visit?" << endl << endl;
            cin >> ws;
            getline(cin, purchasechoice);
            cout << endl;
            if (purchasechoice == "Armor Plating" || purchasechoice == "Armor plating" || purchasechoice == "armor plating" && shop1 == 1) {
                if (Goldloom >= 100) {
                    cout << "You bought Armor Plating!" << endl;
                    armorupgrade = true;
                    Goldloom -= 100;
                    storetracker = 0;
                    checkitems();
                }
                else if (Goldloom < 100) {
                    cout << "You are too broke for this item and have lost access to the shop for this round." << endl;
                    storetracker -= 1;
                }
            }
            else if (purchasechoice == "Sharpening Stone" || purchasechoice == "Sharpening stone" || purchasechoice == "sharpening stone" && shop1 == 2) {
                if (Goldloom >= 100) {
                    cout << "You bought a Sharpening Stone!" << endl;
                    weaponupgrade = true;
                    Goldloom -= 100;
                    storetracker = 0;
                    checkitems();
                }
                else if (Goldloom < 100) {
                    cout << "You are too broke for this item and have lost access to the shop for this round." << endl;
                    storetracker -= 1;
                }
            }
            else if (purchasechoice == "Forge Hammer" || purchasechoice == "Forge hammer" || purchasechoice == "forge hammer" && shop1 == 3) {
                if (Goldloom >= 50) {
                    cout << "You bought a Forge Hammer!" << endl;
                    forgehammer += 1;
                    Goldloom -= 50;
                    storetracker = 0;
                    checkitems();
                }
                else if (Goldloom < 50) {
                    cout << "You are too broke for this item and have lost access to the shop for this round." << endl;
                    storetracker -= 1;
                }
            }
            else if (purchasechoice == "Lightning Shard" || purchasechoice == "Lightning shard" || purchasechoice == "lightning shard" && shop1 == 4) {
                if (Goldloom >= 200) {
                    cout << "You bought a Lightning Shard!" << endl;
                    lightningshard = true;
                    Goldloom -= 200;
                    storetracker = 0;
                    checkitems();
                }
                else if (Goldloom < 200) {
                    cout << "You are too broke for this item and have lost access to the shop for this round." << endl;
                    storetracker -= 1;
                }
            }
            else if (purchasechoice == "Invisibility Potion" || purchasechoice == "Invisibility potion" || purchasechoice == "invisibility potion" && shop1 == 5) {
                if (Goldloom >= 400) {
                    cout << "You bought an Invisibility Potion!" << endl;
                    invisibilitypotion += 1;
                    Goldloom -= 400;
                    storetracker = 0;
                    checkitems();
                }
                else if (Goldloom < 400) {
                    cout << "You are too broke for this item and have lost access to the shop for this round." << endl;
                    storetracker -= 1;
                }
            }
            else if (purchasechoice == "Travelers Backpack" || purchasechoice == "Travelers backpack" || purchasechoice == "travelers backpack" && shop2 == 6) {
                if (Goldloom >= 250) {
                    cout << "You bought A Travelers Backpack!" << endl;
                    travelersbackpack = true;
                    Goldloom -= 250;
                    storetracker = 0;
                    checkitems();
                }
                else if (Goldloom < 250) {
                    cout << "You are too broke for this item and have lost access to the shop for this round." << endl;
                    storetracker -= 1;
                }
            }
            else if (purchasechoice == "Companion" || purchasechoice == "companion" && shop2 == 7) {
                if (Goldloom >= 500) {
                    cout << "You bought your own special Companion!" << endl;
                    playerpet = true;
                    Goldloom -= 500;
                    storetracker = 0;
                    checkitems();
                }
                else if (Goldloom < 500) {
                    cout << "You are too broke for this item and have lost access to the shop for this round." << endl;
                    storetracker -= 1;
                }
            }
            else if (purchasechoice == "Flaming Longsword" || purchasechoice == "Flaming longsword" || purchasechoice == "flaming longsword" && shop2 == 8) {
                if (Goldloom >= 250) {
                    cout << "You bought your very own Flaming Longsword!" << endl;
                    flaminglongsword = true;
                    Goldloom -= 250;
                    storetracker = 0;
                    checkitems();
                }
                else if (Goldloom < 250) {
                    cout << "You are too broke for this item and have lost access to the shop for this round." << endl;
                    storetracker -= 1;
                }
            }
            else if (purchasechoice == "Molotov" || purchasechoice == "molotov" && shop2 == 9) {
                if (Goldloom >= 250) {
                    cout << "You bought a Molotov!" << endl;
                    molotov += 1;
                    Goldloom -= 250;
                    storetracker = 0;
                    checkitems();
                }
                else if (Goldloom < 250) {
                    cout << "You are too broke for this item and have lost access to the shop for this round." << endl;
                    storetracker -= 1;
                }
            }
            else if (purchasechoice == "Dragonscale Chestplate" || purchasechoice == "Dragonscale chestplate" || purchasechoice == "dragonscale chestplate" && shop2 == 10) {
                if (Goldloom >= 250) {
                    cout << "You bought a Dragonscale Chestplate!" << endl;
                    dragonscalechestplate = true;
                    Goldloom -= 250;
                    storetracker = 0;
                    checkitems();
                }
                else if (Goldloom < 250) {
                    cout << "You are too broke for this item and have lost access to the shop for this round." << endl;
                    storetracker -= 1;
                }
            }
            else if (purchasechoice == "Maxhealth Upgrade" || purchasechoice == "Maxhealth upgrade" || purchasechoice == "maxhealth upgrade" && shop3 == 11) {
                if (Goldloom >= 300) {
                    cout << "You bought a Maxhealth upgrade!" << endl;
                    maxhealthupgradeitem = true;
                    Goldloom -= 300;
                    storetracker = 0;
                    checkitems();
                }
                else if (Goldloom < 300) {
                    cout << "You are too broke for this item and have lost access to the shop for this round." << endl;
                    storetracker -= 1;
                }
            }
            else if (purchasechoice == "Healing Potion" || purchasechoice == "Healing potion" || purchasechoice == "healing potion" && shop3 == 12) {
                if (Goldloom >= 150) {
                    cout << "You bought a Healing Potion!" << endl;
                    healingpotionitem = true;
                    Goldloom -= 150;
                    storetracker = 0;
                    checkitems();
                }
                else if (Goldloom < 150) {
                    cout << "You are too broke for this item and have lost access to the shop for this round." << endl;
                    storetracker -= 1;
                }
            }
            else if (purchasechoice == "Glass Shoes" || purchasechoice == "Glass shoes" || purchasechoice == "glass shoes" && shop3 == 13) {
                if (Goldloom >= 250) {
                    cout << "You bought the lost glass shoe!" << endl;
                    glassshoes = true;
                    Goldloom -= 250;
                    storetracker = 0;
                    checkitems();
                }
                else if (Goldloom < 250) {
                    cout << "You are too broke for this item and have lost access to the shop for this round." << endl;
                    storetracker -= 1;
                }
            }
            else if (purchasechoice == "Mystic Helmet" || purchasechoice == "Mystic helmet" || purchasechoice == "mystic helmet" && shop3 == 14) {
                if (Goldloom >= 250) {
                    cout << "You bought a Mystic Helmet!" << endl;
                    mystichelmet = true;
                    Goldloom -= 250;
                    storetracker = 0;
                    checkitems();
                }
                else if (Goldloom < 250) {
                    cout << "You are too broke for this item and have lost access to the shop for this round." << endl;
                    storetracker -= 1;
                }
            }
            else {
                cout << "That item does not exist or is not for sale currently." << endl;
                storetracker -= 1;
            }
        }
        else {
            cout << endl << "-The shop is currently being restocked.-" << endl;
        }
        cout << endl;
        attack(Target);
        break;
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
        cout << "--" << Goldloom << " Store Currency--" << endl;
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
        cout << "------------------------------------------------" << endl;
        if (accuratesword == true) {
            cout << "Accurate Sword (No more slipping!)" << endl;
        }
        else if (helmet == true) {
            cout << "Helmet (+7 defence|+5 maxhealth)" << endl;
        }
        else if (boots == true) {
            cout << "Boots (+5 defence|+4 maxhealth)" << endl;
        }
        else if (chestplate == true) {
            cout << "Chestplate (+10 defence|+8 maxhealth)" << endl;
        }
        else if (Excalibur == true) {
            cout << "Excalibur (+14 attack)" << endl;
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
        else if (glassshoes == true) {
            cout << "Glass Shoes (+7 defence|+6 maxhealth)" << endl;
        }
        else if (mystichelmet == true) {
            cout << "Mystic Helmet (+9 defence|+8 maxhealth)" << endl;
        }
        else if (dragonscalechestplate == true) {
            cout << "Dragonscale Chestplate (+11 defence|+14 maxhealth)" << endl;
        }
        else if (flaminglongsword == true) {
            cout << "Flaming Longsword (+11 attack)" << endl;
        }
        else if (molotov > 0) {
            cout << molotov << " Molotov (60% max health dmg)" << endl;
        }
        else if (forgehammer > 0) {
            cout << forgehammer << " Forge Hammer (Used with other items to enhance artillery)" << endl;
        }
        else if (travelersbackpack == true) {
            cout << "Travelers Backpack (Allows you to hold potions)" << endl;
        }
        else if (playerpet == true) {
            cout << "Companion (Does something random every attack)" << endl;
        }
        else if (invisibilitypotion > 0) {
            cout << invisibilitypotion << " Invisibility Potion (Skip a battle)" << endl;
        }
        else if (armorupgrade == true) {
            cout << "Armor Plating (Used to upgrade armor)" << endl;
        }
        else if (weaponupgrade == true) {
            cout << "Sharpening Stone (Used to upgrade weapons)" << endl;
        }
        else if (lightningshard == true) {
            cout << "Lightning Shard (Used to upgrade armor/weapons)" << endl;
        }
        else if (healthtonicitem > 0) {
            cout << healthtonicitem << "Healh Tonic (Heal 100,75,50 or 25 based on level)" << endl;
        }
        else if (shield == false && levelupgrade == false && superiorleveltonic == false && defenceupgrade == false && godarmor == false && superpotion == false && attackupgrade == false && leveltonic == false && Sword == false && Knife == false && Excalibur == false && accuratesword == false && helmet == false && chestplate == false && boots == false && maxhealthtracker == 0 && tracklevelpotion == 0 && tracksuperiorlevelpotion == 0 && tracksuperpotion == 0 && glassshoes == false && flaminglongsword == false && dragonscalechestplate == false && mystichelmet == false && molotov == 0 && forgehammer == 0 && playerpet == false && travelersbackpack == false && healthtonicitem == 0) {
            cout << "You have no items yet." << endl;
            cout << "------------------------------------------------" << endl;
            attack(Target);
            break;
        }
        cout << "------------------------------------------------" << endl;
        cout << endl;
        cout << "Are there any items you would like to use? Y?N" << endl;
        cin >> ws;
        getline(cin, yesnobackpack);
        if (yesnobackpack == "Yes" || yesnobackpack == "yes" || yesnobackpack == "y" || yesnobackpack == "Y") {
            cout << "Which item would you like to use?" << endl;
            string itemuse;
            cin >> ws;
            getline(cin, itemuse);
            if (itemuse == "Health Tonic" || itemuse == "Health tonic" || itemuse == "health tonic") {
                cout << "You used a Health Tonic!" << endl;
                itemusehealthtonic();
            }
            else if (itemuse == "Invisibility Potion" || itemuse == "Invisibility potion" || itemuse == "invisibility potion") {
                cout << "You used an Invisibility Potion!" << endl;
                itemuseinvispotion();
            }
        }
        else if (yesnobackpack == "No" || yesnobackpack == "no" || yesnobackpack == "n" || yesnobackpack == "N") {
            cout << "Then we shall move on." << endl << endl;
        }
        else {
            cout << "Invalid Answer, try again." << endl << endl;
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