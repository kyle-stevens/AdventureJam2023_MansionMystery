#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Item{
public:
    Item();
    Item(
        string i_name, 
        string i_description, 
        float i_weight);
    ~Item();
    string name;
    string description;
    float weight;
};