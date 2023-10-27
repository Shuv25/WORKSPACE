class employee:
    company_name = "Google"  # class variable

    def __init__(self, name, id):
        self.name = name
        self.id = id

    @classmethod  # it's a decorator inbuilt function in python for adding or modyfying the class
    def get_compa_name(cls):  # class method
        print(f"Company Name:{cls.company_name}")


e1 = employee("Shuv", 5)
e2 = employee("Sourav", 25)

print(employee.company_name)
print(e1.company_name)  # we can accsess throgh object also

# we can update aso

employee.company_name = "Facebook"

print(e1.company_name)

# if we want to change it throgh object then it will create a instance variable and wil not afect the class variable

e2.company_name = "Amazon"

print(e2.__dict__)

print(employee.company_name)

employee.get_compa_name()
