from Software import Software

class Application(Software):
    def __init__(self, name, version, category, license_type):
        super().__init__(name, version)
        self.category = category
        self.license_type = license_type

    def get_category(self):
        return self.category
