#include "PC.h"

PC::PC() {
    this->name = "You";
    this->description = "It's you, for better or worse...";
    this->inventory = vector<Item*>();
    this->journal = vector<string>();
    this->current_room = nullptr;
}

PC::PC(Room* start_room) {
    this->name = "You";
    this->description = "It's you, for better or worse...";
    this->inventory = vector<Item*>();
    this->journal = vector<string>();
    this->current_room = start_room;
}

PC::~PC() {

}

string PC::getName() {
    return(this->name);
}

string PC::getDescrtiption() {
    return(this->description);
}

vector<Item*> PC::getInventory() {
    return(this->inventory);
}

void PC::addInventory(Item* item) {
    this->inventory.push_back(item);
}

Room* PC::getCurrentRoom() {
    return(this->current_room);
}

void PC::changeCurrentRoom(PC::directions traverse) {
    Room* new_room;
    switch (traverse) {
    case PC::directions::North:
        new_room = this->getCurrentRoom()->north;
        break;
    case PC::directions::East:
        new_room = this->getCurrentRoom()->east;
        break;
    case PC::directions::South:
        new_room = this->getCurrentRoom()->south;
        break;
    case PC::directions::West:
        new_room = this->getCurrentRoom()->west;
        break;
    case PC::directions::Up:
        new_room = this->getCurrentRoom()->up;
        break;
    case PC::directions::Down:
        new_room = this->getCurrentRoom()->down;
        break;
    default:
        new_room = nullptr;
        break;
    }

    if (new_room == nullptr) {
        cout << "There is no room in that direction." << endl;
        return;
    }

    if (new_room->known) {
        cout << "You move to the " << new_room->name << "." << endl;
    }
    else {
        cout << "You move to a new room." << endl;
        new_room->known = true;
    }

    new_room->traversed = true;
    this->current_room = new_room;

}

vector<string> PC::getJournal() {
    return(this->journal);
}
