#pragma once
#include "Character.h"
class Player : public Character {
public:
	Player(string n, int maxh, int hp, int atk, int def, int baselvl, int live);
	void attack(Character* Target) override;
	void takeDmg(int dmg) override {
		if (defence > dmg) {
			cout << "Your defence absorbed all " << dmg << " enemy damage!" << endl;
		}
		else if (defence > 0 && defence < dmg) {
			cout << "Your defence absorbed " << getdefence() << " damage!" << endl;
		}
		dmg -= defence;
		if (dmg < 0) {
			dmg = 0;
		}
		health -= dmg;
		if (health <= 0) {
			lives -= 1;
			if (lives > 0) {
				health = maxhealth - floor(baselevel * .8);
			}
		}
	}
	int incrementvillage(int amount) {
		return villagetracker + amount;
	}
	int villagetracker = 0;
	int trackvisits = 0;
	int villagerandomevent = 0;
	void village();
	void playvillage() {
		if (villagerandomevent == 0) {
			villagerandomevent = r() % 5 + 1;
		}
		if (villagerandomevent == 1) {
			int randommessage;
			randommessage = r() % 3;
			if (randommessage == 0) {
				cout << "Archers are approaching, stop them from getting too close." << endl;
			}
			else if (randommessage == 1) {
				cout << "The Ogres seem angry. Stop them from expressing it on the villagers!" << endl;
			}
			else {
				cout << "Trolls are invading! Stop them from their evil crimes." << endl;
			}
			
		}
		else if (villagerandomevent == 2) {
			int randommessage;
			randommessage = r() % 3;
			if (randommessage == 0) {
				cout << "Bandits are trying to steal from the villagers, stop them!" << endl;
			}
			else if (randommessage == 1) {
				cout << "Goblins are coming to steal all the villagers valuables, put an end to them!" << endl;
			}
			else {
				cout << "A bunch of thugs seem to want to cause trouble, make them change their mind." << endl;
			}
		}
		else if (villagerandomevent == 3) {
			int randommessage;
			randommessage = r() % 3;
			if (randommessage == 0) {
				cout << "The well broke and they are losing water fast, rebuild it!" << endl;
			}
			else if (randommessage == 1) {
				cout << "There's a fire, put it out quick!!" << endl;
			}
			else {
				cout << "A villagers house was destroyed by a storm, fix it!" << endl;
			}
		}
		else if (villagerandomevent == 4) {
			int randommessage;
			randommessage = r() % 3;
			if (randommessage == 0) {
				cout << "A villager is sick and needs your help to heal him." << endl;
			}
			else if (randommessage == 1) {
				cout << "The village is running low on supplies, make a donation." << endl;
			}
			else {
				cout << "A villager needs some food, give him some." << endl;
			}
		}
		else {
			cout << "Your return is welcomed with open arms even though there is nothing wrong." << endl;
		}
	}
	void mysteriousquest();
	void setmaxhealth();
	void checkitems();
	void forgerestarting();
	void forgecrafting();
	void playerclassexecutioner();
	void playerclasssoulweaver();
	void playerclasswarforged();
	void playerclassdreadnought();
	void playerclasstrickster();
	void itemusehealthtonic();
	int stopremessaging = 0;
	int healthtonicitem = 0;
	int failedforge = 0;
	int cipherblueprint = 0;
	int ciphertracker = 0;
	int soulstone = 0;
	int radiantgem = 0;
	int questtracker = 0;
	int questpicker = 0;
	int questrandomizer = 0;
	int questrandomizer2 = 0;
	int food = 0;
	int wood = 0;
	int shop1 = 0;
	int shop2 = 0;
	int shop3 = 0;
	int storesave = 0;
	int bucketowater = 0;
	bool visitedbefore = false;
	bool riddle = false;
	bool cipherkey = false;
	bool horsemount = false;
	bool dragonmount = false;
	bool goldloomMagnet = false;
	bool regenerativemantle = false;
	bool fallen = false;
	bool Knife = false;
	bool Sword = false;
	bool Excalibur = false;
	bool upgradedexcalibur = false;
	bool lightningexcalibur = false;
	bool leveltonic = false;
	bool superiorleveltonic = false;
	bool superpotion = false;
	bool chestplate = false;
	bool helmet = false;
	bool boots = false;
	bool narsosArmor = false;
	bool lockhartsArmor = false;
	bool vladimirsArmor = false;
	bool upgradedgodarmor = false;
	bool lightningGodarmor = false;
	bool accuratesword = false;
	bool shield = false;
	bool fasttravel = false;
	bool trickstermove = false;
	bool soulweavermove = false;
	bool warforgedmove = false;
	bool knightmove = false;
	bool dreadnoughtmove = false;
	bool executionermove = false;
	bool maxhealthupgrade = false;
	bool defenceupgrade = false;
	bool levelupgrade = false;
	bool attackupgrade = false;
	bool armorupgrade = false;
	bool weaponupgrade = false;
	bool flaminglongsword = false;
	bool VoidshroudSlicer = false;
	bool upgradedvoidshroudslicer = false;
	bool lightningvoidshroudslicer = false;
	bool upgradedflaminglongsword = false;
	bool lightningflaminglongsword = false;
	bool maxhealthupgradeitem = false;
	bool healingpotionitem = false;
	bool lightningshard = false;
	bool glassshoes = false;
	bool upgradedglassshoes = false;
	bool lightningglassshoes = false;
	bool mystichelmet = false;
	bool upgradedmystichelmet = false;
	bool lightningmystichelmet = false;
	bool dragonscalechestplate = false;
	bool upgradedDragonscalechestplate = false;
	bool lightningdragonscalechestplate = false;
	bool travelersbackpack = false;
	bool playercompanion = false;
	bool killememiesquest = false;
	int questoneprogress = 0;
	bool craftanitemquest = false;
	int questtwoprogress = 0;
	bool forgeanitemquest = false;
	int questthreeprogress = 0;
	bool usetwoitemsquest = false;
	int questfourprogress = 0;
	bool killabossquest = false;
	int questfiveprogress = 0;
	int questscompleted = 0;
	int trackexcaliburmaxhealth = 0;
	int trackflamingmaxhealth = 0;
	int trackvoidshroudmaxhealth = 0;
	int forgehammer = 0;
	int excaliburtracker = 0;
	int knifetracker = 0;
	int swordtracker = 0;
	int helmtracker = 0;
	int chesttracker = 0;
	int boottracker = 0;
	int shieldtracker = 0;
	int godtracker = 0;
	int defenceupgradetracker = 0;
	int flamingtracker = 0;
	int dragontracker = 0;
	int shoetracker = 0;
	int mystictracker = 0;
	int lightningdragontracker = 0;
	int upgradeddragontracker = 0;
	int lightningexcaliburtracker = 0;
	int upgradedexcaltracker = 0;
	int lightninglongswordtracker = 0;
	int upgradedlongswordtracker = 0;
	int lightninggodtracker = 0;
	int upgradedgodtracker = 0;
	int upgradedmystictracker = 0;
	int lightningmystictracker = 0;
	int upgradedglasstracker = 0;
	int lightningglasstracker = 0;
	int voidshroudtracker = 0;
	int upgradedvoidshroudtracker = 0;
	int lightningvoidshroudtracker = 0;
	int tracklevelpotion = 0;
	int tracksuperpotion = 0;
	int tracksuperiorlevelpotion = 0;
	int lostartifact = 0;
	bool cursedheart = false;
	bool enchantedsachel = false;
	bool glowingglasses = false;
	bool fierynecklace = false;
	bool shinybelt = false;
	bool mysteriousstranger = false;
	bool mysteriousstrangerquestactive = false;
	bool mysteriousstrangerquest = false;
	bool mysteriousstrangerquest2 = false;
	bool mysteriousstrangerquest3 = false;
	bool mysteriousstrangerquest4 = false;
	bool mysteriousstrangerquest5 = false;
	int mysteriousstrangerquesttracker = 0;
	int mysteriousstrangerquesttracker2 = 0;
	int mysteriousstrangerquesttracker3 = 0;
	int mysteriousstrangerquesttracker4 = 0;
	int mysteriousstrangerquesttracker5 = 0;
};