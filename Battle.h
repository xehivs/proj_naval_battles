#ifndef PROJ_NAVAL_BATTLES_BATTLE_H
#define PROJ_NAVAL_BATTLES_BATTLE_H

#include <vector>
#include <iterator>
#include <string>
#include <fstream>

#include "Ship.h"

bool read(const string &file_name, Parameters tab[]);

void showParameters(Parameters tab[], int n);

using namespace std;

enum site {
    USA, JAPAN
};

struct whichShip {
    unsigned int typeOfShip;
    unsigned int numberOfShip;
};

class Enemy {
protected:
    site _site;
    vector<Destroyer> _destroyers;
    vector<Cruiser> _cruisers;
    vector<Battleship> _battleships;
    vector<AircraftCarrier> _aircraftCarriers;

public:
    Enemy(site s);

    whichShip drawShip();
    void showEnemy();

    void showShip(whichShip ship);
};

#endif //PROJ_NAVAL_BATTLES_BATTLE_H