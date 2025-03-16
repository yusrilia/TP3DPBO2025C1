class Storage:
    def __init__(self, capacity, type_):
        self.capacity = capacity
        self.type = type_

    def get_capacity(self):
        return self.capacity

    def get_type(self):
        return self.type
