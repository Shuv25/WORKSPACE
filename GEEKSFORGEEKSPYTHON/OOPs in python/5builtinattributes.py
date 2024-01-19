class employee:
    "This is an employee class which contain details"

    def __init__(self, name, age):
        self.name = name
        self.age = age

    def details(self):
        print(f"The name of the employee is {self.name} and age is {self.age}")


e1 = employee("Shuv", 22)

print(employee.__doc__)  # to print the documention of the class
print(employee.__dict__)  # to print all the details of the class
print(employee.__name__)  # to print the name of the class
print(employee.__module__)  # it will show from where the class is imported

# to check if the object is instance of employee class
print(isinstance(e1, employee))
