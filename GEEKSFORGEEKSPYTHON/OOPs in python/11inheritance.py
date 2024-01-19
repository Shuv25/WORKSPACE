class father:
    pass

    def __init__(self):
        print("father constractor called")
        self.vechicle = "Car"


class son(father):
    pass


class son2(father):
    def __init__(self):
        print("son2 constractor called")
        self.vechicle = "Bike"


s = son()
print(s.__dict__)

s1 = son2()
print(s1.__dict__)
