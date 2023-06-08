#pragma once
#include <iostream>
#include <vector>
#include <string>
#include "Item.h"

using namespace std;

class NPC {
public:
    NPC();
    NPC(
        string npc_name,
        string npc_description,
        string npc_quest_item,
        bool npc_quest_complete,
        Item* npc_quest_reward,
        vector<string> npc_dialogue
    );
    ~NPC();
    string talk();
    Item* give(Item* item);

protected:
    string name;
    string description;
    string quest_item;
    bool quest_complete;
    Item* quest_reward;
    vector<string> dialogue;
    vector<Item*> inventory; // may not be needed
};