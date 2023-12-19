#include "Player.h"
#include <iostream>
#include <random>
using namespace std;

Player::Player(string n2, int maxh2, int hp2, int atk2, int df2, int lvl2, int live2) {
    name = n2;
    maxhealth = maxh2;
    health = hp2;
    attackPower = atk2;
    defence = df2;
    baselevel = lvl2;
    lives = live2;
}

void Player::playerclassexecutioner() {
    health -= 10;
    attackPower += 3;
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
    if (Knife == true) {
        int x = 0;
             if (x == 0) {
                attackPower += 2;
                x += 1;
      }
    }
    if (Sword == true) {
        int x = 0;
              if (x == 0) {
                attackPower += 4.5;
                x += 1;
        }
    }
    if (leveltonic == true) {
        level += 10;
        leveltonic = false;
    }
    if (superiorleveltonic == true) {
        level += 15;
        superiorleveltonic = false;
    }
    if (superpotion == true) {
        level += 15;
        attackPower += 6;
        superpotion = false;
    }
    if (healthtonic == true) {
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
    if (helmet == true) {
        int x = 0;
             if (x == 0) {
            defence += 4;
            maxhealth += 5;
            x += 1;
        }
    }
    if (chestplate == true) {
            int x = 0;
                if (x == 0) {
                defence += 7;
                maxhealth += 8;
                x += 1;
        }
    }
    if (boots == true) {
        int x = 0;
        if (x == 0) {
        defence += 3;
        maxhealth += 4;
        x += 1;
        }
    }
    if (shield == true) {
        int x = 0;
        if (x == 0) {
             defence += 10;
             x += 1;
        }
    }
    if (godarmor == true) {
        int x = 0;
        if (x == 0) {
            defence += 20;
            maxhealth += 12;
            x += 1;
        }
    }
    if (defenceupgrade == true) {
        int x = 0;
        if (x == 0) {
            defence += 10;
            x += 1;
        }
    }
    if (maxhealthupgrade == true) {
        maxhealthtracker += 1;
        Character* setmaxhealth();
        health += 50;
        maxhealthupgrade = false;
    }
    if (attackupgrade == true) {
        attackPower += 10;
        attackupgrade = false;
    }
    if (levelupgrade == true) {
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
        if (level >= 50) {
            cout << "Choose: 1 (" << 4 + (level % 31) + attackPower << "-" << 8 + (level % 31) + attackPower << "dmg) 2 (" << 2 + (level % 31) + attackPower << "-" << 5 + (level % 31) + attackPower << " lifesteal) 3 (" << 6 + (level % 31) + attackPower << "-" << 11 + (level % 31) + attackPower << "dmg) 4 (" << 6 + (level % 31) + attackPower << "-" << 9 + (level % 31) + attackPower << " heal) 5 (" << 7 + (level % 31) + attackPower << "-" << 12 + (level % 31) + attackPower << " lifesteal) 9 (Stat page) 0 (Inventory)" << endl;
        }
        else if (level >= 25) {
            cout << "Choose: 1 (" << 4 + (level % 31) + attackPower << "-" << 8 + (level % 31) + attackPower << "dmg) 2 (" << 2 + (level % 31) + attackPower << "-" << 5 + (level % 31) + attackPower << " lifesteal) 3 (" << 6 + (level % 31) + attackPower << "-" << 11 + (level % 31) + attackPower << "dmg) 4 (" << 6 + (level % 31) + attackPower << "-" << 9 + (level % 31) + attackPower << " heal) 9 (Stat page) 0 (Inventory)" << endl;
        }
        else if (level >= 15) {
            cout << "Choose: 1 (" << 4 + (level % 31) + attackPower << "-" << 8 + (level % 31) + attackPower << "dmg) 2 (" << 2 + (level % 31) + attackPower << "-" << 5 + (level % 31) + attackPower << " lifesteal) 3 (" << 6 + (level % 31) + attackPower << "-" << 11 + (level % 31) + attackPower << "dmg) 9 (Stat page) 0 (Inventory)" << endl;
        }
        else {
            cout << "Choose: 1 (" << 4 + (level % 31) + attackPower << "-" << 8 + (level % 31) + attackPower << "dmg) 2 (" << 2 + (level % 31) + attackPower << "-" << 5 + (level % 31) + attackPower << " lifesteal) 9 (Stat page) 0 (Inventory)" << endl;
        }
    }
    if (classtype == 2) { //executioner attack messages |health =15|attackPower=7|lives=1|
        if (level >= 50) {
            cout << "Choose: 1 (" << 4 + (level % 31) + attackPower << "-" << 8 + (level % 31) + attackPower << "dmg) 2 (" << 2 + (level % 31) + attackPower << "-" << 5 + (level % 31) + attackPower << " lifesteal) 3 (" << 6 + (level % 31) + attackPower << "-" << 11 + (level % 31) + attackPower << "dmg) 4 (" << 6 + (level % 31) + attackPower << "-" << 9 + (level % 31) + attackPower << " heal) 5 (" << 7 + (level % 31) + attackPower << "-" << 12 + (level % 31) + attackPower << " lifesteal) 9 (Stat page) 0 (Inventory)" << endl;
        }
        else if (level >= 25) {
            cout << "Choose: 1 (" << 4 + (level % 31) + attackPower << "-" << 8 + (level % 31) + attackPower << "dmg) 2 (" << 2 + (level % 31) + attackPower << "-" << 5 + (level % 31) + attackPower << " lifesteal) 3 (" << 6 + (level % 31) + attackPower << "-" << 11 + (level % 31) + attackPower << "dmg) 4 (" << 6 + (level % 31) + attackPower << "-" << 9 + (level % 31) + attackPower << " heal) 9 (Stat page) 0 (Inventory)" << endl;
        }
        else if (level >= 15) {
            cout << "Choose: 1 (" << 4 + (level % 31) + attackPower << "-" << 8 + (level % 31) + attackPower << "dmg) 2 (" << 2 + (level % 31) + attackPower << "-" << 5 + (level % 31) + attackPower << " lifesteal) 3 (" << 6 + (level % 31) + attackPower << "-" << 11 + (level % 31) + attackPower << "dmg) 9 (Stat page) 0 (Inventory)" << endl;
        }
        else {
            cout << "Choose: 1 (" << 4 + (level % 31) + attackPower << "-" << 8 + (level % 31) + attackPower << "dmg) 2 (" << 2 + (level % 31) + attackPower << "-" << 5 + (level % 31) + attackPower << " lifesteal) 9 (Stat page) 0 (Inventory)" << endl;
        }
    }
   if (classtype == 3) { //soulweaver attack messages |health =20|attackPower=3|lives=2|
        if (level >= 50) {
            cout << "Choose: 1 (" << 4 + (level % 31) + attackPower << "-" << 8 + (level % 31) + attackPower << "dmg) 2 (" << 2 + (level % 31) + attackPower << "-" << 5 + (level % 31) + attackPower << " lifesteal) 3 (" << 6 + (level % 31) + attackPower << "-" << 11 + (level % 31) + attackPower << "dmg) 4 (" << 6 + (level % 31) + attackPower << "-" << 9 + (level % 31) + attackPower << " heal) 5 (" << 7 + (level % 31) + attackPower << "-" << 12 + (level % 31) + attackPower << " lifesteal) 9 (Stat page) 0 (Inventory)" << endl;
        }
        else if (level >= 25) {
            cout << "Choose: 1 (" << 4 + (level % 31) + attackPower << "-" << 8 + (level % 31) + attackPower << "dmg) 2 (" << 2 + (level % 31) + attackPower << "-" << 5 + (level % 31) + attackPower << " lifesteal) 3 (" << 6 + (level % 31) + attackPower << "-" << 11 + (level % 31) + attackPower << "dmg) 4 (" << 6 + (level % 31) + attackPower << "-" << 9 + (level % 31) + attackPower << " heal) 9 (Stat page) 0 (Inventory)" << endl;
        }
        else if (level >= 15) {
            cout << "Choose: 1 (" << 4 + (level % 31) + attackPower << "-" << 8 + (level % 31) + attackPower << "dmg) 2 (" << 2 + (level % 31) + attackPower << "-" << 5 + (level % 31) + attackPower << " lifesteal) 3 (" << 6 + (level % 31) + attackPower << "-" << 11 + (level % 31) + attackPower << "dmg) 9 (Stat page) 0 (Inventory)" << endl;
        }
        else {
            cout << "Choose: 1 (" << 4 + (level % 31) + attackPower << "-" << 8 + (level % 31) + attackPower << "dmg) 2 (" << 2 + (level % 31) + attackPower << "-" << 5 + (level % 31) + attackPower << " lifesteal) 9 (Stat page) 0 (Inventory)" << endl;
        }
    }
    if (classtype == 4) { //warforged engineer attack messages |health =40|attackPower=3|lives=1|
        if (level >= 50) {
            cout << "Choose: 1 (" << 4 + (level % 31) + attackPower << "-" << 8 + (level % 31) + attackPower << "dmg) 2 (" << 2 + (level % 31) + attackPower << "-" << 5 + (level % 31) + attackPower << " lifesteal) 3 (" << 6 + (level % 31) + attackPower << "-" << 11 + (level % 31) + attackPower << "dmg) 4 (" << 6 + (level % 31) + attackPower << "-" << 9 + (level % 31) + attackPower << " heal) 5 (" << 7 + (level % 31) + attackPower << "-" << 12 + (level % 31) + attackPower << " lifesteal) 9 (Stat page) 0 (Inventory)" << endl;
        }
        else if (level >= 25) {
            cout << "Choose: 1 (" << 4 + (level % 31) + attackPower << "-" << 8 + (level % 31) + attackPower << "dmg) 2 (" << 2 + (level % 31) + attackPower << "-" << 5 + (level % 31) + attackPower << " lifesteal) 3 (" << 6 + (level % 31) + attackPower << "-" << 11 + (level % 31) + attackPower << "dmg) 4 (" << 6 + (level % 31) + attackPower << "-" << 9 + (level % 31) + attackPower << " heal) 9 (Stat page) 0 (Inventory)" << endl;
        }
        else if (level >= 15) {
            cout << "Choose: 1 (" << 4 + (level % 31) + attackPower << "-" << 8 + (level % 31) + attackPower << "dmg) 2 (" << 2 + (level % 31) + attackPower << "-" << 5 + (level % 31) + attackPower << " lifesteal) 3 (" << 6 + (level % 31) + attackPower << "-" << 11 + (level % 31) + attackPower << "dmg) 9 (Stat page) 0 (Inventory)" << endl;
        }
        else {
            cout << "Choose: 1 (" << 4 + (level % 31) + attackPower << "-" << 8 + (level % 31) + attackPower << "dmg) 2 (" << 2 + (level % 31) + attackPower << "-" << 5 + (level % 31) + attackPower << " lifesteal) 9 (Stat page) 0 (Inventory)" << endl;
        }
    }
    if (classtype == 5) { //dreadnought attack messages |health =50|attackPower=1|lives=1|
        if (level >= 50) {
            cout << "Choose: 1 (" << 4 + (level % 31) + attackPower << "-" << 8 + (level % 31) + attackPower << "dmg) 2 (" << 2 + (level % 31) + attackPower << "-" << 5 + (level % 31) + attackPower << " lifesteal) 3 (" << 6 + (level % 31) + attackPower << "-" << 11 + (level % 31) + attackPower << "dmg) 4 (" << 6 + (level % 31) + attackPower << "-" << 9 + (level % 31) + attackPower << " heal) 5 (" << 7 + (level % 31) + attackPower << "-" << 12 + (level % 31) + attackPower << " lifesteal) 9 (Stat page) 0 (Inventory)" << endl;
        }
        else if (level >= 25) {
            cout << "Choose: 1 (" << 4 + (level % 31) + attackPower << "-" << 8 + (level % 31) + attackPower << "dmg) 2 (" << 2 + (level % 31) + attackPower << "-" << 5 + (level % 31) + attackPower << " lifesteal) 3 (" << 6 + (level % 31) + attackPower << "-" << 11 + (level % 31) + attackPower << "dmg) 4 (" << 6 + (level % 31) + attackPower << "-" << 9 + (level % 31) + attackPower << " heal) 9 (Stat page) 0 (Inventory)" << endl;
        }
        else if (level >= 15) {
            cout << "Choose: 1 (" << 4 + (level % 31) + attackPower << "-" << 8 + (level % 31) + attackPower << "dmg) 2 (" << 2 + (level % 31) + attackPower << "-" << 5 + (level % 31) + attackPower << " lifesteal) 3 (" << 6 + (level % 31) + attackPower << "-" << 11 + (level % 31) + attackPower << "dmg) 9 (Stat page) 0 (Inventory)" << endl;
        }
        else {
            cout << "Choose: 1 (" << 4 + (level % 31) + attackPower << "-" << 8 + (level % 31) + attackPower << "dmg) 2 (" << 2 + (level % 31) + attackPower << "-" << 5 + (level % 31) + attackPower << " lifesteal) 9 (Stat page) 0 (Inventory)" << endl;
        }
    }
     if (classtype == 6) { //trickster attack messages |health =20|attackPower=5|lives=1|
        if (trickstermove == true) {
            cout << "Choose: 1 (" << 4 + (level % 31) + attackPower << "-" << 8 + (level % 31) + attackPower << "dmg) 2 (" << 2 + (level % 31) + attackPower << "-" << 5 + (level % 31) + attackPower << " lifesteal) 3 (" << 6 + (level % 31) + attackPower << "-" << 11 + (level % 31) + attackPower << "dmg) 4 (" << 6 + (level % 31) + attackPower << "-" << 9 + (level % 31) + attackPower << " heal) 5 (" << 7 + (level % 31) + attackPower << "-" << 12 + (level % 31) + attackPower << " lifesteal) 6 (Confuse enemy) 9 (Stat page) 10 (Inventory)" << endl;
        }
        else if (level >= 50) {
            cout << "Choose: 1 (" << 4 + (level % 31) + attackPower << "-" << 8 + (level % 31) + attackPower << "dmg) 2 (" << 2 + (level % 31) + attackPower << "-" << 5 + (level % 31) + attackPower << " lifesteal) 3 (" << 6 + (level % 31) + attackPower << "-" << 11 + (level % 31) + attackPower << "dmg) 4 (" << 6 + (level % 31) + attackPower << "-" << 9 + (level % 31) + attackPower << " heal) 5 (" << 7 + (level % 31) + attackPower << "-" << 12 + (level % 31) + attackPower << " lifesteal) 9 (Stat page) 0 (Inventory)" << endl;
        }
        else if (level >= 25) {
            cout << "Choose: 1 (" << 4 + (level % 31) + attackPower << "-" << 8 + (level % 31) + attackPower << "dmg) 2 (" << 2 + (level % 31) + attackPower << "-" << 5 + (level % 31) + attackPower << " lifesteal) 3 (" << 6 + (level % 31) + attackPower << "-" << 11 + (level % 31) + attackPower << "dmg) 4 (" << 6 + (level % 31) + attackPower << "-" << 9 + (level % 31) + attackPower << " heal) 9 (Stat page) 0 (Inventory)" << endl;
        }
        else if (level >= 15) {
            cout << "Choose: 1 (" << 4 + (level % 31) + attackPower << "-" << 8 + (level % 31) + attackPower << "dmg) 2 (" << 2 + (level % 31) + attackPower << "-" << 5 + (level % 31) + attackPower << " lifesteal) 3 (" << 6 + (level % 31) + attackPower << "-" << 11 + (level % 31) + attackPower << "dmg) 9 (Stat page) 0 (Inventory)" << endl;
        }
        else {
            cout << "Choose: 1 (" << 4 + (level % 31) + attackPower << "-" << 8 + (level % 31) + attackPower << "dmg) 2 (" << 2 + (level % 31) + attackPower << "-" << 5 + (level % 31) + attackPower << " lifesteal) 9 (Stat page) 0 (Inventory)" << endl;
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
    case 1:
        accuracy = r() & 100 + 1;
        if (accuratesword == true || fallen == true) {
            x = r() % 5 + 4 + (level % 31) + attackPower; //normal attack
            Target->takeDmg(x);
            h = 0;
            cout << endl;
            fallen = false;
            int message;
            message = r() % 5 + 1;
            if (message == 1) {
                cout << "-----------------------------------------------" << endl;
                cout << name << ", you dealt " << x << " damage." << endl;
                break;
            }
            else if (message == 2) {
                cout << "-----------------------------------------------" << endl;
                cout << "You kicked the slime for " << x << " damage." << endl;
                break;
            }
            else if (message == 3) {
                cout << "-----------------------------------------------" << endl;
                cout << "You stabbed the slime for " << x << " damage." << endl;
                break;
            }
            else if (message == 4) {
                cout << "-----------------------------------------------" << endl;
                cout << "You kicked the slime in the face for " << x << " damage." << endl;
                break;
            }
            else {
                cout << "-----------------------------------------------" << endl;
                cout << "You bludgeon the slime for " << x << " damage." << endl;
                break;
            }
        }
        else if (accuracy > 10) {
            x = r() % 5 + 4 + (level % 31) + attackPower; //normal attack
            Target->takeDmg(x);
            h = 0;
            cout << endl;
            fallen = false;
            int message;
            message = r() % 5 + 1;
            if (message == 1) {
                cout << "-----------------------------------------------" << endl;
                cout << name << ", you dealt " << x << " damage." << endl;
                break;
            }
            else if (message == 2) {
                cout << "-----------------------------------------------" << endl;
                cout << "You kicked the slime for " << x << " damage." << endl;
                break;
            }
            else if (message == 3) {
                cout << "-----------------------------------------------" << endl;
                cout << "You stabbed the slime for " << x << " damage." << endl;
                break;
            }
            else if (message == 4) {
                cout << "-----------------------------------------------" << endl;
                cout << "You kicked the slime in the face for " << x << " damage." << endl;
                break;
            }
            else {
                cout << "-----------------------------------------------" << endl;
                cout << "You bludgeon the slime for " << x << " damage." << endl;
                break;
            }
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
            h = 0;
            cout << endl;
            fallen = false;
            int message;
            message = r() % 5 + 1;
            if (message == 1) {
                cout << "-----------------------------------------------" << endl;
                cout << name << ", you dealt " << x << " damage." << endl;
                break;
            }
            else if (message == 2) {
                cout << "-----------------------------------------------" << endl;
                cout << "You kicked the slime for " << x << " damage." << endl;
                break;
            }
            else if (message == 3) {
                cout << "-----------------------------------------------" << endl;
                cout << "You stabbed the slime for " << x << " damage." << endl;
                break;
            }
            else if (message == 4) {
                cout << "-----------------------------------------------" << endl;
                cout << "You kicked the slime in the face for " << x << " damage." << endl;
                break;
            }
            else {
                cout << "-----------------------------------------------" << endl;
                cout << "You bludgeon the slime for " << x << " damage." << endl;
                break;
            }
        }
        else if (baselevel >= 15 && accuracy > 10) {
            x = r() % 6 + 6 + (level % 31) + attackPower;
            Target->takeDmg(x);
            h = 0;
            cout << endl;
            fallen = false;
            int message;
            message = r() % 5 + 1;
            if (message == 1) {
                cout << "-----------------------------------------------" << endl;
                cout << name << ", you dealt " << x << " damage." << endl;
                break;
            }
            else if (message == 2) {
                cout << "-----------------------------------------------" << endl;
                cout << "You kicked the slime for " << x << " damage." << endl;
                break;
            }
            else if (message == 3) {
                cout << "-----------------------------------------------" << endl;
                cout << "You stabbed the slime for " << x << " damage." << endl;
                break;
            }
            else if (message == 4) {
                cout << "-----------------------------------------------" << endl;
                cout << "You kicked the slime in the face for " << x << " damage." << endl;
                break;
            }
            else {
                cout << "-----------------------------------------------" << endl;
                cout << "You bludgeon the slime for " << x << " damage." << endl;
                break;
            }
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
            x = 0;
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
            x = 0;
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
        accuracy = r() & 100 + 1;
        if (trickstermove == true) {
            trickstermovebool = true;
            h = 0;
            cout << endl;
            fallen = false;
        }
        else {
            cout << "-------------------------------------------" << endl;
            cout << " You have not unlocked this move." << endl;
            cout << "-------------------------------------------" << endl;
            cout << endl;
            attack(Target);
            break;
        }
    case 9:
        cout << " --Stats--" << endl;
        cout << "--" << maxhealth << " Maxhealth--" << endl;
        cout << "--" << health << " Health--" << endl;
        cout << "--" << defence << " Defence--" << endl;
        cout << "--" << baselevel << "Baselevel--" << endl;
        cout << "--" << level + baselevel << " Level--" << endl;
        cout << "--" << attackPower << " Attack--" << endl;
        cout << "--" << lives << " Lives--" << endl;
        cout << "--" << kills << " Kills--" << endl;
            if (classtype == 1) {
                cout << "-Class = Knight" << endl;
            }
            else if (classtype == 2) {
                cout << "-Class = Executioner" << endl;
            }
            else if (classtype == 3) {
                cout << "-Class = Soulweaver" << endl;
            }
            else if (classtype == 4) {
                cout << "-Class = Warforged Engineer" << endl;
            }
            else if (classtype == 5) {
                cout << "-Class = Dreadnought" << endl;
            }
            else if (classtype == 6) {
                cout << "-Class = Trickster" << endl;
            }
        attack(Target);
        break;
    case 10: 
        if (accuratesword == true) {
            cout << "Accurate Sword (No more slipping!)" << endl;
        }
        if (helmet == true) {
            cout << "Helmet (+7 defence)" << endl;
        }
        if (boots == true) {
            cout << "Boots (+5 defence)" << endl;
        }
        if (chestplate == true) {
            cout << "Chestplate (+10 defence)" << endl;
        }
        if (Excalibur == true) {
            cout << "Excalibur (+8 attack)" << endl;
        }
        if (Knife == true) {
            cout << "Knife (+2 attack)" << endl;
        }
        if (Sword == true) {
            cout << "Sword (+4 attack)" << endl;
        }
        if (leveltonic == true) {
            cout << "Level Tonic (+10 level)" << endl;
        }
        if (superiorleveltonic == true) {
            cout << "Superior Level Tonic (+15 level)" << endl;
        }
        if (superpotion == true) {
            cout << "Super Potion (+20 level|+10 attack)" << endl;
        }
        if (defenceupgrade == true) {
            cout << "Defence Perk (+10 defence)" << endl;
        }
        if (godarmor == true) {
            cout << "God Armor (+20 defence)" << endl;
        }
        if (attackupgrade == true) {
            cout << "Attack Perk (+10 attack)" << endl;
        }
        if (levelupgrade == true) {
            cout << "Level Perk (+15 level)" << endl;
        }
        if (shield == true) {
            cout << "Shield (+15 defence)" << endl;
        }
        if (shield == false && levelupgrade == false && superiorleveltonic == false && defenceupgrade == false && godarmor == false && superpotion == false && attackupgrade == false && leveltonic == false && Sword == false && Knife == false && Excalibur == false && accuratesword == false && helmet == false && chestplate == false && boots == false) {
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
    }
}