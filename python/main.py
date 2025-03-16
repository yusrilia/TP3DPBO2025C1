from Computer import Computer
from OperatingSystem import OperatingSystem
from Memory import Memory
from HardDrive import HardDrive
from Application import Application


# Initialize OS
os1 = OperatingSystem("Windows 11", "10.0", "64-bit", "NT")
os2 = OperatingSystem("Ubuntu", "22.04", "64-bit", "Linux")

# Initialize Memory
mem1 = Memory("Corsair RAM", 120.0, 3, "Corsair", 16, 3200)
mem2 = Memory("Kingston RAM", 90.0, 2, "Kingston", 8, 2666)

# Create Computers
computers = [
    Computer("Gaming PC", os1, mem1),
    Computer("Workstation", os2, mem2)
]

# Initialize Hard Drives
hd1 = HardDrive("Samsung 970 Evo", 120.50, 5, "Samsung", "1TB", "NVMe", 256)
hd2 = HardDrive("Seagate HDD", 90.0, 3, "Seagate", "2TB", "HDD", 256)
hd3 = HardDrive("WD Blue HDD", 80.0, 3, "Western Digital", "1TB", "HDD", 128)

# Initialize Applications
app1 = Application("Photoshop", "2024", "Design", "Commercial")
app2 = Application("VS Code", "1.80", "Development", "Free")
app3 = Application("Spotify", "1.5", "Music", "Subscription")

# Add Hard Drives and Applications
computers[0].add_hard_drive(hd1)
computers[1].add_hard_drive(hd2)
computers[0].add_application(app1)
computers[1].add_application(app2)

# Print Computer Info
for comp in computers:
    comp.print_info()

# Simulation of Adding/Removing
print("\n~.~ Adding More Hard Drives & Applications ~.~")
computers[0].add_hard_drive(hd3)
computers[1].add_application(app3)

print("\n~.~ Removing Hard Drives & Applications ~.~")
computers[0].remove_hard_drive("Samsung 970 Evo")
computers[1].remove_application("VS Code")

# Print Updated Info
for comp in computers:
    comp.print_info()