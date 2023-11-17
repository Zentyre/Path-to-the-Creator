#include "Player.h"
#include <iostream>
#include <random>
using namespace std;

Player::Player(string n2, int hp2, int atk2) {
    Excalibur = false;
    Knife = false;
    Sword = false;
    leveltonic = false;
    superiorleveltonic = false;
    healthtonic = false;
    superpotion = false;
    boots = false;
    chestplate = false;
    helmet = false;
    shield = false;
    godarmor = false;
    accuratesword = false;
    supermove = false;
    healthupgrade = false;
    levelupgrade = false;
    defenceupgrade = false;
    attackupgrade = false;
    extralife = false;
    name = n2;
    health = hp2;
    attackPower = atk2;
    defence = 0;
    level = 1;
    kills = 0;
    if (Excalibur == true) {
        atk2 += 8;
    }
    if (Knife == true) {
        atk2 += 2;
    }
    if (Sword == true) {
        atk2 += 4;
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
        level += 20;
        atk2 += 10;
        superpotion = false;
    }
    if (healthtonic == true) {
        hp2 += 25;
        if (healthupgrade == true && health > 250 && level > 50) {
            hp2 = 250;
        }
        else if (health > 200 && level > 50) {
            hp2 = 200;
        }
        else if (healthupgrade == true && health > 150 && level <= 50) {
            hp2 = 150;
        }
        else if (health > 100 && level <= 50) {
            hp2 = 100;
        }
        healthtonic = false;
    }
    if (helmet == true) {
        defence += 7;
    }
    if (chestplate == true) {
        defence += 10;
    }
    if (boots == true) {
        defence += 5;
    }
    if (shield == true) {
        defence += 15;
    }
    if (godarmor == true) {
        defence += 25;
    }
    if (defenceupgrade == true) {
        defence += 10;
    }
    if (healthupgrade == true) {
        hp2 += 50;
        healthupgrade = false;
    }
    if (attackupgrade == true) {
        atk2 += 10;
        attackupgrade = false;
    }
    if (levelupgrade == true) {
        level += 15;
        levelupgrade = false;
    }
    if (extralife == true) {
        lives += 1;
        extralife = false;
    }
}

