#include <stdlib.h>
#include <stdio.h>
#include <vector>
#include <iostream>
#include "Room.h"

using namespace std;

class Map{
public:
    Map();
    Map(
        Room* entry
        );
    ~Map();
protected:
    Room* entry;
};