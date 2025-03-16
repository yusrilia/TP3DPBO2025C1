#include <iostream>
#include <vector>
using namespace std;

#include "Memory.cpp"
#include "HardDrive.cpp"
#include "OperatingSystem.cpp"
#include "Application.cpp"
#include "Computer.cpp"
#include <iostream>
#include <vector>
#include <algorithm>  

using namespace std;

int main() {
    // init os
    OperatingSystem os1("Windows 11", "10.0", "64-bit", "NT");
    OperatingSystem os2("Ubuntu", "22.04", "64-bit", "Linux");

    // init memory
    Memory mem1("Corsair RAM", 120.0, 3, "Corsair", 16, 3200);
    Memory mem2("Kingston RAM", 90.0, 2, "Kingston", 8, 2666);

    // create computers (Using array of objexts)
    Computer computers[2] = {
        Computer("Gaming PC", os1, mem1),
        Computer("Workstation", os2, mem2)
    };

    // init harddrives
    HardDrive hd1("Samsung 970 Evo", 120.50, 5, "Samsung", 1000, "NVMe", 256);
    HardDrive hd2("Seagate HDD", 90.0, 3, "Seagate", 2000, "HDD", 256);
    HardDrive hd3("WD Blue HDD", 80.0, 3, "Western Digital", 1000, "HDD", 128);

    // init apps
    Application app1("Photoshop", "2024", "Design", "Commercial");
    Application app2("VS Code", "1.80", "Development", "Free");
    Application app3("Spotify", "1.5", "Music", "Subscription");

    // add harddrives and apps to computers
    computers[0].addHardDrive(hd1);
    computers[1].addHardDrive(hd2);
    computers[0].addApplication(app1);
    computers[1].addApplication(app2);
        

    // print computer informations
    cout << "\n~.~.~ Computer Info ~.~.~\n";    
    for (int i = 0; i < 2; i++) {
        cout << "#" << i+1 << ": " << endl;
        computers[i].printInfo();
    }

    // Simulation: Adding & Removing Hard Drives and Applications
    cout << "\n~.~.~ Adding More Hard Drives & Applications ~.~.~\n";
    computers[0].addHardDrive(hd3);
    computers[1].addApplication(app3);

    cout << "Added WD Blue HDD to Gaming PC.\n";
    cout << "Added Spotify to Workstation.\n";


    cout << "\n~.~.~ Removing Hard Drives & Applications ~.~.~\n";
    computers[0].removeHardDrive("Samsung SSD");
    computers[1].removeApplication("VS Code");

    cout << "Removed Samsung SSD from Gaming PC.\n";
    cout << "Removed VS Code from Workstation.\n";

    cout << "\n~.~.~ Updated Computer Info ~.~.~\n";
    for (int i = 0; i < 2; i++) {
        cout << "#" << i+1 << ": " << endl;
        computers[i].printInfo();
    }

    return 0;
}
