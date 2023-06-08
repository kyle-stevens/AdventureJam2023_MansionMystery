#include <stdlib.h>
#include <stdio.h>
#include <vector>
#include <iostream>

#include "Room.h"


using namespace std;

class PC{
public:

    enum directions {
        North=0,
        East=1,
        South=2,
        West=3,
        Up=4,
        Down=5
    };
    PC();
    PC(Room* start_room);
    ~PC();
    string getName();
    string getDescrtiption();
    vector<Item*> getInventory();
    void addInventory(Item* item);
    Room* getCurrentRoom();
    void changeCurrentRoom(directions traverse);
    vector<string> getJournal();
protected:
    string name;
    string description;
    vector<Item*> inventory;
    Room* current_room;
    vector<string> journal;
};