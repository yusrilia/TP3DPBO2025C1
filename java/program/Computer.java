import java.util.ArrayList;
import java.util.List;

public class Computer {
    private String type;
    private OperatingSystem os;
    private Memory memory;
    private List<HardDrive> hardDrives;  
    private List<Application> applications;

    // Constructor
    public Computer(String type, OperatingSystem os, Memory memory) {
        this.type = type;
        this.os = os;
        this.memory = memory;
        this.hardDrives = new ArrayList<>();
        this.applications = new ArrayList<>();
    }

    // Add & Remove Hard Drives
    public void addHardDrive(HardDrive hd) {
        hardDrives.add(hd);
    }

    public void removeHardDrive(String name) {
        hardDrives.removeIf(hd -> hd.getName().equals(name));
    }

    // Add & Remove Applications
    public void addApplication(Application app) {
        applications.add(app);
    }

    public void removeApplication(String name) {
        applications.removeIf(app -> app.getName().equals(name));
    }

    // Getters
    public String getType() {
        return type;
    }

    public OperatingSystem getOS() {
        return os;
    }

    public Memory getMemory() {
        return memory;
    }

    public List<HardDrive> getHardDrives() {
        return hardDrives;
    }

    public List<Application> getApplications() {
        return applications;
    }

    // Setters
    public void setType(String type) {
        this.type = type;
    }

    public void setOS(OperatingSystem os) {
        this.os = os;
    }

    public void setMemory(Memory memory) {
        this.memory = memory;
    }

    
    public void printInfo() {
        System.out.println("Computer Type: " + type);
        System.out.println("OS: " + os.getName());
        System.out.println("Memory: " + memory.getSize() + "GB");

        System.out.println("Hard Drives:");
        for (HardDrive hd : hardDrives) {
            System.out.println(" - " + hd.getName() + " (" + hd.getCapacity() + " GB)");
        }

        System.out.println("Applications:");
        for (Application app : applications) {
            System.out.println(" - " + app.getName() + " (" + app.getCategory() + ")");
        }
        System.out.println("~.~.~\n");
    }
}
