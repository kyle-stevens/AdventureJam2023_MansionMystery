#include "Room.h"

Room::Room(string room_name) {
    this->name = room_name;
    this->description = nullptr;
    this->north = nullptr;
    this->south = nullptr;
    this->east = nullptr;
    this->west = nullptr;
    this->up = nullptr;
    this->down = nullptr;
    this->npc = nullptr;
    this->known = false;
    this->traversed = false;
}

Room::Room(
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
    bool room_traversed
) {
    this->name = room_name;
    this->description = room_description;
    this->north = room_north;
    this->south = room_south;
    this->east = room_east;
    this->west = room_west;
    this->up = room_up;
    this->down = room_down;
    this->npc = room_npc;
    this->known = room_known;
    this->traversed = room_traversed;
}

Room::~Room() {

}