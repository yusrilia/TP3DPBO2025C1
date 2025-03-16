from Software import Software
class OperatingSystem(Software):
    def __init__(self, name, version, architecture, kernel_type):
        super().__init__(name, version)
        self.architecture = architecture
        self.kernel_type = kernel_type