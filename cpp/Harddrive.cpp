#pragma once
#include <iostream>
#include <vector>
using namespace std;

#include "Hardware.cpp"
#include "Storage.cpp"

class HardDrive : public Storage, public Hardware {
    private:
        int cache;

    public:
        // Constructor
        HardDrive(string name, double price, int warranty, string brand, int capacity, string type, int cache)
            : Hardware(name, price, warranty, brand), Storage(capacity, type), cache(cache) {}
    
        // Getters (Make sure they are const)
        int getCache() const { return cache; }
        
        // Override Hardware & Storage getters as const
        string getName() const { return Hardware::getName(); }  // Fixes the issue
        double getPrice() const { return Hardware::getPrice(); }
        int getWarrantyPeriod() const { return Hardware::getWarrantyPeriod(); }
        string getBrand() const { return Hardware::getBrand(); }
        int getCapacity() const { return Storage::getCapacity(); }
        string getType() const { return Storage::getType(); }
    
    };
    