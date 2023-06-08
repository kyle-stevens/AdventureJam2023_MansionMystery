#include "NPC.h"

NPC::NPC(){

}

NPC::NPC(
        string npc_name, 
        string npc_description, 
        string npc_quest_item, 
        bool npc_quest_complete,
        Item* npc_quest_reward,
        vector<string> npc_dialogue){
            this->name = npc_name;
            this->description = npc_description;
            this->quest_item = npc_quest_item;
            this->quest_complete = npc_quest_complete;
            this->quest_reward = npc_quest_reward;
            this->dialogue = npc_dialogue;
            this->inventory = vector<Item*>();
        }

NPC::~NPC(){

}

string NPC::talk(){
    return(this->dialogue.at(0));
}

Item* NPC::give(Item* item){
    this->inventory.push_back(item);
    if(this->quest_item == item->name){
        return(this->quest_reward);
    }
    return(nullptr);
}