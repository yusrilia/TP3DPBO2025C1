#pragma once
#include <iostream>
#include <vector>
using namespace std;

class Software {
    protected:
        string name;
        string version;
    
    public:
        Software(string n, string v) : name(n), version(v) {}
    
        // Getters
        string getName() const { return name; }
        string getVersion() const { return version; }

    
        // Setters
        void setName(string n) { name = n; }
        void setVersion(string v) { version = v; }
    };