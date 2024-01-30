class Employee:  # here class is a bluprint to make a object
    def __init__(self):  # here __init__ is a constractor for intilizing objects with attributes, tgis is an non parameterized contarctor and self is the variable that stores memory location of  current object
        self.salary = 10000000
        self.age = 22


e1 = Employee()  # here e1 is object of class employee , it's a real life entity

# here __dict__ is a special attribute to access the content of an object
print(e1.__dict__)
