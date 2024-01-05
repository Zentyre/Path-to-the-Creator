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
        return new Enemy("Shroom", 20, 2, 1, 20);
        break;
    case 1:
        return new Enemy("Shroom Knight", 30, 1, 1, 30);
        break;
    case 2:
        return new Enemy("Shroom ArchKnight", 25, 2, 1, 25);
        break;
    case 3:
        return new Enemy("Noble Shroom", 40, 3, 1, 40);
        break;
    case 4:
        return new Enemy("Royal Shroom", 60, 4, 1, 60);
        break;
    case 5:
        return new Enemy("Princess Slime", 100, 7, 1, 100);
        break;
    case 6:
        return new Enemy("Prince Shroom", 250, 13, 1, 250);
        break;
    case 7:
        return new Enemy("King Shroom", 150, 20, 1, 150);
        break;
    case 8:
        return new Enemy("Emperor Shroom", 250, 25, 1, 250);
        break;
    case 9:
        return new Enemy("Leader Shroom", 350, 30, 1, 350);
        break;
    case 10:
        return new Enemy("Divine Shroom", 400, 40, 1, 400);
        break;
    case 11:
        return new Enemy("Boss Shroom", 450, 50, 1, 450);
        break;
    default:
        return new Enemy("Creator Shroom", 500, 60, 1, 500);
        break;
    }
}
Enemy* generateEnemy2(int l2) {
    random_device r;
    int x;
    if (l2 == 200) {
        x = 12;
    }
    else if (l2 == 100) {
        x = 11;
    }
    else if (l2 >= 101) {
        x = r() % 4 + 8;
    }
    else if (l2 >= 80) {
        x = r() % 4 + 7;
    }
    else if (l2 >= 70) {
        x = r() % 4 + 6;
    }
    else if (l2 >= 60) {
        x = r() % 4 + 5;
    }
    else if (l2 >= 50) {
        x = r() % 4 + 4;
    }
    else if (l2 >= 40) {
        x = r() % 4 + 3;
    }
    else if (l2 >= 30) {
        x = r() % 4 + 2;
    }
    else if (l2 >= 20) {
        x = r() % 4 + 1;
    }
    else if (l2 >= 10) {
        x = r() % 3;
    }
    else {
        x = r() % 2;
    }

    switch (x) {
    case 0:
        return new Enemy("Slime", 20, 2, 1, 20);
        break;
    case 1:
        return new Enemy("Epic Slime", 30, 1, 1, 30);
        break;
    case 2:
        return new Enemy("Superior Slime", 25, 2, 1, 25);
        break;
    case 3:
        return new Enemy("Super Slime", 40, 3, 1, 40);
        break;
    case 4:
        return new Enemy("Incredible Slime", 60, 4, 1, 60);
        break;
    case 5:
        return new Enemy("Superb Slime", 100, 7, 1, 100);
        break;
    case 6:
        return new Enemy("King Slime", 250, 13, 1, 250);
        break;
    case 7:
        return new Enemy("Demon Slime", 150, 20, 1, 150);
        break;
    case 8:
        return new Enemy("Overlord Slime", 250, 25, 1, 250);
        break;
    case 9:
        return new Enemy("Universal Super Slime", 350, 30, 1, 350);
        break;
    case 10:
        return new Enemy("Godly Slime", 400, 40, 1, 400);
        break;
    case 11:
        return new Enemy("Boss Slime", 450, 50, 1, 450);
        break;
    default:
        return new Enemy("Creator Slime", 500, 60, 1, 500);
        break;
    }
}
Enemy* generateEnemy3(int l3) {
    random_device r;
    int x;
    if (l3 == 200) {
        x = 12;
    }
    else if (l3 == 100) {
        x = 11;
    }
    else if (l3 >= 101) {
        x = r() % 4 + 8;
    }
    else if (l3 >= 80) {
        x = r() % 4 + 7;
    }
    else if (l3 >= 70) {
        x = r() % 4 + 6;
    }
    else if (l3 >= 60) {
        x = r() % 4 + 5;
    }
    else if (l3 >= 50) {
        x = r() % 4 + 4;
    }
    else if (l3 >= 40) {
        x = r() % 4 + 3;
    }
    else if (l3 >= 30) {
        x = r() % 4 + 2;
    }
    else if (l3 >= 20) {
        x = r() % 4 + 1;
    }
    else if (l3 >= 10) {
        x = r() % 3;
    }
    else {
        x = r() % 2;
    }

    switch (x) {
    case 0:
        return new Enemy("Croc", 20, 2, 1, 20);
        break;
    case 1:
        return new Enemy("Croc Pot", 30, 1, 1, 30);
        break;
    case 2:
        return new Enemy("Mini Croc", 25, 2, 1, 25);
        break;
    case 3:
        return new Enemy("Big Croc", 40, 3, 1, 40);
        break;
    case 4:
        return new Enemy("Land Croc", 60, 4, 1, 60);
        break;
    case 5:
        return new Enemy("SharpTooth Croc", 100, 7, 1, 100);
        break;
    case 6:
        return new Enemy("King Croc", 250, 13, 1, 250);
        break;
    case 7:
        return new Enemy("Evil Croc", 150, 20, 1, 150);
        break;
    case 8:
        return new Enemy("Crocodile Dundee", 250, 25, 1, 250);
        break;
    case 9:
        return new Enemy("Killer Croc", 350, 30, 1, 350);
        break;
    case 10:
        return new Enemy("Transcendent Croc", 400, 40, 1, 400);
        break;
    case 11:
        return new Enemy("Florida Croc", 450, 50, 1, 450);
        break;
    default:
        return new Enemy("Creator Croc", 500, 60, 1, 500);
        break;
    }
}
Enemy* generateEnemy4(int l4) {
    random_device r;
    int x;
    if (l4 == 200) {
        x = 12;
    }
    else if (l4 == 100) {
        x = 11;
    }
    else if (l4 >= 101) {
        x = r() % 4 + 8;
    }
    else if (l4 >= 80) {
        x = r() % 4 + 7;
    }
    else if (l4 >= 70) {
        x = r() % 4 + 6;
    }
    else if (l4 >= 60) {
        x = r() % 4 + 5;
    }
    else if (l4 >= 50) {
        x = r() % 4 + 4;
    }
    else if (l4 >= 40) {
        x = r() % 4 + 3;
    }
    else if (l4 >= 30) {
        x = r() % 4 + 2;
    }
    else if (l4 >= 20) {
        x = r() % 4 + 1;
    }
    else if (l4 >= 10) {
        x = r() % 3;
    }
    else {
        x = r() % 2;
    }

    switch (x) {
    case 0:
        return new Enemy("Roo", 20, 2, 1, 20);
        break;
    case 1:
        return new Enemy("Joey Roo", 30, 1, 1, 30);
        break;
    case 2:
        return new Enemy("Kangaroo", 25, 2, 1, 25);
        break;
    case 3:
        return new Enemy("Mother Kangaroo", 40, 3, 1, 40);
        break;
    case 4:
        return new Enemy("Boxer Roo", 60, 4, 1, 60);
        break;
    case 5:
        return new Enemy("Jumping Roo", 100, 7, 1, 100);
        break;
    case 6:
        return new Enemy("Killer Roo", 250, 13, 1, 250);
        break;
    case 7:
        return new Enemy("Crackhead Roo", 150, 20, 1, 150);
        break;
    case 8:
        return new Enemy("Aussie Roo", 250, 25, 1, 250);
        break;
    case 9:
        return new Enemy("Jacked Roo", 350, 30, 1, 350);
        break;
    case 10:
        return new Enemy("Paragon Roo", 400, 40, 1, 400);
        break;
    case 11:
        return new Enemy("Boomaroo", 450, 50, 1, 450);
        break;
    default:
        return new Enemy("Creator Kangaroo", 500, 60, 1, 500);
        break;
    }
}
Enemy* generateEnemy5(int l5) {
    random_device r;
    int x;
    if (l5 == 200) {
        x = 12;
    }
    else if (l5 == 100) {
        x = 11;
    }
    else if (l5 >= 101) {
        x = r() % 4 + 8;
    }
    else if (l5 >= 80) {
        x = r() % 4 + 7;
    }
    else if (l5 >= 70) {
        x = r() % 4 + 6;
    }
    else if (l5 >= 60) {
        x = r() % 4 + 5;
    }
    else if (l5 >= 50) {
        x = r() % 4 + 4;
    }
    else if (l5 >= 40) {
        x = r() % 4 + 3;
    }
    else if (l5 >= 30) {
        x = r() % 4 + 2;
    }
    else if (l5 >= 20) {
        x = r() % 4 + 1;
    }
    else if (l5 >= 10) {
        x = r() % 3;
    }
    else {
        x = r() % 2;
    }

    switch (x) {
    case 0:
        return new Enemy("Skeleton", 20, 2, 1, 20);
        break;
    case 1:
        return new Enemy("Skellie", 30, 1, 1, 30);
        break;
    case 2:
        return new Enemy("Enchanted Bow Skeleton", 25, 2, 1, 25);
        break;
    case 3:
        return new Enemy("Aimbot Skellie", 40, 3, 1, 40);
        break;
    case 4:
        return new Enemy("Aimbot Skeleton", 60, 4, 1, 60);
        break;
    case 5:
        return new Enemy("Bony Bill", 100, 7, 1, 100);
        break;
    case 6:
        return new Enemy("Crazy Bones", 250, 13, 1, 250);
        break;
    case 7:
        return new Enemy("Broken Bone Skeleton", 150, 20, 1, 150);
        break;
    case 8:
        return new Enemy("Boogie Bone", 250, 25, 1, 250);
        break;
    case 9:
        return new Enemy("Ranked Skeleton", 350, 30, 1, 350);
        break;
    case 10:
        return new Enemy("Captain Skellie", 400, 40, 1, 400);
        break;
    case 11:
        return new Enemy("Super Skellie", 450, 50, 1, 450);
        break;
    default:
        return new Enemy("Creator Skeleton", 500, 60, 1, 500);
        break;
    }
}
int main() {
    while (true) {
        cout << "Welcome to Evil Conquest!" << endl;
        cout << "Your objective is to kill the operator of all evil...the Creator Slime!" << endl;
        cout << "You start at level one, for every kill you go up a level and gain more damage (Base attack damage + level)" << endl;
        cout << "--Level can only add up to 30 damage and/or healing--(Level gained from items does affect this)" << endl;
        cout << "At levels 15, 25, 50 and 100, you gain new abilities. At level 200 you fight the final boss(Level gained from items does not affect this)" << endl;
        cout << "I wish you well on your conquest." << endl;
        cout << endl;
        Player Knight("Player", 50, 25, 4, 0, 1, 1);
        cout << "Would you like to be a 1- Knight, 2- Executioner, 3- Soulweaver, 4- Warforged Engineer, 5- Dreadnought or 6- Trickster?" << endl;
        cout << "-Knight has average health and damage-" << endl << "-Executioner has a lot less health and a lot more damage-" << endl << "-Soulweaver starts with 1 extra life for less attack/health and a special move-" << endl << "-Warforged Engineer has slightly higher health for slightly lower damage and a special move-" << endl << "-Dreadnought has a lot more health / maxhealth and a lot less damage-" << endl << "-Trickster has a little less health for barely more attack, and a special move.-" << endl;
        int playerclasschoice = 0;
        cin >> playerclasschoice;
        if (cin.fail()) {
            cout << endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "You chose knight." << endl << endl;
        }
        else if (playerclasschoice == 1) {
            cout << "You chose Knight!" << endl;
        }
        else if (playerclasschoice == 2) {
            Knight.playerclassexecutioner();
            cout << "You chose Executioner!" << endl;
        }
        else if (playerclasschoice == 3) {
            Knight.playerclasssoulweaver();
            cout << "You chose Soulweaver!" << endl;
        }
        else if (playerclasschoice == 4) {
            Knight.playerclasswarforged();
            cout << "You chose Warforged Engineer!" << endl;
        }
        else if (playerclasschoice == 5) {
            Knight.playerclassdreadnought();
            cout << "You chose Dreadnought!" << endl;
        }
        else if (playerclasschoice == 6) {
            Knight.playerclasstrickster();
            cout << "You chose Trickster!" << endl;
        }
        else {
            cout << "You chose nothing so I will choose for you." << endl;
            Player Knight("Knight", 50, 25, 2, 0, 0, 1);
        }
        cout << "What would you like me to call you?" << endl;
        cin >> ws;
        getline(cin, Knight.name);
        cout << "Your name is " << Knight.getname() << "?" << endl << "Y/N" << endl;
        string acceptname = "";
        cin >> acceptname;
        if (acceptname == "Y" || acceptname == "y") {
            cout << "Welcome " << Knight.getname() << "!" << " I hope you are prepared for this treacherous journey..." << endl;
        }
        else if (acceptname == "N" || acceptname == "n") {
            cout << "Well come on then, make up your mind dude. I don't have all day " << "Lets try this again, but this is your last chance." << endl;
            cout << endl;
            cout << "What would you like me to call you?" << endl;
            cin >> Knight.name;
            cout << "Welcome " << Knight.getname() << "!" << " I hope you are prepared for this treacherous journey. Based on how long it took you to pick a name, for your sake, I would recommend turning around." << endl;
            cout << "Turn around? Y/N" << endl;
            string turnaround = "";
            cin >> turnaround;
            if (turnaround == "Y" || turnaround == "y") {
                Knight.setkillplayer();
                Knight.isAlive();
            }
            else if (turnaround == "N" || turnaround == "n") {
                cout << "Good luck kid, you need it" << endl;
            }
            else {
                cout << "Nice typo, I'm not even going to give you another chance" << endl;
                Knight.setkillplayer();
                Knight.isAlive();
            }
        }
        else {
            cout << "That wasn't a yes or a no, did you pass kindergarten?" << endl;
            string doesnothing = "";
            cin >> doesnothing;
            cout << "I dont even care, whatever you just entered did absolutely nothing. You're stuck with the name you gave me before now." << endl;
        }
        cout << "Where would you like to journey?" << endl;
        cout << "-Mushroom Kingdom-" << endl;
        cout << "-Gooey Glade-" << endl;
        cout << "-Croc Isle-" << endl;
        cout << "-Hopscotch Highlands-" << endl;
        cout << "-Skeletal Sanctum-" << endl;
            string areachoice = "";
            int areachoiceint = 0;
            cin >> ws;
            getline(cin, areachoice);
            if (areachoice == "Mushroom Kingdom" || areachoice == "mushroom kingdom"|| areachoice == "Mushroom kingdom") {
                cout << endl;
                cout << "-Welcome to the happy Kingdom of the Mushrooms! Normally you would be welcomed by, well a mushroom, but right now they are being invaded. Go get the invaders!-" << endl << endl;
                areachoiceint = 1;
            }
            else if (areachoice == "Gooey Glade" || areachoice == "gooey glade"|| areachoice == "Gooey glade") {
                cout << endl;
                cout << "-Welcome to the uneasy feeling area of the slimes. Good Luck Surviving!-" << endl << endl;
                areachoiceint = 2;
            }
            else if (areachoice == "Croc Isle" || areachoice == "croc isle" || areachoice == "Croc isle") {
                cout << endl;
                cout << "-Welcome to the land of the crocs. Go find that croc king!-" << endl << endl;
                areachoiceint = 3;
            }
            else if (areachoice == "Hopscotch Highlands" || areachoice == "hopscotch highlands" || areachoice == "Hopscotch highlands") {
                cout << endl;
                cout << "-Welcome to the land of the kangaroos, attack that zoo owner!-" << endl << endl;
                areachoiceint = 4;
            }
            else if (areachoice == "Skeletal Sanctum" || areachoice == "skeletal sanctum" || areachoice == "Skeletal sanctum") {
                cout << endl;
                cout << "-Welcome to the graveyeard of your dead family...just kidding. Look out there's a skeleton!-" << endl << endl;
                areachoiceint = 5;
            }
            else {
                cout << "That area doesn't exist so I guess I'll choose for you" << endl;
                random_device r;
                int x = 0;
                x = r() % 5 + 1;
    switch (x) {
        case 0:
            if (cin.fail()) {
                cout << endl;
                cout << "----------------------" << endl;
                cout << "I chose an area for you." << endl;
                cout << "----------------------" << endl << endl;
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                areachoiceint = r() % 5 + 1;
                break;
            }
        case 1: 
            areachoice = "Mushroom Kingdom";
            cout << endl;
            cout << "-Welcome to the happy Kingdom of the Mushrooms! Normally you would be welcomed by, well a mushroom, but right now they are being invaded. Go get them!-" << endl << endl;;
            areachoiceint = 1;
            break;
        case 2: 
            areachoice = "Gooey Glade";
            cout << endl;
            cout << "-Welcome to the uneasy feeling area of the slimes. Good Luck Surviving!-" << endl << endl;
            areachoiceint = 2;
            break;
        case 3: 
            areachoice = "Croc Isle";
            cout << endl;
            cout << "-Welcome to the land of the crocs. Go find that croc king!-" << endl << endl;
            areachoiceint = 3;
            break;
        case 4: 
            areachoice = "Hopscotch Highlands";
            cout << endl;
            cout << "-Welcome to the land of the kangaroos, attack that zoo owner!-" << endl << endl;
            areachoiceint = 4;
            break;
        case 5: 
            areachoice = "Skeletal Sanctum";
            cout << endl;
            cout << "-Welcome to the graveyeard of your dead family...just kidding. Look out there's a skeleton!-" << endl << endl;
            areachoiceint = 5;
            break;
        default: 
            if (cin.fail()) {
            cout << endl;
            cout << "----------------------" << endl;
            cout << "I chose an area for you." << endl;
            cout << "----------------------" << endl << endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            areachoiceint = r() % 5 + 1;
            break;
                }
            }
    }
    random_device r;
    int classcurrency = 0;
    Enemy* Slime = generateEnemy(Knight.getbaselevel());
    delete Slime;
    if (areachoiceint == 1) {
        Enemy* Slime = generateEnemy(Knight.getbaselevel());
    }
    else if (areachoiceint == 2) {
        Enemy* Slime = generateEnemy2(Knight.getbaselevel());
    }
    else if (areachoiceint == 3) {
        Enemy* Slime = generateEnemy3(Knight.getbaselevel());
    }
    else if (areachoiceint == 4) {
        Enemy* Slime = generateEnemy4(Knight.getbaselevel());
    }
    else if (areachoiceint == 5) {
        Enemy* Slime = generateEnemy5(Knight.getbaselevel());
    }

    while (Knight.isAlive() && Slime->isAlive()) {
        Knight.checkitems();
        Knight.attack(Slime);
        if (Slime->gethealth() <= 0 && Knight.usinginvispotion == false) {
            cout << Slime->getname() << " has 0 health remaining." << endl;
        }
        else if (Slime->gethealth() > 0 && Knight.usinginvispotion == false && Knight.trickstermovebool == false && Knight.warforgedmovebool == false) {
            cout << Slime->getname() << " has " << Slime->gethealth() << " health remaining." << endl;
        }
        cout << "-----------------------------------------------" << endl;
        Slime->attack(&Knight);
        if (Knight.gethealth() <= 0) {
            cout << Knight.getname() << ", you have 0 health remaining." << endl;
        }
        else if (Knight.gethealth() > 0 && Knight.usinginvispotion == false) {
            cout << Knight.getname() << ", you have " << Knight.gethealth() << " health remaining." << endl;
        }
        cout << "-----------------------------------------------" << endl;
        if (!Slime->isAlive()) {
            if (Knight.usinginvispotion == true) {
                delete Slime;
                cout << "You have escaped from this enemy using your invisibility. You will get no rewards for this escape." << endl;
                if (areachoiceint == 1) {
                    Enemy* Slime = generateEnemy(Knight.getbaselevel());
                }
                else if (areachoiceint == 2) {
                    Enemy* Slime = generateEnemy2(Knight.getbaselevel());
                }
                else if (areachoiceint == 3) {
                    Enemy* Slime = generateEnemy3(Knight.getbaselevel());
                }
                else if (areachoiceint == 4) {
                    Enemy* Slime = generateEnemy4(Knight.getbaselevel());
                }
                else if (areachoiceint == 5) {
                    Enemy* Slime = generateEnemy5(Knight.getbaselevel());
                }
                int enemyrandommessage;
                enemyrandommessage = r() % 5;
                if (enemyrandommessage == 0) {
                    cout << "A new " << Slime->getname() << " has appeared, stab it!!" << endl;
                    cout << "-----------------------------------------------" << endl;
                }
                else if (enemyrandommessage == 1) {
                    cout << "A " << Slime->getname() << " is approaching you! BE wary." << endl;
                    cout << "-----------------------------------------------" << endl;
                }
                else if (enemyrandommessage == 2) {
                    cout << "A " << Slime->getname() << " is preparing to attack, CHARGE!!!" << endl;
                    cout << "-----------------------------------------------" << endl;
                }
                else if (enemyrandommessage == 3) {
                    cout << "Reinfocements are approaching, be careful!" << endl;
                    cout << "A " << Slime->getname() << " has appeared." << endl;
                    cout << "-----------------------------------------------" << endl;
                }
                else if (enemyrandommessage == 4) {
                    cout << "This " << Slime->getname() << " seems mad that you killed his friend." << endl;
                    cout << "-----------------------------------------------" << endl;
                }
                Knight.usinginvispotion = false;
            }
            else if (Knight.usinginvispotion == false) {
                delete Slime;
                classcurrency += 1;
                if (classcurrency == 50 || classcurrency == 100 || classcurrency == 150) {
                    cout << "Which stat would you like to upgrade? (1=hp, 2=atk, 3=def, 4=lvl, 5=extra life) *Note* Only hp can be upgraded more than once." << endl;
                    int stat = 0;
                    cin >> stat;
                    switch (stat) {
                    case 1:
                        Knight.maxhealthupgrade = true;
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
                    case 4:
                        Knight.levelupgrade = true;
                        cout << "You are now level " << Knight.getlevel() << "." << endl;
                        cout << "-----------------------------------------------" << endl;
                        break;
                    case 5:
                        Knight.addlives(1);
                        cout << "You now have " << Knight.getlives() << " lives" << endl;
                        cout << "-----------------------------------------------" << endl;
                        break;
                    default:
                        cout << "That choice doesn't exist, I'll choose for you." << endl;
                        int x = 0;
                        x = r() % 5 + 1;
                        if (x == 1) {
                            Knight.maxhealthupgrade = true;
                        }
                        else if (x == 2) {
                            Knight.attackupgrade = true;
                        }
                        else if (x == 3) {
                            Knight.defenceupgrade = true;
                        }
                        else if (x == 4) {
                            Knight.levelupgrade = true;
                        }
                        else {
                            Knight.addlives(1);
                        }
                        break;
                    }
                }
                else if (classcurrency == 20 || classcurrency == 40 || classcurrency == 60 || classcurrency == 80 || classcurrency == 100 || classcurrency == 120 || classcurrency == 140 || classcurrency == 160 || classcurrency == 180 && Knight.playercompanion == true) {
                    cout << "You have found a rare treasure!" << endl;
                    random_device r;
                    int treasure;
                    treasure = r() % 99 + 1;
                    if (treasure <= 30) {
                        Knight.helmet = true;
                        cout << "You got a fancy hat." << endl;
                        cout << endl;
                        treasure = 0;
                    }
                    else if (treasure > 30 && treasure <= 60) {
                        Knight.chestplate = true;
                        cout << "You have acquired a weird robe." << endl;
                        cout << endl;
                        treasure = 0;
                    }
                    else if (treasure > 61 && treasure <= 90) {
                        Knight.boots = true;
                        cout << "You put on some cool shoes." << endl;
                        cout << endl;
                        treasure = 0;
                    }
                    else {
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
                else if (classcurrency == 20 || classcurrency == 40 || classcurrency == 60 || classcurrency == 80 || classcurrency == 100 || classcurrency == 120 || classcurrency == 140 || classcurrency == 160 || classcurrency == 180) {
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
                        random_device r;
                        int legend;
                        legend = r() % 3;
                        if (legend == 0) {
                            cout << "You acquired the armor of the legend...Vladimir!" << endl;
                            Knight.vladimirsArmor = true;
                            cout << endl;
                            treasure = 0;
                        }
                        else if (legend == 1) {
                            cout << "You acquired the armor of the legend...Lockhart!" << endl;
                            Knight.lockhartsArmor = true;
                            cout << endl;
                            treasure = 0;
                        }
                        else {
                            cout << "You acquired the armor of the legend...Narso!" << endl;
                            Knight.narsosArmor = true;
                            cout << endl;
                            treasure = 0;
                        }
                    }
                }
                Knight.incrementbaselevel();
                Knight.incrementkills();
                Knight.storetracker += 1;
                Knight.Goldloom += r() % 26 + 10;
                if (Knight.isAlive() == true && Knight.getbaselevel() == 50 && playerclasschoice == 6) {
                    Knight.trickstermove = true;
                    cout << "You have unlocked your Trickster skill, Confuse!" << endl;
                }
                else if (Knight.isAlive() == true && Knight.getbaselevel() == 75 && playerclasschoice == 4) {
                    Knight.warforgedmove = true;
                    cout << "You have unlocked your Warforged Engineer skill, Guardians Respite!" << endl;
                }
                else if (Knight.isAlive() == true && Knight.getbaselevel() == 90 && playerclasschoice == 3) {
                    Knight.soulweavermove = true;
                    cout << "You have unlocked your Soulweaver skill, Fortuitous Gambit!" << endl;
                }
                else if (Knight.isAlive() == true && Knight.getbaselevel() == 80 && playerclasschoice == 1) {
                    Knight.knightmove = true;
                    cout << "You have unlocked your special Knight skill, Titans Strike!" << endl;
                }
                else if (Knight.isAlive() == true && Knight.getbaselevel() == 75 && playerclasschoice == 5) {
                    Knight.dreadnoughtmove = true;
                    cout << "You have unlocked your special Dreadnought skill, Healing Remedy!" << endl;
                }
                if (areachoiceint == 1) {
                    Enemy* Slime = generateEnemy(Knight.getbaselevel());
                }
                else if (areachoiceint == 2) {
                    Enemy* Slime = generateEnemy2(Knight.getbaselevel());
                }
                else if (areachoiceint == 3) {
                    Enemy* Slime = generateEnemy3(Knight.getbaselevel());
                }
                else if (areachoiceint == 4) {
                    Enemy* Slime = generateEnemy4(Knight.getbaselevel());
                }
                else if (areachoiceint == 5) {
                    Enemy* Slime = generateEnemy5(Knight.getbaselevel());
                }
                cout << "You are now level " << Knight.getlevel() << "." << endl;
               int enemyrandommessage;
                enemyrandommessage = r() % 5;
                if (enemyrandommessage == 0) {
                    cout << "A new enemy has appeared, stab it!!" << endl;
                    cout << "-----------------------------------------------" << endl;
                }
                else if (enemyrandommessage == 1) {
                    cout << "A new enemy is approaching you! BE wary." << endl;
                    cout << "-----------------------------------------------" << endl;
                }
                else if (enemyrandommessage == 2) {
                    cout << "An enemy is preparing to attack, CHARGE!!!" << endl;
                    cout << "-----------------------------------------------" << endl;
                }
                else if (enemyrandommessage == 3) {
                    cout << "Reinfocements are approaching, be careful!" << endl;
                    cout << "-----------------------------------------------" << endl;
                }
                else if (enemyrandommessage == 4) {
                    cout << "This guy seems mad that you killed his friend. GET HIM!!" << endl;
                    cout << "-----------------------------------------------" << endl;
                }
                cout << endl;
                int item = 0;
                item = r() % 100 + 1;
                if (item == 1) {
                    Knight.Excalibur = true;
                    cout << "--You gained a super item! (Excalibur)--" << endl;
                    cout << endl;
                }
                else if (item == 2) {
                    Knight.superiorleveltonic = true;
                    cout << "--You gained a super item! (SuperiorLevelTonic)--" << endl;
                    cout << endl;
                }
                else if (item == 3 || item == 4 || item == 5) {
                    Knight.Knife = true;
                    cout << "--You gained an item! (Knife)--" << endl;
                    cout << endl;
                }
                else if (item == 6 || item == 7) {
                    Knight.Sword = true;
                    cout << "--You gained an item! (Sword)--" << endl;
                    cout << endl;
                }
                else if (item == 8 || item == 9 || item == 10) {
                    Knight.leveltonic = true;
                    cout << "--You gained an item! (LevelTonic)--" << endl;
                    cout << endl;
                }
                else if (item == 11) {
                    Knight.superpotion = true;
                    cout << "--You gained a godly item! (Super potion)--" << endl;
                    cout << endl;
                }
                else if (item >= 12 && item <= 13) {
                    Knight.healthtonic = true;
                    cout << "--You gained a health tonic! (Healing potion)--" << endl;
                    cout << endl;
                }
                else if (item == 14 || item == 15 || item == 16) {
                    Knight.accuratesword = true;
                    cout << "--You gained the legendary accuracy sword! (never miss again)--" << endl;
                    cout << endl;
                }
                else if (item == 17 || item == 18 || item == 19 || item == 20) {
                    Knight.shield = true;
                    cout << "--You can now dual wield with a shield! (Shield)--" << endl;
                    cout << endl;
                }
                if (Knight.getbaselevel() >= 200 && Knight.isAlive() == true) {
                    break;
                }
            }
        }
    }
        if (!Knight.isAlive() && Knight.killplayer == false) {
            cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
            int deathmessage = 0;
            deathmessage = r() % 5 + 1;
            if (deathmessage == 1) {
                cout << "You have been slain, better luck next time soldier." << endl;
            }
            else if (deathmessage == 2) {
                cout << "The enemies were too powerful... try again." << endl;
            }
            else if (deathmessage == 3) {
                cout << "You have now become their food, try again once you get stronger." << endl;
            }
            else if (deathmessage == 4) {
                cout << "They have erased the memory of you...the end." << endl;
            }
            else {
                cout << "The attackers have now taken over the world, you failed." << endl;
            }
            cout << endl;
            cout << "--Your overall stats were--" << "-" << endl;
            cout << "-Baselevel = " << Knight.getbaselevel() << "-" << endl;
            cout << "-Level = " << Knight.getlevel() << "-" << endl;
            cout << "-Maxhealth = " << Knight.getmaxhealth() << "-" << endl;
            cout << "-Health = " << Knight.gethealth() << "-" << endl;
            cout << "-Attack = " << Knight.getattackPower() << "-" << endl;
            cout << "-Defence = " << Knight.getdefence() << "-" << endl;
            cout << "-Kills = " << Knight.getkills() << "-" << endl;
            cout << "-Lives = " << Knight.getlives() << "-" << endl;
            if (Knight.getclass() == 1) {
                cout << "-Class = Knight-" << endl;
            }
            else if (Knight.getclass() == 2) {
                cout << "-Class = Executioner-" << endl;
            }
            else if (Knight.getclass() == 3) {
                cout << "-Class = Soulweaver-"<< endl;
            }
            else if (Knight.getclass() == 4) {
                cout << "-Class = Warforged Engineer-" << endl;
            }
            else if (Knight.getclass() == 5) {
                cout << "-Class = Dreadnought-" << endl;
            }
            else if (Knight.getclass() == 6) {
                cout << "-Class = Trickster-"<< endl;
            }
            cout << "Would you like to try Again? (Y/N)" << endl;
            string retry = "";
            cin >> retry;
            if (retry == "N" || retry == "n") {
                break;
            }
            else if (retry == "Y" || retry == "y") {
                cout << endl << endl;
            }
            else {
                cout << "Not a valid answer, I'm kicking you out." << endl;
                break;
            }
        }
        else if (Knight.killplayer == true) {
            cout << Knight.getname() << " you should try to be less indecisive." << endl;
            cout << "Game Over." << endl << endl << endl << endl << endl << endl << endl << endl << endl;
            break;
        }
        else {
            cout << "You have saved the universe from the Creator and became a hero!" << endl;
            cout << "--Your overall stats were--" << "-" << endl;
            cout << "-Baselevel = " << Knight.getbaselevel() << "-" << endl;
            cout << "-Level = " << Knight.getlevel() << "-" << endl;
            cout << "-Maxhealth = " << Knight.getmaxhealth() << "-" << endl;
            cout << "-Health = " << Knight.gethealth() << "-" << endl;
            cout << "-Attack = " << Knight.getattackPower() << "-" << endl;
            cout << "-Defence = " << Knight.getdefence() << "-" << endl;
            cout << "-Kills = " << Knight.getkills() << "-" << endl;
            cout << "-Lives = " << Knight.getlives() << "-" << endl;
            cout << "-Store Currency = " << Knight.Goldloom << "-" << endl;
            if (Knight.getclass() == 1) {
                cout << "-Class = Knight" << "-" << endl;
            }
            else if (Knight.getclass() == 2) {
                cout << "-Class = Executioner" << "-" << endl;
            }
            else if (Knight.getclass() == 3) {
                cout << "-Class = Soulweaver" << "-" << endl;
            }
            else if (Knight.getclass() == 4) {
                cout << "-Class = Warforged Engineer" << "-" << endl;
            }
            else if (Knight.getclass() == 5) {
                cout << "-Class = Dreadnought" << "-" << endl;
            }
            else if (Knight.getclass() == 6) {
                cout << "-Class = Trickster" << "-" << endl;
            }
            cout << "The world thanks you for your service, " << Knight.getname() << "." << endl;
            cout << "Play Again? (Y/N)" << endl;
            string playagain = "";
            cin >> playagain;
            if (playagain == "N" || playagain == "n") {
                cout << "Hope to see you again soon!";
                break;
            }
            else if (playagain == "Y" || playagain == "y") {
                cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
            }
            else {
                cout << "Not a valid answer, goodbye." << endl;
                break;
            }
        }
    }
    return 0;
}