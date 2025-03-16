#pragma once
#include <iostream>
#include <vector>
using namespace std;

#include "Software.cpp"
class Application : public Software {
    private:
        string category;
        string license;
    
    public:
        Application(string n, string v, string cat, string lic)
            : Software(n, v), category(cat), license(lic) {}
    
        // Getters
        string getCategory() const { return category; }
        string getLicense() const { return license; }

    
        // Setters
        void setCategory(string cat) { category = cat; }
        void setLicense(string lic) { license = lic; }
    };