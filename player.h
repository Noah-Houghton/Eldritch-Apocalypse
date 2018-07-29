#ifndef PLAYER_H
#define PLAYER_H
#include "faction.h"
#include "settlement.h"

class Player {
	Faction faction;
	char* name;
	int playerID;
};

enum Personality { Calm = 0; Aggressive = 1 };

class NPC : Player {
	int aggression;
	// may be useful for AI purposes later in development
	Personality personality;
};


#endif