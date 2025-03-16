class Computer:
    def __init__(self, type_, os, memory):
        self.type = type_
        self.os = os
        self.memory = memory
        self.hard_drives = []
        self.applications = []

    def add_hard_drive(self, hard_drive):
        self.hard_drives.append(hard_drive)

    def remove_hard_drive(self, name):
        self.hard_drives = [hd for hd in self.hard_drives if hd.get_name() != name]

    def add_application(self, application):
        self.applications.append(application)

    def remove_application(self, name):
        self.applications = [app for app in self.applications if app.get_name() != name]

    def print_info(self):
        print(f"\nComputer: {self.type}")
        print(f"OS: {self.os.get_name()}")
        print(f"Memory: {self.memory.get_size()}GB")

        print("Hard Drives:")
        for hd in self.hard_drives:
            print(f" - {hd.get_name()} ({hd.get_capacity()})")

        print("Applications:")
        for app in self.applications:
            print(f" - {app.get_name()} ({app.get_category()})")