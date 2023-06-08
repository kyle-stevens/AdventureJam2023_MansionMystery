#include "PC.h"
#include <iostream>

#include <fstream>
#include <string>
#include <sstream>

using namespace std;

vector<Room*> rooms = vector<Room*>();

int main(){
    // PC* player = new PC();
    cout << rooms.size();
    string line;
    ifstream file("MAP.MAP");
    
    //Getting Room Names for Predclaration of Rooms
    vector<string> room_names = vector<string>();
    while(getline(file, line)){
        if (line == ""){
            continue;
        }
        if (line.substr(line.length()-2, line.length())== "=="){
            break;
        }
        room_names.push_back(line.substr(0, line.length()));
    }
    
    //Printing room Names for testing
    for(auto r : room_names){
        rooms.push_back(new Room(r));
    }

    cout << rooms.at(0);

    return 0;
}