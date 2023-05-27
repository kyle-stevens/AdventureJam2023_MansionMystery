#include "PC.h"

PC::PC(){
    this->name = "You";
    this->description = "It's you, for better or worse...";
    this->inventory = vector<Item>();
    this->journal = vector<string>();
    this->current_room = nullptr;
}

PC::PC(Room* start_room){
    this->name = "You";
    this->description = "It's you, for better or worse...";
    this->inventory = vector<Item>();
    this->journal = vector<string>();
    this->current_room = start_room;
}

PC::~PC(){

}

string PC::getName(){
    return(this->name);
}

string PC::getDescrtiption(){
    return(this->description);
}

vector<Item> PC::getInventory(){
    return(this->inventory);
}

Room* PC::getCurrentRoom(){
    return(this->current_room);
}

vector<string> PC::getJournal(){
    return(this->journal);
}
