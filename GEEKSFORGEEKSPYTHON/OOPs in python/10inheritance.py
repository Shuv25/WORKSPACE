class employee:
    bonus = 10000

    def display(self):
        print("This is a employee class")


class manager(employee):  # inheriting the employee class
    bonus1 = 15000

    def show(self):
        print("This is a manager class")


e1 = employee()
m1 = manager()

e1.display()
m1.show()

print(e1.bonus)
print(m1.bonus1)

m1.display()
print(m1.bonus)
