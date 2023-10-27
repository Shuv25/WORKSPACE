class employee:
    def __init__(self, name, age):
        self.name = name
        self.age = age

    def display(self):
        print(f"Employee name is {self.name} and age is {self.age}")


e1 = employee("Shuv", 22)
print(e1.name)  # accssing attributes
e1.name = "Sourav"  # updating attributes
print(e1.name)
e1.display()  # accssing methods of class
