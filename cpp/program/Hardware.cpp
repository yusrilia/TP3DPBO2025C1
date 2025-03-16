#pragma once
#include <iostream>
#include <vector>
using namespace std;

class Hardware {
    protected:
        string name;
        float price;
        int warrantyPeriod; // dalam tahun
        string brand;
    
    public:
        Hardware(string n, float p, int w, string b) 
            : name(n), price(p), warrantyPeriod(w), brand(b) {}
    
        // Getters
        string getName() const { return name; } // Add const
        double getPrice() const { return price; }
        int getWarrantyPeriod() const { return warrantyPeriod; }
        string getBrand() const { return brand; }

    
        // Setters
        void setName(string n) { name = n; }
        void setPrice(float p) { price = p; }
        void setWarrantyPeriod(int w) { warrantyPeriod = w; }
        void setBrand(string b) { brand = b; }
    };