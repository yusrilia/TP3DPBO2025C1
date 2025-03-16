#pragma once

#include <iostream>
#include <vector>
using namespace std;

class Storage {
protected:
    int capacity;     // Kapasitas (GB)
    string type;      // Jenis storage 

public:
    Storage(int cap, string t) : capacity(cap), type(t) {}

    // Getter
    int getCapacity() const { return capacity; }  
    string getType() const { return type; }      

    // Setter
    void setCapacity(int cap) { capacity = cap; }
    void setType(string t) { type = t; }
};