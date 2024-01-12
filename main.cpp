#include <iostream>
#include <random>
#include <string>
#include <cmath>
#include "Character.h"
#include "Player.h"
#include "Enemy.h"
using namespace std;
random_device r1;
string factionchoice = "";
int factionchoiceint = 0;
Enemy* generateEnemy(int baselevel, int hp, int atk, int def, int level, int lives) {
    int x, enemyhp, enemyatk, enemylives, enemydef, enemylvl, enemymaxh;
    if (baselevel == 200) {
        x = 12;
    }
    else if (baselevel == 100) {
        x = 11;
    }
    else if (baselevel >= 101) {
        x = r1() % 4 + 8;
    }
    else if (baselevel >= 80) {
        x = r1() % 4 + 7;
    }
    else if (baselevel >= 70) {
        x = r1() % 4 + 6;
    }
    else if (baselevel >= 60) {
        x = r1() % 4 + 5;
    }
    else if (baselevel >= 50) {
        x = r1() % 4 + 4;
    }
    else if (baselevel >= 40) {
        x = r1() % 4 + 3;
    }
    else if (baselevel >= 30) {
        x = r1() % 4 + 2;
    }
    else if (baselevel >= 20) {
        x = r1() % 4 + 1;
    }
    else if (baselevel >= 10) {
        x = r1() % 3;
    }
    else {
        x = r1() % 2;
    }
    enemyatk = atk;
    enemydef = def;
    enemyhp = hp;
	if (lives >= 2) {
		enemylives = floor(lives * .5);
	}
	else {
		enemylives = 1;
	}
    enemylvl = level;
    enemymaxh = enemyhp;
    if (x==12) {
        enemyatk = atk * 1.25;
        enemydef = def * 1,25;
        enemyhp = hp * 1.25;
	if (lives >= 2) {
		enemylives = floor(lives * .5);
	}
	else {
		enemylives = 1;
	}
        enemylvl = level;
        enemymaxh = enemyhp;
    }
    else if (x == 11) {
        enemyatk = atk * 1.1;
        enemydef = def * 1,1;
        enemyhp = hp * 1.1;
	if (lives >= 2) {
		enemylives = floor(lives * .5);
	}
	else {
		enemylives = 1;
	}
        enemylvl = level;
        enemymaxh = enemyhp;
    }
    else if (x== 6) {
        enemyatk = atk * 1.1;
        enemydef = def * 1.1;
        enemyhp = hp * 1.1;
	if (lives >= 2) {
		enemylives = floor(lives * .5);
	}
	else {
		enemylives = 1;
	}
        enemylvl = level;
        enemymaxh = enemyhp;
    }
    switch (x) {
    case 0:
        return new Enemy("Shroom", 20, 1, 1, 0, 1, 20);
        break;
    case 1:
        return new Enemy("Shroom Knight", 25, 1,0, 1, 2, 25);
        break;
    case 2:
        return new Enemy("Shroom ArchKnight", enemyhp, enemyatk, enemydef, enemylives, enemylvl, enemymaxh);
        break;
    case 3:
        return new Enemy("Noble Shroom", enemyhp, enemyatk, enemydef, enemylives, enemylvl, enemymaxh);
        break;
    case 4:
        return new Enemy("Royal Shroom", enemyhp, enemyatk, enemydef, enemylives, enemylvl, enemymaxh);
        break;
    case 5:
        return new Enemy("Princess Slime", enemyhp, enemyatk, enemydef, enemylives, enemylvl, enemymaxh);
        break;
    case 6:
        return new Enemy("Prince Shroom", enemyhp, enemyatk, enemydef, enemylives, enemylvl, enemymaxh);
        break;
    case 7:
        return new Enemy("King Shroom", enemyhp, enemyatk, enemydef, enemylives, enemylvl, enemymaxh);
        break;
    case 8:
        return new Enemy("Emperor Shroom", enemyhp, enemyatk, enemydef, enemylives, enemylvl, enemymaxh);
        break;
    case 9:
        return new Enemy("Leader Shroom", enemyhp, enemyatk, enemydef, enemylives, enemylvl, enemymaxh);
        break;
    case 10:
        return new Enemy("Divine Shroom", enemyhp, enemyatk, enemydef, enemylives, enemylvl, enemymaxh);
        break;
    case 11:
        return new Enemy("Boss Shroom", enemyhp, enemyatk, enemydef, enemylives, enemylvl, enemymaxh);
        break;
    default:
        return new Enemy("Creator Shroom", enemyhp, enemyatk, enemydef, enemylives, enemylvl, enemymaxh);
        break;
    }
}
Enemy* generateEnemy2(int baselevel2, int hp2, int atk2, int def2, int level2, int lives2) {
	int x, enemyhp2, enemyatk2, enemylives2, enemydef2, enemylvl2, enemymaxh2;
	if (baselevel2 == 200) {
		x = 12;
	}
	else if (baselevel2 == 100) {
		x = 11;
	}
	else if (baselevel2 >= 101) {
		x = r1() % 4 + 8;
	}
	else if (baselevel2 >= 80) {
		x = r1() % 4 + 7;
	}
	else if (baselevel2 >= 70) {
		x = r1() % 4 + 6;
	}
	else if (baselevel2 >= 60) {
		x = r1() % 4 + 5;
	}
	else if (baselevel2 >= 50) {
		x = r1() % 4 + 4;
	}
	else if (baselevel2 >= 40) {
		x = r1() % 4 + 3;
	}
	else if (baselevel2 >= 30) {
		x = r1() % 4 + 2;
	}
	else if (baselevel2 >= 20) {
		x = r1() % 4 + 1;
	}
	else if (baselevel2 >= 10) {
		x = r1() % 3;
	}
	else {
		x = r1() % 2;
	}
	enemyatk2 = atk2 * .75;
	enemydef2 = def2 * .75;
	enemyhp2 = hp2 * .75;
	if (lives2 >= 2) {
		enemylives2 = floor(lives2 * .5);
	}
	else {
		enemylives2 = 1;
	}
	enemylvl2 = level2;
	enemymaxh2 = enemyhp2;
	if (x == 12) {
		enemyatk2 = atk2 * 1.25;
		enemydef2 = def2 * 1, 25;
		enemyhp2 = hp2 * 1.25;
		if (lives2 >= 2) {
			enemylives2 = floor(lives2 * .5);
		}
		else {
			enemylives2 = 1;
		}
		enemylvl2 = level2;
		enemymaxh2 = enemyhp2;
	}
	else if (x == 11) {
		enemyatk2 = atk2 * 1.1;
		enemydef2 = def2 * 1, 1;
		enemyhp2 = hp2 * 1.1;
		if (lives2 >= 2) {
			enemylives2 = floor(lives2 * .5);
		}
		else {
			enemylives2 = 1;
		}
		enemylvl2 = level2;
		enemymaxh2 = enemyhp2;
	}
	else if (x == 6) {
		enemyatk2 = atk2 * 1.1;
		enemydef2 = def2 * 1.1;
		enemyhp2 = hp2 * 1.1;
		if (lives2 >= 2) {
			enemylives2 = floor(lives2 * .5);
		}
		else {
			enemylives2 = 1;
		}
		enemylvl2 = level2;
		enemymaxh2 = enemyhp2;
	}
	switch (x) {
	case 0:
		return new Enemy("Slime", 20, 1, 0, 1, 0, 20);
		break;
	case 1:
		return new Enemy("Epic Slime", 25, 1, 0, 1, 0, 25);
		break;
	case 2:
		return new Enemy("Superior Slime", enemyhp2, enemyatk2, enemydef2, enemylives2, enemylvl2, enemymaxh2);
		break;
	case 3:
		return new Enemy("Super Slime", enemyhp2, enemyatk2, enemydef2, enemylives2, enemylvl2, enemymaxh2);
		break;
	case 4:
		return new Enemy("Incredible Slime", enemyhp2, enemyatk2, enemydef2, enemylives2, enemylvl2, enemymaxh2);
		break;
	case 5:
		return new Enemy("Superb Slime", enemyhp2, enemyatk2, enemydef2, enemylives2, enemylvl2, enemymaxh2);
		break;
	case 6:
		return new Enemy("King Slime", enemyhp2, enemyatk2, enemydef2, enemylives2, enemylvl2, enemymaxh2);
		break;
	case 7:
		return new Enemy("Demon Slime", enemyhp2, enemyatk2, enemydef2, enemylives2, enemylvl2, enemymaxh2);
		break;
	case 8:
		return new Enemy("Overlord Slime", enemyhp2, enemyatk2, enemydef2, enemylives2, enemylvl2, enemymaxh2);
		break;
	case 9:
		return new Enemy("Universal Super Slime", enemyhp2, enemyatk2, enemydef2, enemylives2, enemylvl2, enemymaxh2);
		break;
	case 10:
		return new Enemy("Godly Slime", enemyhp2, enemyatk2, enemydef2, enemylives2, enemylvl2, enemymaxh2);
		break;
	case 11:
		return new Enemy("Boss Slime", enemyhp2, enemyatk2, enemydef2, enemylives2, enemylvl2, enemymaxh2);
		break;
	default:
		return new Enemy("Creator Slime", enemyhp2, enemyatk2, enemydef2, enemylives2, enemylvl2, enemymaxh2);
		break;
	}
}
Enemy* generateEnemy3(int baselevel3, int hp3, int atk3, int def3, int level3, int lives3) {
	int x, enemyhp3, enemyatk3, enemylives3, enemydef3, enemylvl3, enemymaxh3;
	if (baselevel3 == 200) {
		x = 12;
	}
	else if (baselevel3 == 100) {
		x = 11;
	}
	else if (baselevel3 >= 101) {
		x = r1() % 4 + 8;
	}
	else if (baselevel3 >= 80) {
		x = r1() % 4 + 7;
	}
	else if (baselevel3 >= 70) {
		x = r1() % 4 + 6;
	}
	else if (baselevel3 >= 60) {
		x = r1() % 4 + 5;
	}
	else if (baselevel3 >= 50) {
		x = r1() % 4 + 4;
	}
	else if (baselevel3 >= 40) {
		x = r1() % 4 + 3;
	}
	else if (baselevel3 >= 30) {
		x = r1() % 4 + 2;
	}
	else if (baselevel3 >= 20) {
		x = r1() % 4 + 1;
	}
	else if (baselevel3 >= 10) {
		x = r1() % 3;
	}
	else {
		x = r1() % 2;
	}
	enemyatk3 = atk3 * .75;
	enemydef3 = def3 * .75;
	enemyhp3 = hp3 * .75;
	if (lives3 >= 2) {
		enemylives3 = floor(lives3 * .5);
	}
	else {
		enemylives3 = 1;
	}
	enemylvl3 = level3;
	enemymaxh3 = enemyhp3;
	if (x == 12) {
		enemyatk3 = atk3 * 1.25;
		enemydef3 = def3 * 1, 25;
		enemyhp3 = hp3 * 1.25;
		if (lives3 >= 2) {
			enemylives3 = floor(lives3 * .5);
		}
		else {
			enemylives3 = 1;
		}
		enemylvl3 = level3;
		enemymaxh3 = enemyhp3;
	}
	else if (x == 11) {
		enemyatk3 = atk3 * 1.1;
		enemydef3 = def3 * 1, 1;
		enemyhp3 = hp3 * 1.1;
		if (lives3 >= 2) {
			enemylives3 = floor(lives3 * .5);
		}
		else {
			enemylives3 = 1;
		}
		enemylvl3 = level3;
		enemymaxh3 = enemyhp3;
	}
	else if (x == 6) {
		enemyatk3 = atk3 * 1.1;
		enemydef3 = def3 * 1.1;
		enemyhp3 = hp3 * 1.1;
		if (lives3 >= 2) {
			enemylives3 = floor(lives3 * .5);
		}
		else {
			enemylives3 = 1;
		}
		enemylvl3 = level3;
		enemymaxh3 = enemyhp3;
	}
	switch (x) {
	case 0:
		return new Enemy("Croc", 20, 1, 0, 1, 0, 20);
		break;
	case 1:
		return new Enemy("Croc Pot", 25, 1, 0, 1, 0, 25);
		break;
	case 2:
		return new Enemy("Mini Croc", enemyhp3, enemyatk3, enemydef3, enemylives3, enemylvl3, enemymaxh3);
		break;
	case 3:
		return new Enemy("Big Croc", enemyhp3, enemyatk3, enemydef3, enemylives3, enemylvl3, enemymaxh3);
		break;
	case 4:
		return new Enemy("Land Croc", enemyhp3, enemyatk3, enemydef3, enemylives3, enemylvl3, enemymaxh3);
		break;
	case 5:
		return new Enemy("Sharptooth Croc", enemyhp3, enemyatk3, enemydef3, enemylives3, enemylvl3, enemymaxh3);
		break;
	case 6:
		return new Enemy("King Croc", enemyhp3, enemyatk3, enemydef3, enemylives3, enemylvl3, enemymaxh3);
		break;
	case 7:
		return new Enemy("Develish Croc", enemyhp3, enemyatk3, enemydef3, enemylives3, enemylvl3, enemymaxh3);
		break;
	case 8:
		return new Enemy("Crocodile Dundee", enemyhp3, enemyatk3, enemydef3, enemylives3, enemylvl3, enemymaxh3);
		break;
	case 9:
		return new Enemy("Killer Croc", enemyhp3, enemyatk3, enemydef3, enemylives3, enemylvl3, enemymaxh3);
		break;
	case 10:
		return new Enemy("Transcendent Croc", enemyhp3, enemyatk3, enemydef3, enemylives3, enemylvl3, enemymaxh3);
		break;
	case 11:
		return new Enemy("Florida Croc", enemyhp3, enemyatk3, enemydef3, enemylives3, enemylvl3, enemymaxh3);
		break;
	default:
		return new Enemy("Creator Croc", enemyhp3, enemyatk3, enemydef3, enemylives3, enemylvl3, enemymaxh3);
		break;
	}
}
Enemy* generateEnemy4(int baselevel4, int hp4, int atk4, int def4, int level4, int lives4) {
	int x, enemyhp4, enemyatk4, enemylives4, enemydef4, enemylvl4, enemymaxh4;
	if (baselevel4 == 200) {
		x = 12;
	}
	else if (baselevel4 == 100) {
		x = 11;
	}
	else if (baselevel4 >= 101) {
		x = r1() % 4 + 8;
	}
	else if (baselevel4 >= 80) {
		x = r1() % 4 + 7;
	}
	else if (baselevel4 >= 70) {
		x = r1() % 4 + 6;
	}
	else if (baselevel4 >= 60) {
		x = r1() % 4 + 5;
	}
	else if (baselevel4 >= 50) {
		x = r1() % 4 + 4;
	}
	else if (baselevel4 >= 40) {
		x = r1() % 4 + 3;
	}
	else if (baselevel4 >= 30) {
		x = r1() % 4 + 2;
	}
	else if (baselevel4 >= 20) {
		x = r1() % 4 + 1;
	}
	else if (baselevel4 >= 10) {
		x = r1() % 3;
	}
	else {
		x = r1() % 2;
	}
	enemyatk4 = atk4 * .75;
	enemydef4 = def4 * .75;
	enemyhp4 = hp4 * .75;
	if (lives4 >= 2) {
		enemylives4 = floor(lives4 * .5);
	}
	else {
		enemylives4 = 1;
	}
	enemylvl4 = level4;
	enemymaxh4 = enemyhp4;
	if (x == 12) {
		enemyatk4 = atk4 * 1.25;
		enemydef4 = def4 * 1, 25;
		enemyhp4 = hp4 * 1.25;
		if (lives4 >= 2) {
			enemylives4 = floor(lives4 * .5);
		}
		else {
			enemylives4 = 1;
		}
		enemylvl4 = level4;
		enemymaxh4 = enemyhp4;
	}
	else if (x == 11) {
		enemyatk4 = atk4 * 1.1;
		enemydef4 = def4 * 1, 1;
		enemyhp4 = hp4 * 1.1;
		if (lives4 >= 2) {
			enemylives4 = floor(lives4 * .5);
		}
		else {
			enemylives4 = 1;
		}
		enemylvl4 = level4;
		enemymaxh4 = enemyhp4;
	}
	else if (x == 6) {
		enemyatk4 = atk4 * 1.1;
		enemydef4 = def4 * 1.1;
		enemyhp4 = hp4 * 1.1;
		if (lives4 >= 2) {
			enemylives4 = floor(lives4 * .5);
		}
		else {
			enemylives4 = 1;
		}
		enemylvl4 = level4;
		enemymaxh4 = enemyhp4;
	}
	switch (x) {
	case 0:
		return new Enemy("Roo", 20, 1, 0, 1, 0, 20);
		break;
	case 1:
		return new Enemy("Joey Roo", 25, 1, 0, 1, 0, 25);
		break;
	case 2:
		return new Enemy("Kangaroo", enemyhp4, enemyatk4, enemydef4, enemylives4, enemylvl4, enemymaxh4);
		break;
	case 3:
		return new Enemy("Mother Roo", enemyhp4, enemyatk4, enemydef4, enemylives4, enemylvl4, enemymaxh4);
		break;
	case 4:
		return new Enemy("Boxer Roo", enemyhp4, enemyatk4, enemydef4, enemylives4, enemylvl4, enemymaxh4);
		break;
	case 5:
		return new Enemy("Jumping Roo", enemyhp4, enemyatk4, enemydef4, enemylives4, enemylvl4, enemymaxh4);
		break;
	case 6:
		return new Enemy("Killer Roo", enemyhp4, enemyatk4, enemydef4, enemylives4, enemylvl4, enemymaxh4);
		break;
	case 7:
		return new Enemy("Crackhead Roo", enemyhp4, enemyatk4, enemydef4, enemylives4, enemylvl4, enemymaxh4);
		break;
	case 8:
		return new Enemy("Aussie Roo", enemyhp4, enemyatk4, enemydef4, enemylives4, enemylvl4, enemymaxh4);
		break;
	case 9:
		return new Enemy("Jacked Roo", enemyhp4, enemyatk4, enemydef4, enemylives4, enemylvl4, enemymaxh4);
		break;
	case 10:
		return new Enemy("Paragon Roo", enemyhp4, enemyatk4, enemydef4, enemylives4, enemylvl4, enemymaxh4);
		break;
	case 11:
		return new Enemy("Boomaroo", enemyhp4, enemyatk4, enemydef4, enemylives4, enemylvl4, enemymaxh4);
		break;
	default:
		return new Enemy("Creator Kangaroo", enemyhp4, enemyatk4, enemydef4, enemylives4, enemylvl4, enemymaxh4);
		break;
	}
}
Enemy* generateEnemy5(int baselevel5, int hp5, int atk5, int def5, int level5, int lives5) {
	int x, enemyhp5, enemyatk5, enemylives5, enemydef5, enemylvl5, enemymaxh5;
	if (baselevel5 == 200) {
		x = 12;
	}
	else if (baselevel5 == 100) {
		x = 11;
	}
	else if (baselevel5 >= 101) {
		x = r1() % 4 + 8;
	}
	else if (baselevel5 >= 80) {
		x = r1() % 4 + 7;
	}
	else if (baselevel5 >= 70) {
		x = r1() % 4 + 6;
	}
	else if (baselevel5 >= 60) {
		x = r1() % 4 + 5;
	}
	else if (baselevel5 >= 50) {
		x = r1() % 4 + 4;
	}
	else if (baselevel5 >= 40) {
		x = r1() % 4 + 3;
	}
	else if (baselevel5 >= 30) {
		x = r1() % 4 + 2;
	}
	else if (baselevel5 >= 20) {
		x = r1() % 4 + 1;
	}
	else if (baselevel5 >= 10) {
		x = r1() % 3;
	}
	else {
		x = r1() % 2;
	}
	enemyatk5 = atk5 * .75;
	enemydef5 = def5 * .75;
	enemyhp5 = hp5 * .75;
	if (lives5 >= 2) {
		enemylives5 = floor(lives5 * .5);
	}
	else {
		enemylives5 = 1;
	}
	enemylvl5 = level5;
	enemymaxh5 = enemyhp5;
	if (x == 12) {
		enemyatk5 = atk5 * 1.25;
		enemydef5 = def5 * 1, 25;
		enemyhp5 = hp5 * 1.25;
		if (lives5 >= 2) {
			enemylives5 = floor(lives5 * .5);
		}
		else {
			enemylives5 = 1;
		}
		enemylvl5 = level5;
		enemymaxh5 = enemyhp5;
	}
	else if (x == 11) {
		enemyatk5 = atk5 * 1.1;
		enemydef5 = def5 * 1, 1;
		enemyhp5 = hp5 * 1.1;
		if (lives5 >= 2) {
			enemylives5 = floor(lives5 * .5);
		}
		else {
			enemylives5 = 1;
		}
		enemylvl5 = level5;
		enemymaxh5 = enemyhp5;
	}
	else if (x == 6) {
		enemyatk5 = atk5 * 1.1;
		enemydef5 = def5 * 1.1;
		enemyhp5 = hp5 * 1.1;
		if (lives5 >= 2) {
			enemylives5 = floor(lives5 * .5);
		}
		else {
			enemylives5 = 1;
		}
		enemylvl5 = level5;
		enemymaxh5 = enemyhp5;
	}
	switch (x) {
	case 0:
		return new Enemy("Skeleton", 20, 1, 0, 1, 0, 20);
		break;
	case 1:
		return new Enemy("Skellie", 25, 1, 0, 1, 0, 25);
		break;
	case 2:
		return new Enemy("Enchanted Bow Skeleton", enemyhp5, enemyatk5, enemydef5, enemylives5, enemylvl5, enemymaxh5);
		break;
	case 3:
		return new Enemy("Aimbot Skellie", enemyhp5, enemyatk5, enemydef5, enemylives5, enemylvl5, enemymaxh5);
		break;
	case 4:
		return new Enemy("Sharpshooter Skeleton", enemyhp5, enemyatk5, enemydef5, enemylives5, enemylvl5, enemymaxh5);
		break;
	case 5:
		return new Enemy("Bony Bill", enemyhp5, enemyatk5, enemydef5, enemylives5, enemylvl5, enemymaxh5);
		break;
	case 6:
		return new Enemy("Crazy Bones", enemyhp5, enemyatk5, enemydef5, enemylives5, enemylvl5, enemymaxh5);
		break;
	case 7:
		return new Enemy("Broken Bone Skeleton", enemyhp5, enemyatk5, enemydef5, enemylives5, enemylvl5, enemymaxh5);
		break;
	case 8:
		return new Enemy("Boogie Bone", enemyhp5, enemyatk5, enemydef5, enemylives5, enemylvl5, enemymaxh5);
		break;
	case 9:
		return new Enemy("Ranked Skeleton", enemyhp5, enemyatk5, enemydef5, enemylives5, enemylvl5, enemymaxh5);
		break;
	case 10:
		return new Enemy("Captain Skellie", enemyhp5, enemyatk5, enemydef5, enemylives5, enemylvl5, enemymaxh5);
		break;
	case 11:
		return new Enemy("Super Skellie", enemyhp5, enemyatk5, enemydef5, enemylives5, enemylvl5, enemymaxh5);
		break;
	default:
		return new Enemy("Creator Skeleton", enemyhp5, enemyatk5, enemydef5, enemylives5, enemylvl5, enemymaxh5);
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
		int playerclasschoice = 0, cinFailchoice = 0, classcurrency = 0;
		cin >> playerclasschoice;
		if (cin.fail()) {
			cout << endl;
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			cout << "You typed a letter...I asked for a number. You lose privledge to choose your class now." << endl;
			cinFailchoice = r1() % 6 + 1;
			if (cinFailchoice == 1) {
				cout << "You chose Knight!" << endl;
			}
			else if (cinFailchoice == 2) {
				Knight.playerclassexecutioner();
				cout << "You chose Executioner!" << endl;
			}
			else if (cinFailchoice == 3) {
				Knight.playerclasssoulweaver();
				cout << "You chose Soulweaver!" << endl;
			}
			else if (cinFailchoice == 4) {
				Knight.playerclasswarforged();
				cout << "You chose Warforged Engineer!" << endl;
			}
			else if (cinFailchoice == 5) {
				Knight.playerclassdreadnought();
				cout << "You chose Dreadnought!" << endl;
			}
			else if (cinFailchoice == 6) {
				Knight.playerclasstrickster();
				cout << "You chose Trickster!" << endl;
			}
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
			playerclasschoice = r1() % 6 + 1;
			if (playerclasschoice == 1) {
				cout << "You were given Knight." << endl;
			}
			else if (playerclasschoice == 2) {
				Knight.playerclassexecutioner();
				cout << "You were given Executioner." << endl;
			}
			else if (playerclasschoice == 3) {
				Knight.playerclasssoulweaver();
				cout << "You were given Soulweaver." << endl;
			}
			else if (playerclasschoice == 4) {
				Knight.playerclasswarforged();
				cout << "You were given Warforged Engineer." << endl;
			}
			else if (playerclasschoice == 5) {
				Knight.playerclassdreadnought();
				cout << "You were given Dreadnought." << endl;
			}
			else if (playerclasschoice == 6) {
				Knight.playerclasstrickster();
				cout << "You were given Trickster." << endl;
			}
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
		cout << "Where would you like to journey" << Knight.getname() << "?**1-5**" << endl;
		cout << "-Mushroom Kingdom-" << endl;
		cout << "-Gooey Glade-" << endl;
		cout << "-Croc Isle-" << endl;
		cout << "-Hopscotch Highlands-" << endl;
		cout << "-Skeletal Sanctum-" << endl;
		string areachoice = "";
		int areachoiceint = 0;
		cin >> ws;
		getline(cin, areachoice);
		if (areachoice == "Mushroom Kingdom" || areachoice == "mushroom kingdom" || areachoice == "Mushroom kingdom"|| areachoice == "mushroom Kingdom" || areachoice == "1") {
			cout << endl;
			cout << "-Welcome to the happy Kingdom of the Mushrooms! Normally you would be welcomed by, well a mushroom, but right now they are being invaded. Go get the invaders!-" << endl << endl;
			areachoiceint = 1;
		}
		else if (areachoice == "Gooey Glade" || areachoice == "gooey glade" || areachoice == "Gooey glade" || areachoice == "gooey Glade" || areachoice == "2") {
			cout << endl;
			cout << "-Welcome to the uneasy feeling area of the slimes. Good Luck Surviving!-" << endl << endl;
			areachoiceint = 2;
		}
		else if (areachoice == "Croc Isle" || areachoice == "croc isle" || areachoice == "Croc isle"|| areachoice == "croc Isle" || areachoice == "3") {
			cout << endl;
			cout << "-Welcome to the land of the crocs. Go find that croc king!-" << endl << endl;
			areachoiceint = 3;
		}
		else if (areachoice == "Hopscotch Highlands" || areachoice == "hopscotch highlands"|| areachoice == "hopscotch Highlands" || areachoice == "Hopscotch highlands" || areachoice == "4") {
			cout << endl;
			cout << "-Welcome to the land of the kangaroos, attack that zoo owner!-" << endl << endl;
			areachoiceint = 4;
		}
		else if (areachoice == "Skeletal Sanctum" || areachoice == "skeletal sanctum"|| areachoice == "skeletal Sanctum" || areachoice == "Skeletal sanctum" || areachoice == "5") {
			cout << endl;
			cout << "-Welcome to the graveyeard of your dead family...just kidding. Look out there's a skeleton!-" << endl << endl;
			areachoiceint = 5;
		}
		else {
			cout << "That area doesn't exist so I guess I'll choose for you" << endl;
			int x = 0;
			x = r1() % 5 + 1;
			switch (x) {
			case 0:
				if (cin.fail()) {
					cout << endl;
					cout << "----------------------" << endl;
					cout << "I chose an area for you." << endl;
					cout << "----------------------" << endl << endl;
					cin.clear();
					cin.ignore(numeric_limits<streamsize>::max(), '\n');
					areachoiceint = r1() % 5 + 1;
					break;
				}
			case 1:
				areachoice = "Mushroom Kingdom";
				cout << endl;
				cout << "-Welcome to the happy Kingdom of the Mushrooms! Normally you would be welcomed by, well a mushroom, but right now they are being invaded. Go get them!-" << endl << endl;
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
					areachoiceint = r1() % 5 + 1;
					break;
				}
			}
		}
		Enemy* Slime = generateEnemy(Knight.getbaselevel(), Knight.getmaxhealth(), Knight.getattackPower(), Knight.getdefence(), Knight.getlevel(), Knight.getlives());
		delete Slime;
		if (areachoiceint == 1) {
			Enemy* Slime = generateEnemy(Knight.getbaselevel(), Knight.getmaxhealth(), Knight.getattackPower(), Knight.getdefence(), Knight.getlevel(), Knight.getlives());
		}
		else if (areachoiceint == 2) {
			Enemy* Slime = generateEnemy2(Knight.getbaselevel(), Knight.getmaxhealth(), Knight.getattackPower(), Knight.getdefence(), Knight.getlevel(), Knight.getlives());
		}
		else if (areachoiceint == 3) {
			Enemy* Slime = generateEnemy3(Knight.getbaselevel(), Knight.getmaxhealth(), Knight.getattackPower(), Knight.getdefence(), Knight.getlevel(), Knight.getlives());
		}
		else if (areachoiceint == 4) {
			Enemy* Slime = generateEnemy4(Knight.getbaselevel(), Knight.getmaxhealth(), Knight.getattackPower(), Knight.getdefence(), Knight.getlevel(), Knight.getlives());
		}
		else if (areachoiceint == 5) {
			Enemy* Slime = generateEnemy5(Knight.getbaselevel(), Knight.getmaxhealth(), Knight.getattackPower(), Knight.getdefence(), Knight.getlevel(), Knight.getlives());
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
						Enemy* Slime = generateEnemy(Knight.getbaselevel(), Knight.getmaxhealth(), Knight.getattackPower(), Knight.getdefence(), Knight.getlevel(), Knight.getlives());
					}
					else if (areachoiceint == 2) {
						Enemy* Slime = generateEnemy2(Knight.getbaselevel(), Knight.getmaxhealth(), Knight.getattackPower(), Knight.getdefence(), Knight.getlevel(), Knight.getlives());
					}
					else if (areachoiceint == 3) {
						Enemy* Slime = generateEnemy3(Knight.getbaselevel(), Knight.getmaxhealth(), Knight.getattackPower(), Knight.getdefence(), Knight.getlevel(), Knight.getlives());
					}
					else if (areachoiceint == 4) {
						Enemy* Slime = generateEnemy4(Knight.getbaselevel(), Knight.getmaxhealth(), Knight.getattackPower(), Knight.getdefence(), Knight.getlevel(), Knight.getlives());
					}
					else if (areachoiceint == 5) {
						Enemy* Slime = generateEnemy5(Knight.getbaselevel(), Knight.getmaxhealth(), Knight.getattackPower(), Knight.getdefence(), Knight.getlevel(), Knight.getlives());
					}
					int enemyrandommessage = 0;
					enemyrandommessage = r1() % 5;
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
							x = r1() % 5 + 1;
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
						int treasure;
						treasure = r1() % 99 + 1;
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
							int legend;
							legend = r1() % 3;
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
						int treasure;
						treasure = r1() % 99 + 1;
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
							int legend;
							legend = r1() % 3;
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
					Knight.Goldloom += r1() % 16 + 10;
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
						Enemy* Slime = generateEnemy(Knight.getbaselevel(), Knight.getmaxhealth(), Knight.getattackPower(), Knight.getdefence(), Knight.getlevel(), Knight.getlives());
					}
					else if (areachoiceint == 2) {
						Enemy* Slime = generateEnemy2(Knight.getbaselevel(), Knight.getmaxhealth(), Knight.getattackPower(), Knight.getdefence(), Knight.getlevel(), Knight.getlives());
					}
					else if (areachoiceint == 3) {
						Enemy* Slime = generateEnemy3(Knight.getbaselevel(), Knight.getmaxhealth(), Knight.getattackPower(), Knight.getdefence(), Knight.getlevel(), Knight.getlives());
					}
					else if (areachoiceint == 4) {
						Enemy* Slime = generateEnemy4(Knight.getbaselevel(), Knight.getmaxhealth(), Knight.getattackPower(), Knight.getdefence(), Knight.getlevel(), Knight.getlives());
					}
					else if (areachoiceint == 5) {
						Enemy* Slime = generateEnemy5(Knight.getbaselevel(), Knight.getmaxhealth(), Knight.getattackPower(), Knight.getdefence(), Knight.getlevel(), Knight.getlives());
					}
					cout << "You are now level " << Knight.getbaselevel() << "." << endl;
					if (Knight.getbaselevel() == 50) {
						cout << "You can now join a faction! Which faction would you like to join?" << endl;
						cout << "-Shadowborn Syndicate-" << endl;
						cout << "-Emberfall Covenant-" << endl;
						cout << "-Celestial Vanguard-" << endl;
						cout << "-Ironclad Dominion-" << endl;
						cin >> ws;
						getline(cin, factionchoice);
						if (factionchoice == "1" || factionchoice == "Shadowborn Syndicate"|| factionchoice == "Shadowborn syndicate"|| factionchoice == "shadowborn syndicate"|| factionchoice == "shadowborn Syndicate") {
							cout << "You chose the Shadowborn Syndicate." << endl;
							factionchoiceint = 1;
						}
						else if (factionchoice == "2" || factionchoice == "emberfall covenant"|| factionchoice == "Emberfall covenant"|| factionchoice == "emberfall Covenant"|| factionchoice == "Emberfall Covenant") {
							cout << "You chose the Emberfall Covenant!" << endl;
							factionchoiceint = 2;
						}
						else if (factionchoice == "3" || factionchoice == "Celestial Vanguard"|| factionchoice == "celestial Vanguard"|| factionchoice == "Celestial vanguard"|| factionchoice == "celestial vanguard") {
							cout << "You chose the Celestial Vanguard!" << endl;
							factionchoiceint = 3;
						}
						else if (factionchoice == "4" || factionchoice == "Ironclad Dominion"|| factionchoice == "Ironclad dominion"|| factionchoice == "ironclad Dominion"|| factionchoice == "ironclad dominion") {
							cout << "You chose the Ironclad Cominion." << endl;
							factionchoiceint = 4;
						}
					}
					int enemyrandommessage;
					enemyrandommessage = r1() % 5;
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
					item = r1() % 100 + 1;
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
			deathmessage = r1() % 5 + 1;
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
				cout << "-Class = Soulweaver-" << endl;
			}
			else if (Knight.getclass() == 4) {
				cout << "-Class = Warforged Engineer-" << endl;
			}
			else if (Knight.getclass() == 5) {
				cout << "-Class = Dreadnought-" << endl;
			}
			else if (Knight.getclass() == 6) {
				cout << "-Class = Trickster-" << endl;
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
			cout << Slime->getlives();
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