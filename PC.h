#include <stdlib.h>
#include <stdio.h>
#include <vector>
#include <iostream>

#include "Item.h"
#include "Room.h"


using namespace std;

class PC{
public:
    PC();
    PC(Room* start_room);
    ~PC();
    string getName();
    string getDescrtiption();
    vector<Item> getInventory();
    Room* getCurrentRoom();
    vector<string> getJournal();
protected:
    string name;
    string description;
    vector<Item> inventory;
    Room* current_room;
    vector<string> journal;
};