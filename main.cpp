#include <SFML/Graphics.hpp>
#include <iostream>
#include <random>
#include <string>
#include "Character.h"
#include "Player.h"
#include "Enemy.h"
using namespace std;

Enemy* generateEnemy(int l) {
    random_device r;
    int x;
    if (l == 200) {
        x = 12;
    }
    else if (l == 100) {
        x = 11;
    }
    else if (l >= 101) {
        x = r() % 4 + 8;
    }
    else if (l >= 80) {
        x = r() % 4 + 7;
    }
    else if (l >= 70) {
        x = r() % 4 + 6;
    }
    else if (l >= 60) {
        x = r() % 4 + 5;
    }
    else if (l >= 50) {
        x = r() % 4 + 4;
    }
    else if (l >= 40) {
        x = r() % 4 + 3;
    }
    else if (l >= 30) {
        x = r() % 4 + 2;
    }
    else if (l >= 20) {
        x = r() % 4 + 1;
    }
    else if (l >= 10) {
        x = r() % 3;
    }
    else {
        x = r() % 2;
    }

    switch (x) {
    case 0:
        return new Enemy("Slime", 20, 2);
        break;
    case 1:
        return new Enemy("Epic Slime", 30, 1);
        break;
    case 2:
        return new Enemy("Superior Slime", 25, 2);
        break;
    case 3:
        return new Enemy("Super Slime", 40, 3);
        break;
    case 4:
        return new Enemy("Incredible Slime", 60, 4);
        break;
    case 5:
        return new Enemy("Superb Slime", 100, 7);
        break;
    case 6:
        return new Enemy("King Slime", 250, 13);
        break;
    case 7:
        return new Enemy("Demon Slime", 150, 20);
        break;
    case 8:
        return new Enemy("Overlord Slime", 300, 25);
        break;
    case 9:
        return new Enemy("Universal Super Slime", 350, 30);
        break;
    case 10:
        return new Enemy("Godly Slime", 400, 40);
        break;
    case 11:
        return new Enemy("Boss Slime", 450, 50);
        break;
    default:
        return new Enemy("Creator Slime", 500, 60);
        break;
    }
}

