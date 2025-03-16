import java.util.ArrayList;
import java.util.List;

public class Main {
    public static void main(String[] args) {
        // Initialize OS
        OperatingSystem os1 = new OperatingSystem("Windows 11", "10.0", "64-bit", "NT");
        OperatingSystem os2 = new OperatingSystem("Ubuntu", "22.04", "64-bit", "Linux");

        // Initialize Memory
        Memory mem1 = new Memory("Corsair RAM", 120.0, 3, "Corsair", 16, 3200);
        Memory mem2 = new Memory("Kingston RAM", 90.0, 2, "Kingston", 8, 2666);

        // Create Computers (Array of Objects)
        Computer[] computers = {
            new Computer("Gaming PC", os1, mem1),
            new Computer("Workstation", os2, mem2)
        };

        // Initialize Hard Drives
        HardDrive hd1 = new HardDrive("Samsung 970 Evo", 120.50, 5, "Samsung", "1TB", "NVMe", 256);
        HardDrive hd2 = new HardDrive("Seagate HDD", 90.0, 3, "Seagate", "2TB", "HDD", 256);
        HardDrive hd3 = new HardDrive("WD Blue HDD", 80.0, 3, "Western Digital", "1TB", "HDD", 128);

        // Initialize Applications
        Application app1 = new Application("Photoshop", "2024", "Design", "Commercial");
        Application app2 = new Application("VS Code", "1.80", "Development", "Free");
        Application app3 = new Application("Spotify", "1.5", "Music", "Subscription");

        // Add Hard Drives & Applications
        computers[0].addHardDrive(hd1);
        computers[1].addHardDrive(hd2);
        computers[0].addApplication(app1);
        computers[1].addApplication(app2);

        // Print Initial Computer Info
        System.out.println("\n~.~.~ Computer Info ~.~.~");
        for (Computer comp : computers) {
            comp.printInfo();
        }

        // Simulation: Adding & Removing Hard Drives and Applications
        System.out.println("\n~.~.~ Adding More Hard Drives & Applications ~.~.~");
        computers[0].addHardDrive(hd3);
        computers[1].addApplication(app3);

        System.out.println("Added WD Blue HDD to Gaming PC.");
        System.out.println("Added Spotify to Workstation.");

        System.out.println("\n~.~.~ Removing Hard Drives & Applications ~.~.~");
        computers[0].removeHardDrive("Samsung 970 Evo");
        computers[1].removeApplication("VS Code");

        System.out.println("Removed Samsung 970 Evo from Gaming PC.");
        System.out.println("Removed VS Code from Workstation.");

        // Print Updated Computer Info
        System.out.println("\n~.~.~ Updated Computer Details ~.~.~");
        for (Computer comp : computers) {
            comp.printInfo();
        }
    }
}
