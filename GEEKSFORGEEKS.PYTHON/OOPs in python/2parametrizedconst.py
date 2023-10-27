class employee:
    def __init__(self, salary, age):  # this is a parametrized constractor
        self.salary = salary
        self.age = age


e1 = employee(100000000, 22)
e2 = employee(200000000, 23)
print(e1.__dict__)
print(e2.__dict__)
