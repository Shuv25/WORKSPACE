class student:
    def __init__(self, name, marks):
        self.name = name
        self.marks = marks

    def display(self):
        print(self.name, self.marks, self.age)

    def changedata(self):
        self.name = "Raj"
        self.age = 20

    def changedata2(self):
        self.name = input("Enter name:")
        self.marks = input("Enter Marks:")
        self.age = input("Enter age:")


s1 = student("Shuv", 695)
s2 = student("Sourav", 696)

print(s1.__dict__)
print(s2.__dict__)

# outside of tye class

s1.age = 22
s2.age = 22

print(s1.__dict__)
print(s2.__dict__)

del s2.age

print(s2.__dict__)

s1.display()

s2.changedata()

s2.display()

s1.changedata2()

s1.display()
