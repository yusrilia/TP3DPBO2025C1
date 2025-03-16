from Hardware import Hardware
class Memory(Hardware):
    def __init__(self, name, price, warranty_period, brand, size, speed):
        super().__init__(name, price, warranty_period, brand)
        self.size = size
        self.speed = speed

    def get_size(self):
        return self.size
