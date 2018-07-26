# Application Specs

## Resources

Resources.py contains the code necessary to build the resources loaded into the full application.
Resources have:
* a name
* a maximum value
* a current value
* a passive change value

Resources include:
* population
* food
* water
* building materials
* arcane materials
* wealth
* influence
* prestige
* despair
* loyalty
* readiness

## Settlements

Settlements.py contains all code which define Settlements, their actions, and interactions between them.

Settlements have:
* a name
* an x/y location on the world map
* a set of resources
* a z difficulty (e.g. rough terrain, special equipment needed, etc)
* an affinity (player/enemy/neutral)
* reputation(s)

## Improvements

Improvements.py contains all code defining buildings and other upgrades which can be purchased by Settlements.

Improvements have:
* a name
* flavor text
* a description
* a build cost
* a labor cost (with x turn duration)
* a build effect
* a passive effect
* prerequisites
* upgrades
* a maintenance cost
