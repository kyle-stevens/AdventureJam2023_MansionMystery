#include "Item.h"

Item::Item(){

}

Item::Item(string i_name, string i_description, float i_weight){
    this->name = i_name;
    this->description = i_description;
    this->weight = i_weight;
}

Item::~Item(){

}