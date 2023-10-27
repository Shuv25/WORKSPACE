class human:
    def __init__(self):
        print("human class constractor is called")
        self.name = input("Enter your name:")


class emplyoee(human):
    def __init__(self):
        print("employee class constractor is called")
        self.designation = input("Enter your designation:")


class manager(emplyoee):
    def display(self):
        print("manager constructor is called")
        self.salary = int(input("Enter salary:"))


m1 = manager()
m1.display()
