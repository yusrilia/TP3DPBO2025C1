class Hardware:
    def __init__(self, name, price, warranty_period, brand):
        self.name = name
        self.price = price
        self.warranty_period = warranty_period
        self.brand = brand

    def get_name(self):
        return self.name