#include <iostream>
#include <vector>
using namespace std;

#include "Memory.cpp"
#include "HardDrive.cpp"
#include "OperatingSystem.cpp"
#include "Application.cpp"
#include "Computer.cpp"

int main() {
    // Create a Computer instance
    OperatingSystem os("Windows", "11", "64-bit", "NT");
    Memory mem("Corsair 16GB", 75.99, 3, "Corsair", 16, 3200);
    
    Computer myPC("Gaming", os, mem);

    // Adding Hard Drives
    cout << "Adding Hard Drives..." << endl;
    myPC.addHardDrive(HardDrive("Samsung 970 Evo", 120.50, 5, "Samsung", 1000, "NVMe", 256));
    myPC.addHardDrive(HardDrive("WD Blue HDD", 60.75, 3, "Western Digital", 2000, "HDD", 64));

    // Adding Applications
    cout << "Installing Applications..." << endl;
    myPC.addApplication(Application("Photoshop", "2023", "Graphics", "Paid"));
    myPC.addApplication(Application("VLC Media Player", "3.0.18", "Media", "Free"));

    // Display Computer Info
    cout << "\n--- Computer Information ---" << endl;
    cout << "Type: " << myPC.getType() << endl;
    cout << "OS: " << myPC.getOS().getName() << " " << myPC.getOS().getVersion() << endl;
    cout << "Memory: " << myPC.getMemory().getSize() << "GB, " << myPC.getMemory().getSpeed() << "MHz" << endl;

    // Display Hard Drives
    cout << "\nHard Drives:" << endl;
    for (const auto& hd : myPC.getHardDrives()) {
        cout << "- " << hd.getName() << " (" << hd.getCapacity() << "GB, " << hd.getType() << ", " << hd.getCache() << "MB Cache)" << endl;
    }

    // Display Applications
    cout << "\nApplications:" << endl;
    for (const auto& app : myPC.getApplications()) {
        cout << "- " << app.getName() << " (" << app.getCategory() << ", " << app.getLicense() << ")" << endl;
    }

    // Simulating Hard Drive Removal
    cout << "\nRemoving Hard Drive: WD Blue HDD..." << endl;
    myPC.removeHardDrive("WD Blue HDD");

    // Simulating Application Removal
    cout << "\nUninstalling Application: VLC Media Player..." << endl;
    myPC.removeApplication("VLC Media Player");

    // Display Updated List
    cout << "\n--- Updated Computer Information ---" << endl;
    cout << "\nHard Drives after removal:" << endl;
    for (const auto& hd : myPC.getHardDrives()) {
        cout << "- " << hd.getName() << " (" << hd.getCapacity() << "GB, " << hd.getType() << ", " << hd.getCache() << "MB Cache)" << endl;
    }

    cout << "\nApplications after removal:" << endl;
    for (const auto& app : myPC.getApplications()) {
        cout << "- " << app.getName() << " (" << app.getCategory() << ", " << app.getLicense() << ")" << endl;
    }

    return 0;
}
