#pragma once
#include <vector>
#include <algorithm>

#include "OperatingSystem.cpp"
#include "Memory.cpp"
#include "HardDrive.cpp"
#include "Application.cpp"

using namespace std;

class Computer {
private:
    string type;
    OperatingSystem os;
    Memory mem;
    vector<HardDrive> hardDrives;  // Menggunakan vector untuk banyak hard drive
    vector<Application> applications;

    public:
    // Constructor with references to avoid unnecessary copies
    Computer(const string& type, const OperatingSystem& os, const Memory& mem)
        : type(type), os(os), mem(mem) {}  // Initialize members

    // Add functions to handle adding/removing hard drives and applications
    void addHardDrive(const HardDrive& hd) { hardDrives.push_back(hd); }
    void removeHardDrive(const string& name) {
        hardDrives.erase(remove_if(hardDrives.begin(), hardDrives.end(),
            [&](const HardDrive& hd) { return hd.getName() == name; }),
            hardDrives.end());
    }

    void addApplication(const Application& app) { applications.push_back(app); }
    void removeApplication(const string& name) {
        applications.erase(remove_if(applications.begin(), applications.end(),
            [&](const Application& app) { return app.getName() == name; }),
            applications.end());
    }

    // Getters
    const string& getType() const { return type; }
    const OperatingSystem& getOS() const { return os; }
    const Memory& getMemory() const { return mem; }
    const vector<HardDrive>& getHardDrives() const { return hardDrives; }
    const vector<Application>& getApplications() const { return applications; }


    // Setter
    void setType(string t) { type = t; }
    void setOS(OperatingSystem o) { os = o; }
    void setMemory(Memory m) { mem = m; }

    void printInfo() {
        cout << "Computer Type: " << type << endl;
        cout << "OS: " << os.getName() << endl;
        cout << "Memory: " << mem.getSize() << "GB" << endl;

        cout << "Hard Drives:" << endl;
        for (const auto& hd : hardDrives) {
            cout << " - " << hd.getName() << " (" << hd.getCapacity() << " GB)" << endl;
        }

        cout << "Applications:" << endl;
        for (const auto& app : applications) {
            cout << " - " << app.getName() << " (" << app.getCategory() << ")" << endl;
        }
        cout << "~.~.~\n" << endl;
    }
    
};
