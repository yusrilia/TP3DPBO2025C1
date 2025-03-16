#pragma once
#include <iostream>
#include <vector>
using namespace std;
#include "Hardware.cpp"

class Memory : public Hardware {
    private:
        int size;  // Kapasitas (GB)
        int speed; // Kecepatan (MHz)
    
    public:
        Memory(string n, float p, int w, string b, int sz, int spd)
            : Hardware(n, p, w, b), size(sz), speed(spd) {}
    
        // Getters
        int getSize() const { return size; }
        int getSpeed() const { return speed; }
    
        // Setters
        void setSize(int sz) { size = sz; }
        void setSpeed(int spd) { speed = spd; }
    };