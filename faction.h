#ifndef FACTION_H
#define FACTION_H

enum Alignment { Good = 0; Neutral = 1; Evil = 2 };

// determines at a high level whether a faction is Player, NPC, or an Enemy faction
enum Controller { Player = 0; NPC = 1; Enemy = 2 };


class Faction {
	char* name;
	Alignment alignment;
	Controller controller;
	std::list<Faction&> alliedFactions;
	std::list<Faction&> enemyFactions;
};



#endif
