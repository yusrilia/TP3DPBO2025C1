from Storage import Storage
from Hardware import Hardware
class HardDrive(Storage, Hardware):
    def __init__(self, name, price, warranty_period, brand, capacity, type_, cache):
        Storage.__init__(self, capacity, type_)
        Hardware.__init__(self, name, price, warranty_period, brand)
        self.cache = cache