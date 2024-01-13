#include "Player.h"
#include <iostream>
#include <random>
#include <cmath>
using namespace std;

Player::Player(string n, int maxh, int hp, int atk, int def, int baselvl, int live) {
    name = n;
    maxhealth = maxh;
    health = hp;
    attackPower = atk;
    defence = def;
    baselevel = baselvl;
    lives = live;
}
int tracklevelpotion = 0, tracksuperpotion = 0, tracksuperiorlevelpotion = 0;
void Player::playerclassexecutioner() {
    maxhealth -= 20;
    health -= 10;
    attackPower += 4;
    defence += 1;
    classtype = 2;
}
void Player::playerclasssoulweaver() {
    maxhealth -= 10;
    health -= 5;
    attackPower -= 1;
    defence += 2;
    addlives(1);
    classtype = 3;
}
void Player::playerclasswarforged() {
    maxhealth += 30;
    health += 15;
    attackPower -= 2;
    defence += 3;
    classtype = 4;
}
void Player::playerclassdreadnought() {
    maxhealth += 50;
    health += 25;
    attackPower -= 3;
    defence += 2;
    classtype = 5;
}
void Player::playerclasstrickster() {
    maxhealth -= 10;
    health -= 5;
    attackPower += 1;
    defence += 1;
    classtype = 6;
}
void Player ::forgerestarting() {
    string forgeUpgrade = "", forgechoice = "";
        cout << "What would you like to upgrade?" << endl;
        cin >> ws;
        getline(cin, forgeUpgrade);
        if (forgeUpgrade == "narso's armor" || forgeUpgrade == "Narso's armor" || forgeUpgrade == "Narso's Armor" || forgeUpgrade == "narso's Armor" && armorupgrade == true || lightningshard == true) {
            cout << "What would you like to use to upgrade Narso's Armor? (Lightning Shard or Armor Upgrade)" << endl;
            cin >> ws;
            getline(cin, forgechoice);
            if (forgechoice == "Lightning Shard" || forgechoice == "Lightning shard" || forgechoice == "lightning shard" || forgechoice == "lightning Shard") {
                cout << "You have upgraded Narso's Armor using a Lightning Shard!" << endl;
                lightningGodarmor = true;
                checkitems();
            }
            else if (forgechoice == "Armor Upgrade" || forgechoice == "Armor upgrade" || forgechoice == "armor Upgrade" || forgechoice == "armor upgrade") {
                cout << "You have upgraded Narso's Armor using an Armor Upgrade!" << endl;
                upgradedgodarmor = true;
                checkitems();
            }
        }
        else if (forgeUpgrade == "lockhart's armor" || forgeUpgrade == "Lockhart's armor" || forgeUpgrade == "Lockhart's Armor" || forgeUpgrade == "lockhart's Armor" && armorupgrade == true || lightningshard == true) {
            cout << "What would you like to use to upgrade Lockhart's Armor? (Lightning Shard or Armor Upgrade)" << endl;
            cin >> ws;
            getline(cin, forgechoice);
            if (forgechoice == "Lightning Shard" || forgechoice == "Lightning shard" || forgechoice == "lightning shard" || forgechoice == "lightning Shard") {
                cout << "You have upgraded Lockhart's Armor using a Lightning Shard!" << endl;
                lightningGodarmor = true;
                checkitems();
            }
            else if (forgechoice == "Armor Upgrade" || forgechoice == "Armor upgrade" || forgechoice == "armor Upgrade" || forgechoice == "armor upgrade") {
                cout << "You have upgraded Lockhart's Armor using an Armor Upgrade!" << endl;
                upgradedgodarmor = true;
                checkitems();
            }
        }
        else if (forgeUpgrade == "vladimir's armor" || forgeUpgrade == "Vladimir's armor" || forgeUpgrade == "Vladimir's Armor" || forgeUpgrade == "vladimir's Armor" && armorupgrade == true || lightningshard == true) {
            cout << "What would you like to use to upgrade Vladimir's Armor? (Lightning Shard or Armor Upgrade)" << endl;
            cin >> ws;
            getline(cin, forgechoice);
            if (forgechoice == "Lightning Shard" || forgechoice == "Lightning shard" || forgechoice == "lightning shard" || forgechoice == "lightning Shard") {
                cout << "You have upgraded Vladimir's Armor using a Lightning Shard!" << endl;
                lightningGodarmor = true;
                checkitems();
            }
            else if (forgechoice == "Armor Upgrade" || forgechoice == "Armor upgrade" || forgechoice == "armor Upgrade" || forgechoice == "armor upgrade") {
                cout << "You have upgraded Vladimir's Armor using an Armor Upgrade!" << endl;
                upgradedgodarmor = true;
                checkitems();
            }
        }
        else if (forgeUpgrade == "glass shoes" || forgeUpgrade == "Glass shoes" || forgeUpgrade == "glass Shoes"|| forgeUpgrade == "Glass Shoes" && armorupgrade == true || lightningshard == true) {
            cout << "What would you like to use to upgrade these Glass Shoes? (Lightning Shard or Armor Upgrade)" << endl;
            cin >> ws;
            getline(cin, forgechoice);
            if (forgechoice == "Lightning Shard" || forgechoice == "Lightning shard" || forgechoice == "lightning shard" || forgechoice == "lightning Shard") {
                cout << "You have upgraded your Glass Shoes using a Lightning Shard!" << endl;
                lightningglassshoes = true;
                checkitems();
            }
            else if (forgechoice == "Armor Upgrade" || forgechoice == "Armor upgrade" || forgechoice == "armor Upgrade" || forgechoice == "armor upgrade") {
                cout << "You have upgraded your Glass Shoes using an Armor Upgrade!" << endl;
                upgradedglassshoes = true;
                checkitems();
            }
        }
        else if (forgeUpgrade == "mystic helmet" || forgeUpgrade == "Mystic helmet" || forgeUpgrade == "mystic Helmet" || forgeUpgrade == "Mystic Helmet" && armorupgrade == true || lightningshard == true) {
            cout << "What would you like to use to upgrade? (Lightning Shard or Armor Upgrade)" << endl;
            cin >> ws;
            getline(cin, forgechoice);
            if (forgechoice == "Lightning Shard" || forgechoice == "Lightning shard" || forgechoice == "lightning shard" || forgechoice == "lightning Shard") {
                cout << "You have upgraded your Mystic Helmet using a Lightning Shard!" << endl;
                lightningmystichelmet = true;
                checkitems();
            }
            else if (forgechoice == "Armor Upgrade" || forgechoice == "Armor upgrade" || forgechoice == "armor Upgrade" || forgechoice == "armor upgrade") {
                cout << "You have upgraded your Mystic Helmet using an Armor Upgrade!" << endl;
                upgradedmystichelmet = true;
                checkitems();
            }
        }
        else if (forgeUpgrade == "dragonscale chestplate" || forgeUpgrade == "Dragonscale chestplate" || forgeUpgrade == "dragonscale Chestplate" || forgeUpgrade == "Dragonscale Chestplate" && armorupgrade == true || lightningshard == true) {
            cout << "What would you like to use to upgrade? (Lightning Shard or Armor Upgrade)" << endl;
            cin >> ws;
            getline(cin, forgechoice);
            if (forgechoice == "Lightning Shard" || forgechoice == "Lightning shard" || forgechoice == "lightning shard" || forgechoice == "lightning Shard") {
                cout << "You have upgraded Nyour Dragonscale Chestplate using a Lightning Shard!" << endl;
                lightningdragonscalechestplate = true;
                checkitems();
            }
            else if (forgechoice == "Armor Upgrade" || forgechoice == "Armor upgrade" || forgechoice == "armor Upgrade" || forgechoice == "armor upgrade") {
                cout << "You have upgraded your Dragonscale Chestplate using an Armor Upgrade!" << endl;
                upgradedDragonscalechestplate = true;
                checkitems();
            }
        }
        else if (forgeUpgrade == "flaming longsword" || forgeUpgrade == "Flaming Longsword" || forgeUpgrade == "flaming Longsword" || forgeUpgrade == "Flaming longsword" && weaponupgrade == true || lightningshard == true) {
            cout << "What would you like to use to upgrade? (Lightning Shard or Armor Upgrade)" << endl;
            cin >> ws;
            getline(cin, forgechoice);
            if (forgechoice == "Lightning Shard" || forgechoice == "Lightning shard" || forgechoice == "lightning shard" || forgechoice == "lightning Shard") {
                cout << "You have upgraded your Flaming Longsword using a Lightning Shard!" << endl;
                lightningflaminglongsword = true;
                checkitems();
            }
            else if (forgechoice == "Armor Upgrade" || forgechoice == "Armor upgrade" || forgechoice == "armor Upgrade" || forgechoice == "armor upgrade") {
                cout << "You have upgraded your Flaming Longsword using a Weapon Upgrade!" << endl;
                upgradedflaminglongsword = true;
                checkitems();
            }
        }
        else if (forgeUpgrade == "excalibur" || forgeUpgrade == "Excalibur" && weaponupgrade == true || lightningshard == true) {
            cout << "What would you like to use to upgrade? (Lightning Shard or Armor Upgrade)" << endl;
            cin >> ws;
            getline(cin, forgechoice);
            if (forgechoice == "Lightning Shard" || forgechoice == "Lightning shard" || forgechoice == "lightning shard" || forgechoice == "lightning Shard") {
                cout << "You have upgraded your Excalibur using a Lightning Shard!" << endl;
                lightningexcalibur = true;
                checkitems();
            }
            else if (forgechoice == "Armor Upgrade" || forgechoice == "Armor upgrade" || forgechoice == "armor Upgrade" || forgechoice == "armor upgrade") {
                cout << "You have upgraded your Excalibur using a Weapon Upgrade!" << endl;
                upgradedexcalibur = true;
                checkitems();
            }
        }
        else if (forgeUpgrade == "Voidshroud Slicer" || forgeUpgrade == "Voidshroud slicer" || forgeUpgrade == "voidshroud Slicer" || forgeUpgrade == "voidshroud slicer" && weaponupgrade == true || lightningshard == true) {
            cout << "What would you like to use to upgrade? (Lightning Shard or Armor Upgrade)" << endl;
            cin >> ws;
            getline(cin, forgechoice);
            if (forgechoice == "Lightning Shard" || forgechoice == "Lightning shard" || forgechoice == "lightning shard" || forgechoice == "lightning Shard") {
                cout << "You have upgraded your Voidshroud Slicer using a Lightning Shard!" << endl;
                lightningvoidshroudslicer = true;
                checkitems();
            }
            else if (forgechoice == "Armor Upgrade" || forgechoice == "Armor upgrade" || forgechoice == "armor Upgrade" || forgechoice == "armor upgrade") {
                cout << "You have upgraded your Voidshroud Slicer using a Weapon Upgrade!" << endl;
                upgradedvoidshroudslicer = true;
                checkitems();
            }
        }
        else {
            cout << "That item does not exist. Try again." << endl;
        }
}
void Player::setmaxhealth() {
    int charactermaxhealth = 0;
    if (level >= 500) {
        charactermaxhealth = 500;
    }
    else if (level >= 450) {
        charactermaxhealth = 450;
    }
    else if (level >= 400) {
        charactermaxhealth = 400;
    }
    else if (level >= 350) {
        charactermaxhealth = 350;
    }
    else if (level >= 300) {
        charactermaxhealth = 300;
    }
    else if (level >= 250) {
        charactermaxhealth = 250;
    }
    else if (level >= 200) {
        charactermaxhealth = 200;
    }
    else if (level >= 150) {
        charactermaxhealth = 150;
    }
    else if (level >= 100) {
        charactermaxhealth = 100;
    }
    else if (level >= 75) {
        charactermaxhealth = 75;
    }
    else if (level >= 50) {
        charactermaxhealth = 50;
    }
    else {
        charactermaxhealth = 30;
    }
    //adds more health based on maxhealthupgrade amount
    if (maxhealthtracker >= 1) {
        charactermaxhealth += ceil(50 * maxhealthtracker);
    }
    //adds more health based on items
    if (upgradedexcalibur == true) {
        charactermaxhealth += trackexcaliburmaxhealth;
    }
    if (upgradedflaminglongsword == true) {
        charactermaxhealth += trackflamingmaxhealth;
    }
    if (upgradedvoidshroudslicer == true) {
        charactermaxhealth += trackvoidshroudmaxhealth;
    }
    if (upgradedDragonscalechestplate == true) {
        charactermaxhealth += 25;
    }
    if (lightningdragonscalechestplate == true) {
        charactermaxhealth += 14;
    }
    if (upgradedgodarmor == true) {
        charactermaxhealth += 40;
    }
    if (upgradedmystichelmet == true) {
        charactermaxhealth += 20;
    }
    if (upgradedglassshoes == true) {
        charactermaxhealth += 14;
    }
    if (mystichelmet == true) {
        charactermaxhealth += 8;
    }
    if (helmet == true) {
        charactermaxhealth += 5;
    }
    if (boots == true) {
        charactermaxhealth += 4;
    }
    if (chestplate == true) {
        charactermaxhealth += 8;
    }
    if (narsosArmor == true) {
        charactermaxhealth += 12;
    }
    if (lockhartsArmor == true) {
        charactermaxhealth += 12;
    }
    if (vladimirsArmor == true) {
        charactermaxhealth += 12;
    }
    //maxhealth upgrade based on faction
    if (factionchoiceint == 3) {
        charactermaxhealth += ceil(.01 * (kills - 50));
    }
    if (factionchoiceint == 4) {
        charactermaxhealth += ceil(.01 * (kills - 50));
    }
    //maxhealth based on classes
    if (classtype == 1) {

    }
    maxhealth = charactermaxhealth;
}
void Player::checkitems() {
    if (Excalibur == true) {
         if (excaliburtracker == 0) {
            attackPower += 14;
            excaliburtracker += 1;
        }
    }
    else if (VoidshroudSlicer == true) {
        if (factionchoiceint == 1 && voidshroudtracker > 0 && voidshroudtracker < 2) {
            attackPower += 6;
            voidshroudtracker += 1;
        }
        else if (voidshroudtracker == 0) {
            attackPower += 18;
            voidshroudtracker += 1;
        }
    }
    else if (Knife == true) {
         if (knifetracker == 0) {
            attackPower += 2;
            knifetracker += 1;
      }
    }
    else if (Sword == true) {
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
        if (helmtracker == 0) {
         defence += 4;
         maxhealth += 5;
         helmtracker += 1;
        }
    }
    else if (chestplate == true) {
         if (chesttracker == 0) {
           defence += 7;
           maxhealth += 8;
           chesttracker += 1;
        }
    }
    else if (boots == true) {
        if (boottracker == 0) {
          defence += 3;
          maxhealth += 4;
          boottracker += 1;
        }
    }
    else if (shield == true) {
        if (shieldtracker == 0) {
          defence += 10;
          shieldtracker += 1;
        }
    }
    else if (narsosArmor == true || lockhartsArmor == true || vladimirsArmor == true) {
        if (godtracker == 0) {
            defence += 20;
            maxhealth += 12;
            godtracker += 1;
        }
    }
    else if (defenceupgrade == true) {
        if (defenceupgradetracker == 0) {
            defence += 10;
            defenceupgradetracker += 1;
        }
    }
    else if (maxhealthupgrade == true) {
        maxhealthtracker += 1;
        setmaxhealth();
        health += 25;
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
        if (factionchoiceint == 2 && flamingtracker > 0 && flamingtracker < 2) {
            attackPower += 4;
            flamingtracker += 1;
        }
        else if (flamingtracker == 0) {
            attackPower += 11;
            flamingtracker += 1;
        }
    }
    else if (dragonscalechestplate == true) {
        if (factionchoiceint == 4 && dragontracker > 0 && dragontracker < 2) {
            defence += 5;
            dragontracker += 1;
        }
        if (dragontracker == 0) {
            defence += 11;
            maxhealth += 14;
            dragontracker += 1;
        }
    }
    else if (glassshoes == true) {
        if (shoetracker == 0) {
            defence += 7;
            maxhealth += 6;
            shoetracker += 1;
        }
    }
    else if (mystichelmet == true) {
        if (factionchoiceint == 3 && mystictracker > 0 && mystictracker < 2) {
            defence += 3;
            mystictracker += 1;
        }
        else if (mystictracker == 0) {
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
    else if (lightningdragonscalechestplate == true) {
        if (factionchoiceint == 4 && lightningdragontracker > 0 && lightningdragontracker < 2) {
            defence += 5;
            lightningdragontracker += 1;
        }
        else if (lightningdragontracker == 0) {
            defence += 11;
            maxhealth += 14;
            attackPower += 25;
            lightningdragontracker += 1;
        }
    }
    else if (upgradedDragonscalechestplate == true) {
        if (factionchoiceint == 4 && upgradeddragontracker > 0 && upgradeddragontracker < 2) {
            defence += 10;
            upgradeddragontracker += 1;
        }
       else if (upgradeddragontracker == 0) {
            defence += 18;
            maxhealth += 25;
            upgradeddragontracker += 1;
        }
    }
    else if (lightningexcalibur == true) {
        if (lightningexcaliburtracker == 0) {
            attackPower += 35;
            lightningexcaliburtracker += 1;
        }
    }
    else if (upgradedexcalibur == true) {
        if (upgradedexcaltracker == 0) {
            attackPower += 18;
            trackexcaliburmaxhealth += ceil(maxhealth * .25);
            maxhealth += trackexcaliburmaxhealth;
            upgradedexcaltracker += 1;
        }
    }
    else if (lightningflaminglongsword == true) {
        if (factionchoiceint == 2 && lightninglongswordtracker > 0 && lightninglongswordtracker < 2) {
            attackPower += 7;
            lightninglongswordtracker += 1;
        }
        else if (lightninglongswordtracker == 0) {
            attackPower += 20;
            lightninglongswordtracker += 1;
        }
    }
    else if (upgradedflaminglongsword == true) {
        if (factionchoiceint == 2 && upgradedlongswordtracker > 0 && upgradedlongswordtracker < 2) {
            attackPower += 4;
            defence += 3;
            upgradedlongswordtracker += 1;
        }
        else if (upgradedlongswordtracker == 0) {
            attackPower += 11;
            trackflamingmaxhealth += ceil(maxhealth * .1);
            maxhealth += trackflamingmaxhealth;
            upgradedlongswordtracker += 1;
        }
    }
    else if (lightningGodarmor == true) {
        if (lightninggodtracker == 0) {
            defence += 30;
            attackPower += 35;
            lightninggodtracker += 1;
        }
    }
    else if (upgradedgodarmor == true) {
        if (upgradedgodtracker == 0) {
            defence += 40;
            maxhealth += 40;
            upgradedgodtracker += 1;
        }
    }
    else if (upgradedmystichelmet == true) {
        if (factionchoiceint == 3 && upgradedmystictracker > 0 &&upgradedmystictracker < 2) {
            defence += 9;
            upgradedmystictracker += 1;
        }
        else if (upgradedmystictracker == 0) {
            defence += 16;
            maxhealth += 20;
            upgradedmystictracker += 1;
        }
    }
    else if (lightningmystichelmet == true) {
        if (factionchoiceint == 3 && lightningmystictracker > 0 &&lightningmystictracker < 2) {
            defence += 7;
            lightningmystictracker += 1;
        }
        else if (lightningmystictracker == 0) {
            defence += 12;
            attackPower += 20;
            lightningmystictracker += 1;
        }
    }
    else if (upgradedglassshoes == true) {
        if (upgradedglasstracker == 0) {
            defence += 11;
            maxhealth += 14;
            upgradedglasstracker += 1;
        }
    }
    else if (lightningglassshoes == true) {
        if (lightningglasstracker == 0) {
            defence += 9;
            attackPower += 12;
            lightningglasstracker += 1;
        }
    }
    else if (upgradedvoidshroudslicer == true) {
        if (factionchoiceint == 1 && upgradedvoidshroudtracker > 0 && upgradedvoidshroudtracker < 2) {
            attackPower += 8;
            upgradedvoidshroudtracker += 1;
        }
        else if (upgradedvoidshroudtracker == 0) {
            attackPower += 22;
            trackvoidshroudmaxhealth += ceil(maxhealth * .4);
            maxhealth += trackvoidshroudmaxhealth;
            upgradedvoidshroudtracker += 1;
        }
    }
    else if (lightningvoidshroudslicer == true) {
        if (factionchoiceint == 1 && lightningvoidshroudtracker > 0 && lightningvoidshroudtracker < 2) {
            attackPower += 18;
            defence += 5;
            lightningvoidshroudtracker += 1;
        }
        else if (lightningvoidshroudtracker == 0) {
            attackPower += 42;
            lightningvoidshroudtracker += 1;
        }
    }
}
void Player::attack(Character* Target) {
    random_device r;
    int playerInput, x, h;
    string purchasechoice = "", yesnobackpack = "", yesnopurchase = "", forgerestart = "";
    int accuracy = 0;
    int warforgedabilitytracker = 0;
    bool fallen = false;
    if (classtype == 1) { //knight attack messages |health =25|attackPower=4|lives=1|
        if (knightmove == true) {
            cout << "Choose: 1 (" << 4 + (((level >= 75) ? 30 : floor(level / 2.5))) + attackPower << "-" << 8 + (((level >= 75) ? 30 : floor(level / 2.5))) + attackPower << " dmg) 2 (" << 2 + (((level >= 75) ? 30 : floor(level / 2.5))) + attackPower << "-" << 5 + (((level >= 75) ? 30 : floor(level / 2.5))) + attackPower << " lifesteal) 3 (" << 6 + (((level >= 75) ? 30 : floor(level / 2.5))) + attackPower << "-" << 11 + (((level >= 75) ? 30 : floor(level / 2.5))) + attackPower << "dmg) 4 (" << 6 + (((level >= 75) ? 30 : floor(level / 2.5))) + attackPower << "-" << 9 + (((level >= 75) ? 30 : floor(level / 2.5))) + attackPower << " heal) 5 (" << 7 + (((level >= 75) ? 30 : floor(level / 2.5))) + attackPower << "-" << 12 + (((level >= 75) ? 30 : floor(level / 2.5))) + attackPower << " lifesteal) 6 (Titans Strike) 7 (Store) 8 (Forge) 9 (Stats) 10 (Inventory) 0 (Special Skill Info)" << endl;
        }
        else if (level >= 50) {
            cout << "Choose: 1 (" << 4 + (((level >= 75) ? 30 : floor(level / 2.5))) + attackPower << "-" << 8 + (((level >= 75) ? 30 : floor(level / 2.5))) + attackPower << " dmg) 2 (" << 2 + (((level >= 75) ? 30 : floor(level / 2.5))) + attackPower << "-" << 5 + (((level >= 75) ? 30 : floor(level / 2.5))) + attackPower << " lifesteal) 3 (" << 6 + (((level >= 75) ? 30 : floor(level / 2.5))) + attackPower << "-" << 11 + (((level >= 75) ? 30 : floor(level / 2.5))) + attackPower << "dmg) 4 (" << 6 + (((level >= 75) ? 30 : floor(level / 2.5))) + attackPower << "-" << 9 + (((level >= 75) ? 30 : floor(level / 2.5))) + attackPower << " heal) 5 (" << 7 + (((level >= 75) ? 30 : floor(level / 2.5))) + attackPower << "-" << 12 + (((level >= 75) ? 30 : floor(level / 2.5))) + attackPower << " lifesteal) 7 (Store) 8 (Forge) 9 (Stats) 10 (Inventory) 0 (Special Skill Info) 0 (Special Skill Info)" << endl;
        }
        else if (level >= 25) {
            cout << "Choose: 1 (" << 4 + (((level >= 75) ? 30 : floor(level / 2.5))) + attackPower << "-" << 8 + (((level >= 75) ? 30 : floor(level / 2.5))) + attackPower << " dmg) 2 (" << 2 + (((level >= 75) ? 30 : floor(level / 2.5))) + attackPower << "-" << 5 + (((level >= 75) ? 30 : floor(level / 2.5))) + attackPower << " lifesteal) 3 (" << 6 + (((level >= 75) ? 30 : floor(level / 2.5))) + attackPower << "-" << 11 + (((level >= 75) ? 30 : floor(level / 2.5))) + attackPower << "dmg) 4 (" << 6 + (((level >= 75) ? 30 : floor(level / 2.5))) + attackPower << "-" << 9 + (((level >= 75) ? 30 : floor(level / 2.5))) + attackPower << " heal) 7 (Store) 8 (Forge) 9 (Stats) 10 (Inventory) 0 (Special Skill Info)" << endl;
        }
        else if (level >= 15) {
            cout << "Choose: 1 (" << 4 + (((level >= 75) ? 30 : floor(level / 2.5))) + attackPower << "-" << 8 + (((level >= 75) ? 30 : floor(level / 2.5))) + attackPower << " dmg) 2 (" << 2 + (((level >= 75) ? 30 : floor(level / 2.5))) + attackPower << "-" << 5 + (((level >= 75) ? 30 : floor(level / 2.5))) + attackPower << " lifesteal) 3 (" << 6 + (((level >= 75) ? 30 : floor(level / 2.5))) + attackPower << "-" << 11 + (((level >= 75) ? 30 : floor(level / 2.5))) + attackPower << "dmg) 7 (Store) 8 (Forge) 9 (Stats) 10 (Inventory) 0 (Special Skill Info)" << endl;
        }
        else {
            cout << "Choose: 1 (" << 4 + (((level >= 75) ? 30 : floor(level / 2.5))) + attackPower << "-" << 8 + (((level >= 75) ? 30 : floor(level / 2.5))) + attackPower << " dmg) 2 (" << 2 + (((level >= 75) ? 30 : floor(level / 2.5))) + attackPower << "-" << 5 + (((level >= 75) ? 30 : floor(level / 2.5))) + attackPower << " lifesteal) 7 (Store) 8 (Forge) 8 (Forge) 9 (Stats) 10 (Inventory) 0 (Special Skill Info)" << endl;
        }
    }
    if (classtype == 2) { //executioner attack messages |health =15|attackPower=7|lives=1|
        if (executionermove == true) {
  cout << "Choose: 1 (" << 4 + (((level >= 75) ? 30 : floor(level / 2.5))) + attackPower << "-" << 8 + (((level >= 75) ? 30 : floor(level / 2.5))) + attackPower << " dmg) 2 (" << 2 + (((level >= 75) ? 30 : floor(level / 2.5))) + attackPower << "-" << 5 + (((level >= 75) ? 30 : floor(level / 2.5))) + attackPower << " lifesteal) 3 (" << 6 + (((level >= 75) ? 30 : floor(level / 2.5))) + attackPower << "-" << 11 + (((level >= 75) ? 30 : floor(level / 2.5))) + attackPower << "dmg) 4 (" << 6 + (((level >= 75) ? 30 : floor(level / 2.5))) + attackPower << "-" << 9 + (((level >= 75) ? 30 : floor(level / 2.5))) + attackPower << " heal) 5 (" << 7 + (((level >= 75) ? 30 : floor(level / 2.5))) + attackPower << "-" << 12 + (((level >= 75) ? 30 : floor(level / 2.5))) + attackPower << " lifesteal) 6 (Soul Surge) 7 (Store) 8 (Forge) 9 (Stats) 10 (Inventory) 0 (Special Skill Info)" << endl;
        }
        else if (level >= 50) {
            cout << "Choose: 1 (" << 4 + (((level >= 75) ? 30 : floor(level / 2.5))) + attackPower << "-" << 8 + (((level >= 75) ? 30 : floor(level / 2.5))) + attackPower << " dmg) 2 (" << 2 + (((level >= 75) ? 30 : floor(level / 2.5))) + attackPower << "-" << 5 + (((level >= 75) ? 30 : floor(level / 2.5))) + attackPower << " lifesteal) 3 (" << 6 + (((level >= 75) ? 30 : floor(level / 2.5))) + attackPower << "-" << 11 + (((level >= 75) ? 30 : floor(level / 2.5))) + attackPower << "dmg) 4 (" << 6 + (((level >= 75) ? 30 : floor(level / 2.5))) + attackPower << "-" << 9 + (((level >= 75) ? 30 : floor(level / 2.5))) + attackPower << " heal) 5 (" << 7 + (((level >= 75) ? 30 : floor(level / 2.5))) + attackPower << "-" << 12 + (((level >= 75) ? 30 : floor(level / 2.5))) + attackPower << " lifesteal) 7 (Store) 8 (Forge) 9 (Stats) 10 (Inventory) 0 (Special Skill Info)" << endl;
        }
        else if (level >= 25) {
            cout << "Choose: 1 (" << 4 + (((level >= 75) ? 30 : floor(level / 2.5))) + attackPower << "-" << 8 + (((level >= 75) ? 30 : floor(level / 2.5))) + attackPower << " dmg) 2 (" << 2 + (((level >= 75) ? 30 : floor(level / 2.5))) + attackPower << "-" << 5 + (((level >= 75) ? 30 : floor(level / 2.5))) + attackPower << " lifesteal) 3 (" << 6 + (((level >= 75) ? 30 : floor(level / 2.5))) + attackPower << "-" << 11 + (((level >= 75) ? 30 : floor(level / 2.5))) + attackPower << "dmg) 4 (" << 6 + (((level >= 75) ? 30 : floor(level / 2.5))) + attackPower << "-" << 9 + (((level >= 75) ? 30 : floor(level / 2.5))) + attackPower << " heal) 7 (Store) 8 (Forge) 9 (Stats) 10 (Inventory) 0 (Special Skill Info)" << endl;
        }
        else if (level >= 15) {
            cout << "Choose: 1 (" << 4 + (((level >= 75) ? 30 : floor(level / 2.5))) + attackPower << "-" << 8 + (((level >= 75) ? 30 : floor(level / 2.5))) + attackPower << " dmg) 2 (" << 2 + (((level >= 75) ? 30 : floor(level / 2.5))) + attackPower << "-" << 5 + (((level >= 75) ? 30 : floor(level / 2.5))) + attackPower << " lifesteal) 3 (" << 6 + (((level >= 75) ? 30 : floor(level / 2.5))) + attackPower << "-" << 11 + (((level >= 75) ? 30 : floor(level / 2.5))) + attackPower << "dmg) 7 (Store) 8 (Forge) 9 (Stats) 10 (Inventory) 0 (Special Skill Info)" << endl;
        }
        else {
            cout << "Choose: 1 (" << 4 + (((level >= 75) ? 30 : floor(level / 2.5))) + attackPower << "-" << 8 + (((level >= 75) ? 30 : floor(level / 2.5))) + attackPower << " dmg) 2 (" << 2 + (((level >= 75) ? 30 : floor(level / 2.5))) + attackPower << "-" << 5 + (((level >= 75) ? 30 : floor(level / 2.5))) + attackPower << " lifesteal) 7 (Store) 8 (Forge) 9 (Stats) 10 (Inventory) 0 (Special Skill Info)" << endl;
        }
    }
   if (classtype == 3) { //soulweaver attack messages |health =20|attackPower=3|lives=2|
        if (soulweavermove == true) {
            cout << "Choose: 1 (" << 4 + (((level >= 75) ? 30 : floor(level / 2.5))) + attackPower << "-" << 8 + (((level >= 75) ? 30 : floor(level / 2.5))) + attackPower << " dmg) 2 (" << 2 + (((level >= 75) ? 30 : floor(level / 2.5))) + attackPower << "-" << 5 + (((level >= 75) ? 30 : floor(level / 2.5))) + attackPower << " lifesteal) 3 (" << 6 + (((level >= 75) ? 30 : floor(level / 2.5))) + attackPower << "-" << 11 + (((level >= 75) ? 30 : floor(level / 2.5))) + attackPower << "dmg) 4 (" << 6 + (((level >= 75) ? 30 : floor(level / 2.5))) + attackPower << "-" << 9 + (((level >= 75) ? 30 : floor(level / 2.5))) + attackPower << " heal) 5 (" << 7 + (((level >= 75) ? 30 : floor(level / 2.5))) + attackPower << "-" << 12 + (((level >= 75) ? 30 : floor(level / 2.5))) + attackPower << " lifesteal) 6 (Fortuitous Gambit) 7 (Store) 8 (Forge) 9 (Stats) 10 (Inventory) 0 (Special Skill Info)" << endl;
         }
        else if (level >= 50) {
            cout << "Choose: 1 (" << 4 + (((level >= 75) ? 30 : floor(level / 2.5))) + attackPower << "-" << 8 + (((level >= 75) ? 30 : floor(level / 2.5))) + attackPower << " dmg) 2 (" << 2 + (((level >= 75) ? 30 : floor(level / 2.5))) + attackPower << "-" << 5 + (((level >= 75) ? 30 : floor(level / 2.5))) + attackPower << " lifesteal) 3 (" << 6 + (((level >= 75) ? 30 : floor(level / 2.5))) + attackPower << "-" << 11 + (((level >= 75) ? 30 : floor(level / 2.5))) + attackPower << "dmg) 4 (" << 6 + (((level >= 75) ? 30 : floor(level / 2.5))) + attackPower << "-" << 9 + (((level >= 75) ? 30 : floor(level / 2.5))) + attackPower << " heal) 5 (" << 7 + (((level >= 75) ? 30 : floor(level / 2.5))) + attackPower << "-" << 12 + (((level >= 75) ? 30 : floor(level / 2.5))) + attackPower << " lifesteal) 7 (Store) 8 (Forge) 9 (Stats) 10 (Inventory) 0 (Special Skill Info)" << endl;
        }
        else if (level >= 25) {
            cout << "Choose: 1 (" << 4 + (((level >= 75) ? 30 : floor(level / 2.5))) + attackPower << "-" << 8 + (((level >= 75) ? 30 : floor(level / 2.5))) + attackPower << " dmg) 2 (" << 2 + (((level >= 75) ? 30 : floor(level / 2.5))) + attackPower << "-" << 5 + (((level >= 75) ? 30 : floor(level / 2.5))) + attackPower << " lifesteal) 3 (" << 6 + (((level >= 75) ? 30 : floor(level / 2.5))) + attackPower << "-" << 11 + (((level >= 75) ? 30 : floor(level / 2.5))) + attackPower << "dmg) 4 (" << 6 + (((level >= 75) ? 30 : floor(level / 2.5))) + attackPower << "-" << 9 + (((level >= 75) ? 30 : floor(level / 2.5))) + attackPower << " heal) 7 (Store) 8 (Forge) 9 (Stats) 10 (Inventory) 0 (Special Skill Info)" << endl;
        }
        else if (level >= 15) {
            cout << "Choose: 1 (" << 4 + (((level >= 75) ? 30 : floor(level / 2.5))) + attackPower << "-" << 8 + (((level >= 75) ? 30 : floor(level / 2.5))) + attackPower << " dmg) 2 (" << 2 + (((level >= 75) ? 30 : floor(level / 2.5))) + attackPower << "-" << 5 + (((level >= 75) ? 30 : floor(level / 2.5))) + attackPower << " lifesteal) 3 (" << 6 + (((level >= 75) ? 30 : floor(level / 2.5))) + attackPower << "-" << 11 + (((level >= 75) ? 30 : floor(level / 2.5))) + attackPower << "dmg) 7 (Store) 8 (Forge) 9 (Stats) 10 (Inventory) 0 (Special Skill Info)" << endl;
        }
        else {
            cout << "Choose: 1 (" << 4 + (((level >= 75) ? 30 : floor(level / 2.5))) + attackPower << "-" << 8 + (((level >= 75) ? 30 : floor(level / 2.5))) + attackPower << " dmg) 2 (" << 2 + (((level >= 75) ? 30 : floor(level / 2.5))) + attackPower << "-" << 5 + (((level >= 75) ? 30 : floor(level / 2.5))) + attackPower << " lifesteal) 7 (Store) 8 (Forge) 9 (Stats) 10 (Inventory) 0 (Special Skill Info)" << endl;
        }
    }
    if (classtype == 4) { //warforged engineer attack messages |health =40|attackPower=3|lives=1|
        if (warforgedmove == true) {
            cout << "Choose: 1 (" << 4 + (((level >= 75) ? 30 : floor(level / 2.5))) + attackPower << "-" << 8 + (((level >= 75) ? 30 : floor(level / 2.5))) + attackPower << " dmg) 2 (" << 2 + (((level >= 75) ? 30 : floor(level / 2.5))) + attackPower << "-" << 5 + (((level >= 75) ? 30 : floor(level / 2.5))) + attackPower << " lifesteal) 3 (" << 6 + (((level >= 75) ? 30 : floor(level / 2.5))) + attackPower << "-" << 11 + (((level >= 75) ? 30 : floor(level / 2.5))) + attackPower << "dmg) 4 (" << 6 + (((level >= 75) ? 30 : floor(level / 2.5))) + attackPower << "-" << 9 + (((level >= 75) ? 30 : floor(level / 2.5))) + attackPower << " heal) 5 (" << 7 + (((level >= 75) ? 30 : floor(level / 2.5))) + attackPower << "-" << 12 + (((level >= 75) ? 30 : floor(level / 2.5))) + attackPower << " lifesteal) 6 (Guardians Respite) 7 (Store) 8 (Forge) 9 (Stats) 10 (Inventory) 0 (Special Skill Info)" << endl;
        }
        else if (level >= 50) {
            cout << "Choose: 1 (" << 4 + (((level >= 75) ? 30 : floor(level / 2.5))) + attackPower << "-" << 8 + (((level >= 75) ? 30 : floor(level / 2.5))) + attackPower << " dmg) 2 (" << 2 + (((level >= 75) ? 30 : floor(level / 2.5))) + attackPower << "-" << 5 + (((level >= 75) ? 30 : floor(level / 2.5))) + attackPower << " lifesteal) 3 (" << 6 + (((level >= 75) ? 30 : floor(level / 2.5))) + attackPower << "-" << 11 + (((level >= 75) ? 30 : floor(level / 2.5))) + attackPower << "dmg) 4 (" << 6 + (((level >= 75) ? 30 : floor(level / 2.5))) + attackPower << "-" << 9 + (((level >= 75) ? 30 : floor(level / 2.5))) + attackPower << " heal) 5 (" << 7 + (((level >= 75) ? 30 : floor(level / 2.5))) + attackPower << "-" << 12 + (((level >= 75) ? 30 : floor(level / 2.5))) + attackPower << " lifesteal) 7 (Store) 8 (Forge) 9 (Stats) 10 (Inventory) 0 (Special Skill Info)" << endl;
        }
        else if (level >= 25) {
            cout << "Choose: 1 (" << 4 + (((level >= 75) ? 30 : floor(level / 2.5))) + attackPower << "-" << 8 + (((level >= 75) ? 30 : floor(level / 2.5))) + attackPower << " dmg) 2 (" << 2 + (((level >= 75) ? 30 : floor(level / 2.5))) + attackPower << "-" << 5 + (((level >= 75) ? 30 : floor(level / 2.5))) + attackPower << " lifesteal) 3 (" << 6 + (((level >= 75) ? 30 : floor(level / 2.5))) + attackPower << "-" << 11 + (((level >= 75) ? 30 : floor(level / 2.5))) + attackPower << "dmg) 4 (" << 6 + (((level >= 75) ? 30 : floor(level / 2.5))) + attackPower << "-" << 9 + (((level >= 75) ? 30 : floor(level / 2.5))) + attackPower << " heal) 7 (Store) 8 (Forge) 9 (Stats) 10 (Inventory) 0 (Special Skill Info)" << endl;
        }
        else if (level >= 15) {
            cout << "Choose: 1 (" << 4 + (((level >= 75) ? 30 : floor(level / 2.5))) + attackPower << "-" << 8 + (((level >= 75) ? 30 : floor(level / 2.5))) + attackPower << " dmg) 2 (" << 2 + (((level >= 75) ? 30 : floor(level / 2.5))) + attackPower << "-" << 5 + (((level >= 75) ? 30 : floor(level / 2.5))) + attackPower << " lifesteal) 3 (" << 6 + (((level >= 75) ? 30 : floor(level / 2.5))) + attackPower << "-" << 11 + (((level >= 75) ? 30 : floor(level / 2.5))) + attackPower << "dmg) 7 (Store) 8 (Forge) 9 (Stats) 10 (Inventory) 0 (Special Skill Info)" << endl;
        }
        else {
            cout << "Choose: 1 (" << 4 + (((level >= 75) ? 30 : floor(level / 2.5))) + attackPower << "-" << 8 + (((level >= 75) ? 30 : floor(level / 2.5))) + attackPower << " dmg) 2 (" << 2 + (((level >= 75) ? 30 : floor(level / 2.5))) + attackPower << "-" << 5 + (((level >= 75) ? 30 : floor(level / 2.5))) + attackPower << " lifesteal) 7 (Store) 8 (Forge) 9 (Stats) 10 (Inventory) 0 (Special Skill Info)" << endl;
        }
    }
    if (classtype == 5) { //dreadnought attack messages |health =50|attackPower=1|lives=1|
        if (dreadnoughtmove == true) {
            cout << "Choose: 1 (" << 4 + (((level >= 75) ? 30 : floor(level / 2.5))) + attackPower << "-" << 8 + (((level >= 75) ? 30 : floor(level / 2.5))) + attackPower << " dmg) 2 (" << 2 + (((level >= 75) ? 30 : floor(level / 2.5))) + attackPower << "-" << 5 + (((level >= 75) ? 30 : floor(level / 2.5))) + attackPower << " lifesteal) 3 (" << 6 + (((level >= 75) ? 30 : floor(level / 2.5))) + attackPower << "-" << 11 + (((level >= 75) ? 30 : floor(level / 2.5))) + attackPower << "dmg) 4 (" << 6 + (((level >= 75) ? 30 : floor(level / 2.5))) + attackPower << "-" << 9 + (((level >= 75) ? 30 : floor(level / 2.5))) + attackPower << " heal) 5 (" << 7 + (((level >= 75) ? 30 : floor(level / 2.5))) + attackPower << "-" << 12 + (((level >= 75) ? 30 : floor(level / 2.5))) + attackPower << " lifesteal) 6 (Healing Remedy) 7 (Store) 8 (Forge) 9 (Stats) 10 (Inventory) 0 (Special Skill Info)" << endl;
        }
        else if (level >= 50) {
            cout << "Choose: 1 (" << 4 + (((level >= 75) ? 30 : floor(level / 2.5))) + attackPower << "-" << 8 + (((level >= 75) ? 30 : floor(level / 2.5))) + attackPower << " dmg) 2 (" << 2 + (((level >= 75) ? 30 : floor(level / 2.5))) + attackPower << "-" << 5 + (((level >= 75) ? 30 : floor(level / 2.5))) + attackPower << " lifesteal) 3 (" << 6 + (((level >= 75) ? 30 : floor(level / 2.5))) + attackPower << "-" << 11 + (((level >= 75) ? 30 : floor(level / 2.5))) + attackPower << "dmg) 4 (" << 6 + (((level >= 75) ? 30 : floor(level / 2.5))) + attackPower << "-" << 9 + (((level >= 75) ? 30 : floor(level / 2.5))) + attackPower << " heal) 5 (" << 7 + (((level >= 75) ? 30 : floor(level / 2.5))) + attackPower << "-" << 12 + (((level >= 75) ? 30 : floor(level / 2.5))) + attackPower << " lifesteal) 7 (Store) 8 (Forge) 9 (Stats) 10 (Inventory) 0 (Special Skill Info)" << endl;
        }
        else if (level >= 25) {
            cout << "Choose: 1 (" << 4 + (((level >= 75) ? 30 : floor(level / 2.5))) + attackPower << "-" << 8 + (((level >= 75) ? 30 : floor(level / 2.5))) + attackPower << " dmg) 2 (" << 2 + (((level >= 75) ? 30 : floor(level / 2.5))) + attackPower << "-" << 5 + (((level >= 75) ? 30 : floor(level / 2.5))) + attackPower << " lifesteal) 3 (" << 6 + (((level >= 75) ? 30 : floor(level / 2.5))) + attackPower << "-" << 11 + (((level >= 75) ? 30 : floor(level / 2.5))) + attackPower << "dmg) 4 (" << 6 + (((level >= 75) ? 30 : floor(level / 2.5))) + attackPower << "-" << 9 + (((level >= 75) ? 30 : floor(level / 2.5))) + attackPower << " heal) 7 (Store) 8 (Forge) 9 (Stats) 10 (Inventory) 0 (Special Skill Info)" << endl;
        }
        else if (level >= 15) {
            cout << "Choose: 1 (" << 4 + (((level >= 75) ? 30 : floor(level / 2.5))) + attackPower << "-" << 8 + (((level >= 75) ? 30 : floor(level / 2.5))) + attackPower << " dmg) 2 (" << 2 + (((level >= 75) ? 30 : floor(level / 2.5))) + attackPower << "-" << 5 + (((level >= 75) ? 30 : floor(level / 2.5))) + attackPower << " lifesteal) 3 (" << 6 + (((level >= 75) ? 30 : floor(level / 2.5))) + attackPower << "-" << 11 + (((level >= 75) ? 30 : floor(level / 2.5))) + attackPower << "dmg) 7 (Store) 8 (Forge) 9 (Stats) 10 (Inventory) 0 (Special Skill Info)" << endl;
        }
        else {
            cout << "Choose: 1 (" << 4 + (((level >= 75) ? 30 : floor(level / 2.5))) + attackPower << "-" << 8 + (((level >= 75) ? 30 : floor(level / 2.5))) + attackPower << " dmg) 2 (" << 2 + (((level >= 75) ? 30 : floor(level / 2.5))) + attackPower << "-" << 5 + (((level >= 75) ? 30 : floor(level / 2.5))) + attackPower << " lifesteal) 7 (Store) 8 (Forge) 9 (Stats) 10 (Inventory) 0 (Special Skill Info)" << endl;
        }
    }
     if (classtype == 6) { //trickster attack messages |health =20|attackPower=5|lives=1|
        if (trickstermove == true) {
            cout << "Choose: 1 (" << 4 + (((level >= 75) ? 30 : floor(level / 2.5))) + attackPower << "-" << 8 + (((level >= 75) ? 30 : floor(level / 2.5))) + attackPower << " dmg) 2 (" << 2 + (((level >= 75) ? 30 : floor(level / 2.5))) + attackPower << "-" << 5 + (((level >= 75) ? 30 : floor(level / 2.5))) + attackPower << " lifesteal) 3 (" << 6 + (((level >= 75) ? 30 : floor(level / 2.5))) + attackPower << "-" << 11 + (((level >= 75) ? 30 : floor(level / 2.5))) + attackPower << "dmg) 4 (" << 6 + (((level >= 75) ? 30 : floor(level / 2.5))) + attackPower << "-" << 9 + (((level >= 75) ? 30 : floor(level / 2.5))) + attackPower << " heal) 5 (" << 7 + (((level >= 75) ? 30 : floor(level / 2.5))) + attackPower << "-" << 12 + (((level >= 75) ? 30 : floor(level / 2.5))) + attackPower << " lifesteal) 6 (Confuse) 7 (Store) 8 (Forge) 9 (Stats) 10 (Inventory) 0 (Special Skill Info)" << endl;
        }
        else if (level >= 50) {
            cout << "Choose: 1 (" << 4 + (((level >= 75) ? 30 : floor(level / 2.5))) + attackPower << "-" << 8 + (((level >= 75) ? 30 : floor(level / 2.5))) + attackPower << " dmg) 2 (" << 2 + (((level >= 75) ? 30 : floor(level / 2.5))) + attackPower << "-" << 5 + (((level >= 75) ? 30 : floor(level / 2.5))) + attackPower << " lifesteal) 3 (" << 6 + (((level >= 75) ? 30 : floor(level / 2.5))) + attackPower << "-" << 11 + (((level >= 75) ? 30 : floor(level / 2.5))) + attackPower << "dmg) 4 (" << 6 + (((level >= 75) ? 30 : floor(level / 2.5))) + attackPower << "-" << 9 + (((level >= 75) ? 30 : floor(level / 2.5))) + attackPower << " heal) 5 (" << 7 + (((level >= 75) ? 30 : floor(level / 2.5))) + attackPower << "-" << 12 + (((level >= 75) ? 30 : floor(level / 2.5))) + attackPower << " lifesteal) 7 (Store) 8 (Forge) 9 (Stats) 10 (Inventory) 0 (Special Skill Info)" << endl;
        }
        else if (level >= 25) {
            cout << "Choose: 1 (" << 4 + (((level >= 75) ? 30 : floor(level / 2.5))) + attackPower << "-" << 8 + (((level >= 75) ? 30 : floor(level / 2.5))) + attackPower << " dmg) 2 (" << 2 + (((level >= 75) ? 30 : floor(level / 2.5))) + attackPower << "-" << 5 + (((level >= 75) ? 30 : floor(level / 2.5))) + attackPower << " lifesteal) 3 (" << 6 + (((level >= 75) ? 30 : floor(level / 2.5))) + attackPower << "-" << 11 + (((level >= 75) ? 30 : floor(level / 2.5))) + attackPower << "dmg) 4 (" << 6 + (((level >= 75) ? 30 : floor(level / 2.5))) + attackPower << "-" << 9 + (((level >= 75) ? 30 : floor(level / 2.5))) + attackPower << " heal) 7 (Store) 8 (Forge) 9 (Stats) 10 (Inventory) 0 (Special Skill Info)" << endl;
        }
        else if (level >= 15) {
            cout << "Choose: 1 (" << 4 + (((level >= 75) ? 30 : floor(level / 2.5))) + attackPower << "-" << 8 + (((level >= 75) ? 30 : floor(level / 2.5))) + attackPower << " dmg) 2 (" << 2 + (((level >= 75) ? 30 : floor(level / 2.5))) + attackPower << "-" << 5 + (((level >= 75) ? 30 : floor(level / 2.5))) + attackPower << " lifesteal) 3 (" << 6 + (((level >= 75) ? 30 : floor(level / 2.5))) + attackPower << "-" << 11 + (((level >= 75) ? 30 : floor(level / 2.5))) + attackPower << "dmg) 7 (Store) 8 (Forge) 9 (Stats) 10 (Inventory) 0 (Special Skill Info)" << endl;
        }
        else {
            cout << "Choose: 1 (" << 4 + (((level >= 75) ? 30 : floor(level / 2.5))) + attackPower << "-" << 8 + (((level >= 75) ? 30 : floor(level / 2.5))) + attackPower << " dmg) 2 (" << 2 + (((level >= 75) ? 30 : floor(level / 2.5))) + attackPower << "-" << 5 + (((level >= 75) ? 30 : floor(level / 2.5))) + attackPower << " lifesteal) 7 (Store) 8 (Forge) 9 (Stats) 10 (Inventory) 0 (Special Skill Info)" << endl;
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
        if (factionchoiceint == 1) {
			cout << "You are a part of the Shadowborn Syndicate. You gain a 1% increase to attack and defence on kill. You deal more damage with the Voidshroud Slicer." << endl;
		}
		else if (factionchoiceint == 2) {
			cout << "You chose the Emberfall Covenant! You gain a 2% increase to attack on kill. You deal more damage with the Flaming Longsword." << endl;
		}
		else if (factionchoiceint == 3) {
			cout << "You chose the Celestial Vanguard! You gain a 1% increase to defence and maxhealth on kill. You gain more defence from the Mystic Helmet." << endl;
		}
		else if (factionchoiceint == 4) {
			cout << "You are a part of the Ironclad Dominion. You gain a 1% increase to attack and maxhealth on kill. You gain more defence from the Dragonscale Chestplate." << endl;
		}
        if (classtype == 1) {
            cout << "--The knight class unlocks its special skill (Titans Strike) at level 80. It is just a normal attack but with more damage.--" << endl << endl;
        }
        else if (classtype == 2) {
            cout << "--The executioner class unlocks its special skill (Soul Surge) at level 80. This skill is a slightly better damage lifesteal with a 20% chance to crit.--" << endl << endl;
        }
        else if (classtype == 3) {
            cout << "--The soulweaver class unlocks its special skill (Fortuitous Gambit) at level 90. This skill is a little damage attack that has a 5% chance to give you a life and a 50% chance to deal damage.--" << endl << endl;
        }
        else if (classtype == 4) {
            cout << "--The warforged engineer unlocks its special skill (Guardians Respite) at level 75. This skill makes the enemy deal less damage for 2 turns and heals you over the two rounds but you deal much less damage in its duration.--" << endl << endl;
        }
        else if (classtype == 5) {
            cout << "--The dreadnought class unlocks its special skill (Healing Remedy) at level 75. This skill is a better than normal single heal and has a 10% crit chance.--" << endl << endl;
        }
        else if (classtype == 6) {
            cout << "--The trickster class unlocks its special skill (Confuse) at level 50. This skill has a 40% chance to make the enemy attack itself with a crit rate of 30% and it negates all defence.--" << endl << endl;
        }
        cout << "**NOTE** All special skills have 100% accuracy." << endl << endl;
        attack(Target);
        break;
    case 1:
        accuracy = r() & 100 + 1;
        if (accuratesword == true || fallen == true) {
            x = r() % 5 + 4 + (((level >= 75) ? 30 : floor(level / 2.5))) + attackPower; //normal attack
            if (playercompanion == true) {
                int randomcompanionevent = 0;
                randomcompanionevent = r() % 4;
                if (randomcompanionevent == 0) {
                    cout << "Your companion has mysteriously made your armor stronger!" << endl;
                    defence += 2;
                }
                else if (randomcompanionevent == 1) {
                    cout << "Your companion healed you for " << ((level >= 75) ? 30 : floor(level / 2.5)) << "!" << endl;
                    health += ((level >= 75) ? 30 : floor(level / 2.5));
                }
                else if (randomcompanionevent == 2) {
                    cout << "Your companion gave you a damage buff of " << ((level >= 75) ? 30 : floor(level / 2.5)) <<  "." << endl;
                    x += ((level >= 75) ? 30 : floor(level / 2.5));
                }
                else {
                    cout << "Your companion didn't do anything this round." << endl;
                }
            }
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
            x = r() % 5 + 4 + (((level >= 75) ? 30 : floor(level / 2.5))) + attackPower; //normal attack
            if (playercompanion == true) {
                int randomcompanionevent = 0;
                randomcompanionevent = r() % 4;
                if (randomcompanionevent == 0) {
                    cout << "Your companion has mysteriously made your armor stronger!" << endl;
                    defence += 2;
                }
                else if (randomcompanionevent == 1) {
                    cout << "Your companion healed you for " << ((level >= 75) ? 30 : floor(level / 2.5)) << "!" << endl;
                    health += ((level >= 75) ? 30 : floor(level / 2.5));
                }
                else if (randomcompanionevent == 2) {
                    cout << "Your companion gave you a damage buff of " << ((level >= 75) ? 30 : floor(level / 2.5)) <<  "." << endl;
                    x += ((level >= 75) ? 30 : floor(level / 2.5));
                }
                else {
                    cout << "Your companion didn't do anything this round." << endl;
                }
            }
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
            x = r() % 4 + 2 + ((level >= 75) ? 30 : floor(level / 2.5)) + attackPower;
            if (playercompanion == true) {
                int randomcompanionevent = 0;
                randomcompanionevent = r() % 4;
                if (randomcompanionevent == 0) {
                    cout << "Your companion has mysteriously made your armor stronger!" << endl;
                    defence += 2;
                }
                else if (randomcompanionevent == 1) {
                    cout << "Your companion healed you for " << ((level >= 75) ? 30 : floor(level / 2.5)) << "!" << endl;
                    health += ((level >= 75) ? 30 : floor(level / 2.5));
                }
                else if (randomcompanionevent == 2) {
                    cout << "Your companion gave you a damage buff of " << ((level >= 75) ? 30 : floor(level / 2.5)) <<  "." << endl;
                    x += ((level >= 75) ? 30 : floor(level / 2.5));
                }
                else {
                    cout << "Your companion didn't do anything this round." << endl;
                }
            }
            Target->takeDmg(x);
            h = ceil(x / 2.5);
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
            x = r() % 4 + 2 + ((level >= 75) ? 30 : floor(level / 2.5)) + attackPower;
            if (playercompanion == true) {
                int randomcompanionevent = 0;
                randomcompanionevent = r() % 4;
                if (randomcompanionevent == 0) {
                    cout << "Your companion has mysteriously made your armor stronger!" << endl;
                    defence += 2;
                }
                else if (randomcompanionevent == 1) {
                    cout << "Your companion healed you for " << ((level >= 75) ? 30 : floor(level / 2.5)) << "!" << endl;
                    health += ((level >= 75) ? 30 : floor(level / 2.5));
                }
                else if (randomcompanionevent == 2) {
                    cout << "Your companion gave you a damage buff of " << ((level >= 75) ? 30 : floor(level / 2.5)) <<  "." << endl;
                    x += ((level >= 75) ? 30 : floor(level / 2.5));
                }
                else {
                    cout << "Your companion didn't do anything this round." << endl;
                }
            }
            Target->takeDmg(x);
            h = ceil(x / 2.5);
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
            x = r() % 6 + 6 + ((level >= 75) ? 30 : floor(level / 2.5)) + attackPower; //normal attack
            if (playercompanion == true) {
                int randomcompanionevent = 0;
                randomcompanionevent = r() % 4;
                if (randomcompanionevent == 0) {
                    cout << "Your companion has mysteriously made your armor stronger!" << endl;
                    defence += 2;
                }
                else if (randomcompanionevent == 1) {
                    cout << "Your companion healed you for " << ((level >= 75) ? 30 : floor(level / 2.5)) << "!" << endl;
                    health += ((level >= 75) ? 30 : floor(level / 2.5));
                }
                else if (randomcompanionevent == 2) {
                    cout << "Your companion gave you a damage buff of " << ((level >= 75) ? 30 : floor(level / 2.5)) <<  "." << endl;
                    x += ((level >= 75) ? 30 : floor(level / 2.5));
                }
                else {
                    cout << "Your companion didn't do anything this round." << endl;
                }
            }
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
            x = r() % 6 + 6 + ((level >= 75) ? 30 : floor(level / 2.5)) + attackPower;
            if (playercompanion == true) {
                int randomcompanionevent = 0;
                randomcompanionevent = r() % 4;
                if (randomcompanionevent == 0) {
                    cout << "Your companion has mysteriously made your armor stronger!" << endl;
                    defence += 2;
                }
                else if (randomcompanionevent == 1) {
                    cout << "Your companion healed you for " << ((level >= 75) ? 30 : floor(level / 2.5)) << "!" << endl;
                    health += ((level >= 75) ? 30 : floor(level / 2.5));
                }
                else if (randomcompanionevent == 2) {
                    cout << "Your companion gave you a damage buff of " << ((level >= 75) ? 30 : floor(level / 2.5)) <<  "." << endl;
                    x += ((level >= 75) ? 30 : floor(level / 2.5));
                }
                else {
                    cout << "Your companion didn't do anything this round." << endl;
                }
            }
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
            x = r() % 4 + 6 + ((level >= 75) ? 30 : floor(level / 2.5));
            if (playercompanion == true) {
                int randomcompanionevent = 0;
                randomcompanionevent = r() % 4;
                if (randomcompanionevent == 0) {
                    cout << "Your companion has mysteriously made your armor stronger!" << endl;
                    defence += 2;
                }
                else if (randomcompanionevent == 1) {
                    cout << "Your companion healed you for " << ((level >= 75) ? 30 : floor(level / 2.5)) << "!" << endl;
                    health += ((level >= 75) ? 30 : floor(level / 2.5));
                }
                else if (randomcompanionevent == 2) {
                    cout << "Your companion gave you a healing buff of " << ((level >= 75) ? 30 : floor(level / 2.5)) <<  "." << endl;
                    x += ((level >= 75) ? 30 : floor(level / 2.5));
                }
                else {
                    cout << "Your companion didn't do anything this round." << endl;
                }
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
        else if (baselevel >= 25 && accuracy > 10) {
            fallen = false;
            x = r() % 4 + 6 + ((level >= 75) ? 30 : floor(level / 2.5));
            if (playercompanion == true) {
                int randomcompanionevent = 0;
                randomcompanionevent = r() % 4;
                if (randomcompanionevent == 0) {
                    cout << "Your companion has mysteriously made your armor stronger!" << endl;
                    defence += 2;
                }
                else if (randomcompanionevent == 1) {
                    cout << "Your companion healed you for " << ((level >= 75) ? 30 : floor(level / 2.5)) << "!" << endl;
                    health += ((level >= 75) ? 30 : floor(level / 2.5));
                }
                else if (randomcompanionevent == 2) {
                    cout << "Your companion gave you a healing buff of " << ((level >= 75) ? 30 : floor(level / 2.5)) <<  "." << endl;
                    x += ((level >= 75) ? 30 : floor(level / 2.5));
                }
                else {
                    cout << "Your companion didn't do anything this round." << endl;
                }
            }
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
            x = r() % 6 + 7 + ((level >= 75) ? 30 : floor(level / 2.5)) + attackPower;
            if (playercompanion == true) {
                int randomcompanionevent = 0;
                randomcompanionevent = r() % 4;
                if (randomcompanionevent == 0) {
                    cout << "Your companion has mysteriously made your armor stronger!" << endl;
                    defence += 2;
                }
                else if (randomcompanionevent == 1) {
                    cout << "Your companion healed you for " << ((level >= 75) ? 30 : floor(level / 2.5)) << "!" << endl;
                    health += ((level >= 75) ? 30 : floor(level / 2.5));
                }
                else if (randomcompanionevent == 2) {
                    cout << "Your companion gave you a damage buff of " << ((level >= 75) ? 30 : floor(level / 2.5)) <<  "." << endl;
                    x += ((level >= 75) ? 30 : floor(level / 2.5));
                }
                else {
                    cout << "Your companion didn't do anything this round." << endl;
                }
            }
            Target->takeDmg(x);
            h = ceil(x / 2.5);
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
            x = r() % 6 + 7 + ((level >= 75) ? 30 : floor(level / 2.5)) + attackPower;
            if (playercompanion == true) {
                int randomcompanionevent = 0;
                randomcompanionevent = r() % 4;
                if (randomcompanionevent == 0) {
                    cout << "Your companion has mysteriously made your armor stronger!" << endl;
                    defence += 2;
                }
                else if (randomcompanionevent == 1) {
                    cout << "Your companion healed you for " << ((level >= 75) ? 30 : floor(level / 2.5)) << "!" << endl;
                    health += ((level >= 75) ? 30 : floor(level / 2.5));
                }
                else if (randomcompanionevent == 2) {
                    cout << "Your companion gave you a damage buff of " << ((level >= 75) ? 30 : floor(level / 2.5)) <<  "." << endl;
                    x += ((level >= 75) ? 30 : floor(level / 2.5));
                }
                else {
                    cout << "Your companion didn't do anything this round." << endl;
                }
            }
            Target->takeDmg(x);
            h = ceil(x / 2.5);
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
            int addLifeChance;
            addLifeChance = r() % 100 + 1;
            if (addLifeChance <= 5) {
                addlives(1);
                x = r() % 4 + 4 + ((level >= 75) ? 30 : floor(level / 2.5)) + attackPower;
            if (playercompanion == true) {
                int randomcompanionevent = 0;
                randomcompanionevent = r() % 4;
                if (randomcompanionevent == 0) {
                    cout << "Your companion has mysteriously made your armor stronger!" << endl;
                    defence += 2;
                }
                else if (randomcompanionevent == 1) {
                    cout << "Your companion healed you for " << ((level >= 75) ? 30 : floor(level / 2.5)) << "!" << endl;
                    health += ((level >= 75) ? 30 : floor(level / 2.5));
                }
                else if (randomcompanionevent == 2) {
                    cout << "Your companion gave you a damage buff of " << ((level >= 75) ? 30 : floor(level / 2.5)) <<  "." << endl;
                    x += ((level >= 75) ? 30 : floor(level / 2.5));
                }
                else {
                    cout << "Your companion didn't do anything this round." << endl;
                }
            }
                Target->takeDmg(x);
                cout << "-----------------------------------------------" << endl;
                cout << name << ", you dealt " << x << " damage and gained an extra life!" << endl;
            }
            else if (addLifeChance > 5 && addLifeChance <= 50) {
                x = r() % 4 + 4 + ((level >= 75) ? 30 : floor(level / 2.5)) + attackPower;
                if (playercompanion == true) {
                    int randomcompanionevent = 0;
                    randomcompanionevent = r() % 4;
                    if (randomcompanionevent == 0) {
                        cout << "Your companion has mysteriously made your armor stronger!" << endl;
                        defence += 2;
                    }
                     else if (randomcompanionevent == 1) {
                        cout << "Your companion healed you for " << ((level >= 75) ? 30 : floor(level / 2.5)) << "!" << endl;
                        health += ((level >= 75) ? 30 : floor(level / 2.5));
                    }
                    else if (randomcompanionevent == 2) {
                         cout << "Your companion gave you a damage buff of " << ((level >= 75) ? 30 : floor(level / 2.5)) <<  "." << endl;
                         x += ((level >= 75) ? 30 : floor(level / 2.5));
                    }
                    else {
                        cout << "Your companion didn't do anything this round." << endl;
                    }
                }
                Target->takeDmg(x);
                cout << "-----------------------------------------------" << endl;
                cout << name << ", you dealt " << x << " damage." << endl;
            }
            else if (addLifeChance > 50) {
                cout << "-----------------------------------------------" << endl;
                cout << name << ", your skill failed." << endl;
            }
            break;
        }
        else if (warforgedmove == true) {
            x = r() % 26 + 25;
            if (playercompanion == true) {
                int randomcompanionevent = 0;
                randomcompanionevent = r() % 4;
                if (randomcompanionevent == 0) {
                    cout << "Your companion has mysteriously made your armor stronger!" << endl;
                    defence += 2;
                }
                else if (randomcompanionevent == 1) {
                    cout << "Your companion healed you for " << ((level >= 75) ? 30 : level) << "!" << endl;
                    health += ((level >= 75) ? 30 : level);
                }
                else if (randomcompanionevent == 2) {
                    cout << "Your companion gave you a damage buff of " << ((level >= 75) ? 30 : level) <<  "." << endl;
                    x += ((level >= 75) ? 30 : level);
                }
                else {
                    cout << "Your companion didn't do anything this round." << endl;
                }
            }
            cout << "You threw a bomb at the enemy, it dealt " << x << " damage! You took " << ceil(x / 2.5) << " damage." << endl;
            Target->takeDmg(x);
            health -= ceil(x / 2.5);
            break;
        }
        else if (trickstermove == true) {
                if (playercompanion == true) {
                int randomcompanionevent = 0;
                randomcompanionevent = r() % 3;
                if (randomcompanionevent == 0) {
                    cout << "Your companion has mysteriously made your armor stronger!" << endl;
                    defence += 2;
                }
                else if (randomcompanionevent == 1) {
                    cout << "Your companion healed you for " << ((level >= 75) ? 30 : floor(level / 2.5)) << "!" << endl;
                    health += ((level >= 75) ? 30 : floor(level / 2.5));
                }
                else {
                    cout << "Your companion didn't do anything this round." << endl;
                }
            }
            trickstermovebool = true;
            cout << endl;
            break;
        }
        else if (knightmove == true) {
            x = r() % 7 + 8 + ((level >= 75) ? 30 : floor(level / 2.5)) + attackPower;
            if (playercompanion == true) {
                int randomcompanionevent = 0;
                randomcompanionevent = r() % 4;
                if (randomcompanionevent == 0) {
                    cout << "Your companion has mysteriously made your armor stronger!" << endl;
                    defence += 2;
                }
                else if (randomcompanionevent == 1) {
                    cout << "Your companion healed you for " << ((level >= 75) ? 30 : floor(level / 2.5)) << "!" << endl;
                    health += ((level >= 75) ? 30 : floor(level / 2.5));
                }
                else if (randomcompanionevent == 2) {
                    cout << "Your companion gave you a damage buff of " << ((level >= 75) ? 30 : floor(level / 2.5)) <<  "." << endl;
                    x += ((level >= 75) ? 30 : floor(level / 2.5));
                }
                else {
                    cout << "Your companion didn't do anything this round." << endl;
                }
            }
            Target->takeDmg(x);
            cout << name << ", you dealt " << x << " damage." << endl;
            break;
        }
        else if (dreadnoughtmove == true) {
            x = r() % 7 + 10 + ((level >= 75) ? 30 : floor(level / 2.5));
            int critchance = 0;
            critchance = r() % 100 + 1;
            if (critchance <= 10) {
                x = ceil(x * 1.5);
            }
            if (playercompanion == true) {
                int randomcompanionevent = 0;
                randomcompanionevent = r() % 4;
                if (randomcompanionevent == 0) {
                    cout << "Your companion has mysteriously made your armor stronger!" << endl;
                    defence += 2;
                }
                else if (randomcompanionevent == 1) {
                    cout << "Your companion healed you for " << ((level >= 75) ? 30 : floor(level / 2.5)) << "!" << endl;
                    health += ((level >= 75) ? 30 : floor(level / 2.5));
                }
                else if (randomcompanionevent == 2) {
                    cout << "Your companion gave you a healing buff of " << ((level >= 75) ? 30 : floor(level / 2.5)) <<  "." << endl;
                    x += ((level >= 75) ? 30 : floor(level / 2.5));
                }
                else {
                    cout << "Your companion didn't do anything this round." << endl;
                }
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
            x = r() % 11 + 7 + ((level >= 75) ? 30 : floor(level / 2.5)) + attackPower;
            int critrate;
            critrate = r() % 100 + 1;
            if (critrate <= 20) {
                x = ceil(x * 1.5);
            }
            if (playercompanion == true) {
                int randomcompanionevent = 0;
                randomcompanionevent = r() % 4;
                if (randomcompanionevent == 0) {
                    cout << "Your companion has mysteriously made your armor stronger!" << endl;
                    defence += 2;
                }
                else if (randomcompanionevent == 1) {
                    cout << "Your companion healed you for " << ((level >= 75) ? 30 : floor(level / 2.5)) << "!" << endl;
                    health += ((level >= 75) ? 30 : floor(level / 2.5));
                }
                else if (randomcompanionevent == 2) {
                    cout << "Your companion gave you a damage buff of " << ((level >= 75) ? 30 : floor(level / 2.5)) <<  "." << endl;
                    x += ((level >= 75) ? 30 : floor(level / 2.5));
                }
                else {
                    cout << "Your companion didn't do anything this round." << endl;
                }
            }
            h = ceil(x * .5);
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
        if (storetracker >= 5) {
            cout << "Welcome to my store, you are welcome to browse my wares..." << endl;
            cout << "Spelling does count, make sure to be precise in my shop. **NOTS** Only Forge Hammer, Invisibility Potion and Molotov can be bought more than once." << endl;
            cout << "You currently have " << Goldloom << " Goldloom to spend." << endl << endl;
            int shop1, shop2, shop3;
            shop1 = r() % 5 + 1;
            shop2 = r() % 5 + 6;
            shop3 = r() % 5 + 11;
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
            else if (shop3 == 15) {
                cout << "Voidshroud Slicer - 300 - A sword forged specially for the shadows." << endl << endl;
            }
            cout << "Would you like to buy anything this visit?" << endl;
            cin >> ws;
            getline(cin, yesnopurchase);
            if (yesnopurchase == "n" || yesnopurchase == "N" || yesnopurchase == "no" || yesnopurchase == "No") {
                cout << "Maybe next time." << endl << endl;
                attack(Target);
                break;
            }
            cout << "What would you like to buy this visit?" << endl << endl;
            cin >> ws;
            getline(cin, purchasechoice);
            cout << endl;
            if (purchasechoice == "Armor Plating" || purchasechoice == "armor Plating" || purchasechoice == "Armor plating" || purchasechoice == "armor plating" && shop1 == 1) {
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
            else if (purchasechoice == "Sharpening Stone" || purchasechoice == "sharpening Stone" || purchasechoice == "Sharpening stone" || purchasechoice == "sharpening stone" && shop1 == 2) {
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
            else if (purchasechoice == "Forge Hammer" || purchasechoice == "forge Hammer" || purchasechoice == "Forge hammer" || purchasechoice == "forge hammer" && shop1 == 3) {
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
            else if (purchasechoice == "Lightning Shard" || purchasechoice == "lightning Shard" || purchasechoice == "Lightning shard" || purchasechoice == "lightning shard" && shop1 == 4) {
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
            else if (purchasechoice == "Invisibility Potion" || purchasechoice == "invisibility Potion" || purchasechoice == "Invisibility potion" || purchasechoice == "invisibility potion" && shop1 == 5) {
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
            else if (purchasechoice == "Travelers Backpack" || purchasechoice == "travelers Backpack" || purchasechoice == "Travelers backpack" || purchasechoice == "travelers backpack" && shop2 == 6) {
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
                    playercompanion = true;
                    Goldloom -= 500;
                    storetracker = 0;
                    checkitems();
                }
                else if (Goldloom < 500) {
                    cout << "You are too broke for this item and have lost access to the shop for this round." << endl;
                    storetracker -= 1;
                }
            }
            else if (purchasechoice == "Flaming Longsword" || purchasechoice == "Flaming longsword" || purchasechoice == "flaming longsword" || purchasechoice == "flaming Longsword" && shop2 == 8) {
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
            else if (purchasechoice == "Dragonscale Chestplate" || purchasechoice == "Dragonscale chestplate" || purchasechoice == "dragonscale chestplate" || purchasechoice == "dragonscale Chestplate"&& shop2 == 10) {
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
            else if (purchasechoice == "Maxhealth Upgrade" || purchasechoice == "Maxhealth upgrade" || purchasechoice == "maxhealth upgrade" || purchasechoice == "maxhealth Upgrade" && shop3 == 11) {
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
            else if (purchasechoice == "Healing Potion" || purchasechoice == "Healing potion" || purchasechoice == "healing potion" || purchasechoice == "healing Potion" && shop3 == 12) {
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
            else if (purchasechoice == "Glass Shoes" || purchasechoice == "Glass shoes" || purchasechoice == "glass shoes" || purchasechoice == "glass Shoes" && shop3 == 13) {
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
            else if (purchasechoice == "Mystic Helmet" || purchasechoice == "Mystic helmet" || purchasechoice == "mystic helmet" || purchasechoice == "mystic Helmet" && shop3 == 14) {
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
            else if (purchasechoice == "Voidshroud Slicer" || purchasechoice == "voidshroud Slicer" || purchasechoice == "Voidshroud slicer" || purchasechoice == "voidshroud slicer" && shop3 == 14) {
                if (Goldloom >= 300) {
                    cout << "You bought a Voidshroud Slicer!" << endl;
                    VoidshroudSlicer = true;
                    Goldloom -= 300;
                    storetracker = 0;
                    checkitems();
                }
                else if (Goldloom < 300) {
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
    case 8: 
        cout << "-----------------------------------------------" << endl;
        cout << "Welcome to the forge, " << name << "." << endl;
        cout << "In this ancient place, you can combine special ores with your armor to enhance its abilities." << endl;
        if (weaponupgrade == false && armorupgrade == false && lightningshard == false && forgehammer == 0) {
            cout << "You have no upgrades to use yet. Go buy some from the store." << endl;
            cout << "-----------------------------------------------" << endl;
            attack(Target);
            break;
        }
        cout << "-----------------------------------------------" << endl;
        cout << "You have these upgrades currently:" << endl;
        if (weaponupgrade == true) {
            cout << "-Weapon Upgrade-" << endl;
        }
        if (armorupgrade == true) {
            cout << "-Armor Upgrade-" << endl;
        }
        if (lightningshard == true) {
            cout << "-Ligntning Shard-" << endl;
        }
        if (forgehammer > 0) {
            if (forgehammer == 1) {
            cout << "-" << forgehammer << " Forgehammer-" << endl;
            }
            else if (forgehammer > 1) {
            cout << "-" << forgehammer << " Forgehammers-" << endl;
            }
        }
        if (dragonscalechestplate == false && mystichelmet == false && glassshoes == false && Excalibur == false && flaminglongsword == false && VoidshroudSlicer == false && narsosArmor == false && vladimirsArmor == false && lockhartsArmor == false) {
            cout << "You have no armor or weapons to upgrade, go buy some from the store or get them as a lucky drop." << endl;
            cout << "-----------------------------------------------" << endl;
            attack(Target);
            break;
        }
        cout << "-----------------------------------------------" << endl;
        cout << "You have these items to upgrade:" << endl;
        if (narsosArmor == true) {
            cout << "-Narso's Armor (+20 defence)-" << endl;
        }
        if (vladimirsArmor == true) {
            cout << "-Vladirmir's Armor (+20 defence)-" << endl;
        }
        if (lockhartsArmor == true) {
            cout << "-Lockhart's Armor (+20 defence)-" << endl;
        }
        if (glassshoes == true) {
            cout << "-Glass Shoes (+7 defence|+6 maxhealth)-" << endl;
        }
        if (mystichelmet == true) {
            cout << "-Mystic Helmet (+9 defence|+8 maxhealth)-" << endl;
        }
        if (dragonscalechestplate == true) {
            cout << "-Dragonscale Chestplate (+11 defence|+14 maxhealth)-" << endl;
        }
        if (flaminglongsword == true) {
            cout << "-Flaming Longsword (+11 attack)-" << endl;
        }
        if (Excalibur == true) {
            cout << "-Excalibur (+14 attack)-" << endl;
        }
        if (VoidshroudSlicer == true) {
            cout << "-Voidshroud Slicer (+18 attack)-" << endl;
        }
        cout << "-----------------------------------------------" << endl;
        forgerestarting();
        cout << "Would you like to upgrade something else?" << endl;
        cin >> forgerestart;
        if (forgerestart == "Yes" || forgerestart == "yes" || forgerestart == "y" || forgerestart == "Y") {
            forgerestarting();
        }
        else if (forgerestart == "No" || forgerestart == "no" || forgerestart == "n" || forgerestart == "N") {
            attack(Target);
            break;
        }
        break;//check if this breaks the forge
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
        cout << "--" << Goldloom << " Goldloom--" << endl;
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
        if (vladimirsArmor == true) {
            cout << "Vladimir's Armor (+20 defence)" << endl;
        }
        if (narsosArmor == true) {
            cout << "-Narso's Armor (+20 defence)-" << endl;
        }
        if (lockhartsArmor == true) {
            cout << "-Lockhart's Armor (+20 defence)-" << endl;
        }
        if (glassshoes == true) {
            cout << "Glass Shoes (+7 defence|+6 maxhealth)" << endl;
        }
        if (mystichelmet == true) {
            cout << "Mystic Helmet (+9 defence|+8 maxhealth)" << endl;
        }
        if (dragonscalechestplate == true) {
            cout << "Dragonscale Chestplate (+11 defence|+14 maxhealth)" << endl;
        }
        if (VoidshroudSlicer == true) {
            cout << "Voidshroud Slicer (+18 Attack)" << endl;
        }
        if (helmet == true) {
            cout << "Helmet (+7 defence|+5 maxhealth)" << endl;
        }
        if (boots == true) {
            cout << "Boots (+5 defence|+4 maxhealth)" << endl;
        }
        if (shield == true) {
            cout << "Shield (+10 defence)" << endl;
        }
        if (chestplate == true) {
            cout << "Chestplate (+10 defence|+8 maxhealth)" << endl;
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
        if (attackupgrade == true) {
            cout << "Attack Perk (+10 attack)" << endl;
        }
        if (levelupgrade == true) {
            cout << "Level Perk (+15 level)" << endl;
        }
        if (tracklevelpotion >= 1) {
            cout << "Level Potions (+ " << 10 * tracklevelpotion << " levels)" << endl;
        }
        if (tracksuperiorlevelpotion >= 1) {
            cout << "Superior Level Potions (+ " << 15 * tracksuperiorlevelpotion << " levels)" << endl;
        }
        if (tracksuperpotion >= 1) {
            cout << "Super Potions (+ " << 15 * tracksuperpotion << " levels + " << 6 * tracksuperpotion << " Attack)" << endl;
        }
        if (maxhealthtracker >= 1) {
            cout << "Level Potions (+ " << 10 * tracklevelpotion << " levels)" << endl;
        }
        if (invisibilitypotion > 0) {
            cout << invisibilitypotion << " Invisibility Potion (Skip a battle)" << endl;
        }
        if (healthtonicitem > 0) {
            cout << healthtonicitem << "Healh Tonic (Heal 100,75,50 or 25 based on level)" << endl;
        }
        if (flaminglongsword == true) {
            cout << "Flaming Longsword (+11 attack)" << endl;
        }
        if (accuratesword == true) {
            cout << "Accurate Sword (No more slipping!)" << endl;
        }
        if (Excalibur == true) {
            cout << "Excalibur (+14 attack)" << endl;
        }
        if (Knife == true) {
            cout << "Knife (+2 attack)" << endl;
        }
        if (Sword == true) {
            cout << "Sword (+4 attack)" << endl;
        }
        if (molotov > 0) {
            cout << molotov << " Molotov (60% max health dmg)" << endl;
        }
        if (travelersbackpack == true) {
            cout << "Travelers Backpack (Allows you to hold potions)" << endl;
        }
        if (playercompanion == true) {
            cout << "Companion (Does something random every attack and increases odds of finding treasure)" << endl;
        }
        if (forgehammer > 0) {
            cout << forgehammer << " Forge Hammer (Used with other items to enhance artillery)" << endl;
        }
        if (armorupgrade == true) {
            cout << "Armor Plating (Used to upgrade armor)" << endl;
        }
        if (weaponupgrade == true) {
            cout << "Sharpening Stone (Used to upgrade weapons)" << endl;
        }
        if (lightningshard == true) {
            cout << "Lightning Shard (Used to upgrade armor/weapons)" << endl;
        }
        if (lightningdragonscalechestplate == true) {
            cout << "Lightning Dragonscale Chestplate(+11 Defence|+14 Max Health|+25 Attack)" << endl;
        }
        if (lightningmystichelmet == true) {
            cout << "Lightning Mystic Helmet(+12 Defence|+20 Attack)" << endl;
        }
        if (lightningexcalibur == true) {
            cout << "Lightning Excalibur(+35 Attack)" << endl;
        }
        if (lightningglassshoes == true) {
            cout << "Lightning Glass Shoes(+9 Defence|+12 Attack)" << endl;
        }
        if (lightningflaminglongsword == true) {
            cout << "Lightning Framing Longsword(+20 Attack)" << endl;
        }
        if (lightningGodarmor == true) {
            cout << "Lightning God Armor(+30 Defence|+35 Attack)" << endl;
        }
        if (upgradedgodarmor == true) {
            cout << "Upgraded God Armor(+40 Defence|+40 Max Health)" << endl;
        }
        if (upgradedmystichelmet == true) {
            cout << "Upgraded Mystic Helmet(+16 Defence|+20 Max Health)" << endl;
        }
        if (upgradedglassshoes == true) {
            cout << "Upgraded Glass Shoes(+11 Defence|+14 Max Health)" << endl;
        }
        if (upgradedflaminglongsword == true) {
            cout << "Upgraded Flaming Longsword(+11 Attack|+10% Max Health)" << endl;
        }
        if (upgradedexcalibur == true) {
            cout << "Upgraded Excalibur(+18 Attack|+25% Max Health)" << endl;
        }
        if (upgradedDragonscalechestplate == true) {
            cout << "Upgraded Dragonscale Chestplate(+18 Defence|+25 Max Health)" << endl;
        }
        if (upgradedvoidshroudslicer == true) {
            cout << "Upgraded Voidshroud Slicer(+18 Attack|+40% Max Health)" << endl;
        }
        if (lightningvoidshroudslicer == true) {
            cout << "Lightning Voidshroud Slicer(+42 Attack)" << endl;
        }
        if (VoidshroudSlicer == false && lightningvoidshroudslicer == false && upgradedvoidshroudslicer == false && shield == false && levelupgrade == false && superiorleveltonic == false && defenceupgrade == false && narsosArmor == false && vladimirsArmor == false && lockhartsArmor == false && superpotion == false && attackupgrade == false && leveltonic == false && Sword == false && Knife == false && Excalibur == false && accuratesword == false && helmet == false && chestplate == false && boots == false && maxhealthtracker == 0 && tracklevelpotion == 0 && tracksuperiorlevelpotion == 0 && tracksuperpotion == 0 && glassshoes == false && flaminglongsword == false && dragonscalechestplate == false && mystichelmet == false && molotov == 0 && forgehammer == 0 && playercompanion == false && travelersbackpack == false && healthtonicitem == 0 && molotov == 0 && invisibilitypotion == 0) {
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
            string itemuse = "";
            cin >> ws;
            getline(cin, itemuse);
            if (itemuse == "Health Tonic" || itemuse == "Health tonic" || itemuse == "health tonic") {
                cout << "You used a Health Tonic!" << endl;
                itemusehealthtonic();
            }
            else if (itemuse == "Invisibility Potion" || itemuse == "Invisibility potion" || itemuse == "invisibility potion") {
                cout << "You used an Invisibility Potion!" << endl;
                usinginvispotion = true;
                itemuseinvispotion(Target); //wins game if used
                break;
            }
            else if (itemuse == "Molotov" || itemuse == "molotov") {
                cout << "------------------------------------------------" << endl;
                cout << "You used a Molotov!" << endl;
                itemusemolotov(Target);
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