void Player::attack(Character* Target) {
    random_device r;
    int playerInput, x, h;
    int accuracy = 0;
    bool fallen = false;
    if (supermove == true) {
        cout << "Attack: 1 (5-8 dmg) 2 (3-5 lifesteal) 3 (6-11 dmg) 4 (6-9 heal) 5 (7-12 lifesteal) 6 (12-15 dmg) 9 (Stat page) 0 (Inventory)" << endl;
    }
    else if (level >= 50) {
        cout << "Attack: 1 (5-8 dmg) 2 (3-5 lifesteal) 3 (6-11 dmg) 4 (6-9 heal) 5 (7-12 lifesteal) 9 (Stat page) 0 (Inventory)" << endl;
    }
    else if (level >= 25) {
        cout << "Attack: 1 (5-8 dmg) 2 (3-5 lifesteal) 3 (6-11 dmg) 4 (6-9 heal) 9 (Stat page) 0 (Inventory)" << endl;
    }
    else if (level >= 15) {
        cout << "Attack: 1 (5-8 dmg) 2 (3-5 lifesteal) 3 (6-11 dmg) 9 (Stat page) 0 (Inventory)" << endl;
    }
    else {
        cout << "Attack: 1 (5-8 dmg) 2 (3-5 lifesteal) 9 (Stat page) 0 (Inventory)" << endl;
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
        cout << endl;
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
                cout << "Honorary Knight, you dealt " << x << " damage." << endl;
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
                cout << "Honorary Knight, you dealt " << x << " damage." << endl;
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
            health += h; //lifesteal attack
            cout << endl;
            fallen = false;
            cout << "-----------------------------------------------" << endl;
            cout << "Honorary Knight, you dealt " << x << " damage." << endl;
            if (level <= 50 && health > 100) {
                health = 100;
                cout << "You have no wounds to heal." << endl;
            }
            else if (level > 50 && health > 200) {
                health = 200;
                cout << "You have no wounds to heal." << endl;
            }
            cout << "You healed for " << h << " damage." << endl;
            break;
        }
        else if (accuracy > 10) {
            x = r() % 4 + 2 + (level % 31) + attackPower;
            Target->takeDmg(x);
            h = x - 3;
            health += h; //lifesteal attack
            cout << endl;
            fallen = false;
            cout << "-----------------------------------------------" << endl;
            cout << "Honorary Knight, you dealt " << x << " damage." << endl;
            if (level <= 50 && health > 100) {
                health = 100;
                cout << "You have no wounds to heal." << endl;
            }
            else if (level > 50 && health > 200) {
                health = 100;
                cout << "You have no wounds to heal." << endl;
            }
            cout << "You healed for " << h << " damage." << endl;

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
        if (level >= 15 && accuratesword == true || fallen == true) {
            x = r() % 6 + 6 + (level % 31) + attackPower; //normal attack
            Target->takeDmg(x);
            h = 0;
            cout << endl;
            fallen = false;
            int message;
            message = r() % 5 + 1;
            if (message == 1) {
                cout << "-----------------------------------------------" << endl;
                cout << "Honorary Knight, you dealt " << x << " damage." << endl;
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
        else if (level >= 15 && accuracy > 10) {
            x = r() % 6 + 6 + (level % 31) + attackPower; //normal attack
            Target->takeDmg(x);
            h = 0;
            cout << endl;
            fallen = false;
            int message;
            message = r() % 5 + 1;
            if (message == 1) {
                cout << "-----------------------------------------------" << endl;
                cout << "Honorary Knight, you dealt " << x << " damage." << endl;
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
        else if (level >= 15 && accuracy <= 10) {
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
        accuracy = r() & 100 + 1;
        if (level >= 25 && accuratesword == true || fallen == true) {
            fallen = false;
            x = r() % 4 + 6 + (level % 31);
            h = x;
            health += h; //single heal
            cout << "-----------------------------------------------" << endl;
            if (level <= 50 && health > 100) {
                health = 100;
                cout << "You have no wounds to heal." << endl;
            }
            else if (level > 50 && health > 200) {
                health = 100;
                cout << "You have no wounds to heal." << endl;
            }
            cout << "You healed for " << h << " damage." << endl;
            x = 0;
            break;
        }
        else if (level >= 25 && accuracy > 10) {
            fallen = false;
            x = r() % 4 + 6 + (level % 31);
            h = x;
            health += h; //single heal
            cout << "-----------------------------------------------" << endl;
            if (level <= 50 && health > 100) {
                health = 100;
                cout << "You have no wounds to heal." << endl;
            }
            else if (level > 50 && health > 200) {
                health = 200;
                cout << "You have no wounds to heal." << endl;
            }
            cout << "You healed for " << h << " damage." << endl;
            x = 0;
            break;
        }
        else if (level >= 25 && accuracy <= 10) {
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
        accuracy = r() & 100 + 1;
        if (level >= 50 && accuratesword == true || fallen == true) {
            x = r() % 6 + 7 + (level % 31) + attackPower;
            Target->takeDmg(x);
            h = x - 5;
            health += h; //lifesteal attack
            cout << endl;
            fallen = false;
            cout << "-----------------------------------------------" << endl;
            cout << "Honorary Knight, you dealt " << x << " damage." << endl;
            if (level <= 50 && health > 100) {
                health = 100;
                cout << "You have no wounds to heal." << endl;
            }
            else if (level > 50 && health > 200) {
                health = 100;
                cout << "You have no wounds to heal." << endl;
            }
            cout << "You healed for " << h << " damage." << endl;
            break;
        }
        else if (level >= 50 && accuracy > 10) {
            x = r() % 6 + 7 + (level % 31) + attackPower;
            Target->takeDmg(x);
            h = x - 5;
            health += h; //lifesteal attack
            cout << endl;
            fallen = false;
            cout << "-----------------------------------------------" << endl;
            cout << "Honorary Knight, you dealt " << x << " damage." << endl;
            if (level <= 50 && health > 100) {
                health = 100;
                cout << "You have no wounds to heal." << endl;
            }
            else if (level > 50 && health > 200) {
                health = 100;
                cout << "You have no wounds to heal." << endl;
            }
            cout << "You healed for " << h << " damage." << endl;
            break;
        }
        else if (level >= 50 && accuracy <= 10) {
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
        if (supermove == true && accuracy > 10 || fallen == true) {
            x = r() % 4 + 12 + (level % 31) + attackPower; //normal attack
            Target->takeDmg(x);
            h = 0;
            cout << endl;
            fallen = false;
            int message;
            message = r() % 5 + 1;
            if (message == 1) {
                cout << "-----------------------------------------------" << endl;
                cout << "Honorary Knight, you dealt " << x << " damage." << endl;
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
        else if (supermove == true && accuracy <= 10) {
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
    case 9:
        extralife = true;
        cout << " --Stats--" << endl;
        cout << "--" << health << " Health--" << endl;
        cout << "--" << defence << " Defence--" << endl;
        cout << "--" << level << " Levels--" << endl;
        cout << "--" << attackPower << " Attack--" << endl;
       cout << "--" << lives << " Lives--" << endl;
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

void Player::takeDmg(int d) {
    d = d - defence;
    if (d < 0) {
        d = 0;
    }
    health -= d;
}