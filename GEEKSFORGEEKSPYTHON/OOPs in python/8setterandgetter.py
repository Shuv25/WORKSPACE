class employee:
    def setName(self, name):  # setter method
        self.name = name

    def getName(self):
        print(f"The name is {self.name}")  # getter method


e1 = employee()
e2 = employee()

e1.setName(input("Enter the name:"))
e2.setName(input("Enter the name:"))

e1.getName()
e2.getName()
