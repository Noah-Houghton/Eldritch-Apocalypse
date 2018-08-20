#ifndef FACTION_H
#define FACTION_H

enum Race { Human = 0; Orc = 1 };

enum Alignment { Good = 0; Neutral = 1; Evil = 2 };

class Faction {
	char* name;
	std::list<Race> races;
	Alignment alignment;
	std::list<Faction&> alliedFactions;
	std::list<Faction&> enemyFactions;
};



#endif
