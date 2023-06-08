#include "Item.h"

Item::Item() {
    this->name = "";
    this->description = "";
    this->weight = 0.0;
}

Item::Item(string i_name, string i_description, float i_weight) {
    this->name = i_name;
    this->description = i_description;
    this->weight = i_weight;
}

Item::~Item() {

}