int main() {
    while (true) {
        cout << "Welcome to Evil Conquest!" << endl;
        cout << "Your objective is to kill the operator of all evil...the Creator Slime!" << endl;
        cout << "You start at level one, for every kill you go up a level and gain more damage (Base attack damage + level)" << endl;
        cout << "--Level can only add up to 30 damage or healing--" << endl;
        cout << "At levels 15, 25, 50 and 100, you gain new abilities. At level 200 you fight the final boss" << endl;
        cout << "I wish you well on your conquest." << endl;
        cout << endl;

        Player Knight("Honorary Knight", 25, 2);
        random_device r;
        int classcurrency = 0;
        Enemy* Slime = generateEnemy(Knight.getlevel());
        while (Knight.isAlive() && Slime->isAlive()) {
            Knight.attack(Slime);
            if (Slime->gethealth() < 0) {
                cout << Slime->getname() << " has 0 health remaining." << endl;
            }
            else {
                cout << Slime->getname() << " has " << Slime->gethealth() << " health remaining." << endl;
            }
            cout << "-----------------------------------------------" << endl;
            Slime->attack(&Knight);
            if (Knight.gethealth() < 0) {
                cout << Knight.getname() << ", you have 0 health remaining." << endl;
            }
            else {
                cout << Knight.getname() << ", you have " << Knight.gethealth() << " health remaining." << endl;
            }
            cout << "-----------------------------------------------" << endl;
            if (!Slime->isAlive()) {
                delete Slime;
                classcurrency += 1;
                if (classcurrency == 50) {
                    cout << "Which stat would you like to upgrade? (1=hp, 2=atk, 3=def, 4=lvl) *Note* Only hp can be upgraded more than once." << endl;
                    int stat = 0;
                    cin >> stat;
                    switch (stat) {
                    case 1:
                        Knight.healthupgrade = true;
                        cout << "You now have " << Knight.gethealth() << " health." << endl;
                        cout << "-----------------------------------------------" << endl;
                        break;
                    case 2:
                        Knight.attackupgrade = true;
                        cout << "You now have " << Knight.getattackPower() << " attack." << endl;
                        cout << "-----------------------------------------------" << endl;
                        break;
                    case 3:
                        Knight.defenceupgrade = true;
                        cout << "You now have " << Knight.getdefence() << " defence." << endl;
                        cout << "-----------------------------------------------" << endl;
                        break;
                    default:
                        Knight.levelupgrade = true;
                        cout << "You are now level " << Knight.getlevel() << "." << endl;
                        cout << "-----------------------------------------------" << endl;
                        break;
                    }
                }
                else if (classcurrency == 20) {
                    cout << "You have found a rare treasure!" << endl;
                    random_device r;
                    int treasure;
                    treasure = r() % 99 + 1;
                    if (treasure <= 33) {
                        Knight.helmet = true;
                        cout << "You got a fancy hat." << endl;
                        cout << endl;
                        treasure = 0;
                    }
                    else if (treasure > 33 && treasure <= 66) {
                        Knight.chestplate = true;
                        cout << "You have acquired a weird robe." << endl;
                        cout << endl;
                        treasure = 0;
                    }
                    else if (treasure > 66 && treasure <= 99) {
                        Knight.boots = true;
                        cout << "You put on some cool shoes." << endl;
                        cout << endl;
                        treasure = 0;
                    }
                    else {
                        Knight.godarmor = true;
                        random_device r;
                        int legend;
                        legend = r() % 3;
                        if (legend == 0) {
                            cout << "You acquired the armor of the legend...Vladimir!" << endl;
                            cout << endl;
                            treasure = 0;
                        }
                        else if (legend == 1) {
                            cout << "You acquired the armor of the legend...Lockhart!" << endl;
                            cout << endl;
                            treasure = 0;
                        }
                        else {
                            cout << "You acquired the armor of the legend...Narso!" << endl;
                            cout << endl;
                            treasure = 0;
                        }
                    }
                }
                if (Knight.isAlive() == true && Knight.getlevel() == 100) {
                    Knight.supermove = true;
                    cout << "You have unlocked your super move! (12-15 dmg)" << endl;
                    cout << endl;
                }
                Knight.incrementlevel();
                Knight.getkills();
                Slime = generateEnemy(Knight.getlevel());
                cout << "You are now level " << Knight.getlevel() << "." << endl;
                int enemyrandom;
                enemyrandom = r() % 3;
                if (enemyrandom == 0) {
                    cout << "A new " << Slime->getname() << " has appeared, stab it!!" << endl;
                    cout << "-----------------------------------------------" << endl;
                }
                else if (enemyrandom == 1) {
                    cout << "A " << Slime->getname() << " is approaching you! BE wary." << endl;
                    cout << "-----------------------------------------------" << endl;
                }
                else {
                    cout << "A new " << Slime->getname() << " is preparing to attack, CHARGE!!!" << endl;
                    cout << "-----------------------------------------------" << endl;
                }
                cout << endl;
                int item = 0;
                item = r() % 100 + 1;
                if (item == 1 || item == 2) {
                    Knight.Excalibur = true;
                    cout << "--You gained a super item! (Excalibur)--" << endl;
                    cout << endl;
                }
                else if (item == 3 || item == 4) {
                    Knight.superiorleveltonic = true;
                    cout << "--You gained a super item! (SuperiorLevelTonic)--" << endl;
                    cout << endl;
                }
                else if (item == 5 || item == 6 || item == 7) {
                    Knight.Knife = true;
                    cout << "--You gained an item! (Knife)--" << endl;
                    cout << endl;
                }
                else if (item == 8 || item == 9 || item == 10) {
                    Knight.Sword = true;
                    cout << "--You gained an item! (Sword)--" << endl;
                    cout << endl;
                }
                else if (item == 11 || item == 12 || item == 13) {
                    Knight.leveltonic = true;
                    cout << "--You gained an item! (LevelTonic)--" << endl;
                    cout << endl;
                }
                else if (item == 14) {
                    Knight.superpotion = true;
                    cout << "--You gained a godly item! (Super potion)--" << endl;
                    cout << endl;
                }
                else if (item == 15 || item == 16 || item == 17 || item == 18 || item == 19 || item == 20 || item == 21 || item == 22 || item == 23 || item == 24 || item == 25 || item == 26 || item == 27 || item == 28 || item == 29 || item == 30 || item == 31 || item == 32 || item == 33 || item == 34) {
                    Knight.healthtonic = true;
                    cout << "--You gained a health tonic! (Healing potion)--" << endl;
                    cout << endl;
                }
                else if (item == 35 || item == 36 || item == 37) {
                    Knight.accuratesword = true;
                    cout << "--You gained the legendary accuracy sword! (never miss again)--" << endl;
                    cout << endl;
                }
                else if (item == 38 || item == 39 || item == 40 || item == 41 || item == 42) {
                    Knight.shield= true;
                    cout << "--You can now dual wield with a shield! (Shield)--" << endl;
                    cout << endl;
                }
                if (Knight.getlevel() >= 201 && Knight.isAlive() == true) {
                    break;
                }
            }
        }

        if (!Knight.isAlive()) {
            cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
            int deathmessage = 0;
            deathmessage = r() % 5 + 1;
            if (deathmessage == 1) {
                cout << "You have been slain, better luck next time soldier." << endl;
            }
            else if (deathmessage == 2) {
                cout << "The slimes were too powerful... try again." << endl;
            }
            else if (deathmessage == 3) {
                cout << "You have now become slime food, try again once you get stronger." << endl;
            }
            else if (deathmessage == 4) {
                cout << "The slimes have erased the memory of you...the end." << endl;
            }
            else {
                cout << "The slimes have now taken over the world, you failed." << endl;
            }
            cout << endl;
            cout << "--Your overall stats were...--" << "-" << endl;
            cout << "-Level= " << Knight.getlevel() << "-" << endl;
            cout << "-Attack= " << Knight.getattackPower() << "-" << endl;
            cout << "-Defence= " << Knight.getdefence() << "-" << endl;
            cout << "-Kills= " << Knight.getkills() << "-" << endl;
            cout << "Would you like to try Again? (y/n)" << endl;
            string retry;
            cin >> retry;
            if (retry == "n" || retry == "N") {
                break;
            }
            else if (retry == "y" || retry == "Y") {
                cout << endl << endl;
            }
        }
        else {
            cout << "You have saved the universe from the Creator Slime and became a hero!" << endl;
            cout << "--Your overall stats were...--" << "-" << endl;
            cout << "-Level= " << Knight.getlevel() << "-" << endl;
            cout << "-Health= " << Knight.gethealth() << "-" << endl;
            cout << "-Attack= " << Knight.getattackPower() << "-" << endl;
            cout << "-Defence= " << Knight.getdefence() << "-" << endl;
            cout << "-Kills= " << Knight.getkills() << "-" << endl;
            cout << "The world thanks you for your service, Honorary Knight." << endl;
            cout << "Play Again? (y/n)" << endl;
            string playagain;
            cin >> playagain;
            if (playagain == "n" || playagain == "N") {
                break;
            }
            else if (playagain == "y" || playagain == "Y") {
                cout << endl << endl;
            }
        }
    }
    return 0;
}