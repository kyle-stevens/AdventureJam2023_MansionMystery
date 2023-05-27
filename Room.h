#include <iostream>
#include <vector>
#include <string>
#include "NPC.h"
#include "Item.h"

using namespace std;

class Room {
public:
    Room();
    Room(
        string room_name,
        string room_description,
        Room* room_north,
        Room* room_south,
        Room* room_east,
        Room* room_west,
        Room* room_up,
        Room* room_down,
        NPC* room_npc,
        bool room_known,
        bool room_traversed);
    ~Room();
protected:
    string name;
    string description;
    Room* north;
    Room* south;
    Room* east;
    Room* west;
    Room* up;
    Room* down;
    NPC* npc;
    bool known;
    bool traversed;

};