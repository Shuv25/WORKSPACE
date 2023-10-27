class employee:
    def __init__(self, name, age):
        self.name = name
        self.age = age


e1 = employee("Shuv", 22)
e2 = employee("Sourav", 22)

print(getattr(e1, "name"))  # to  get the attributes of the object
print(e2.__dict__)
setattr(e2, "name", "Sutradhar")  # to set the attributes with new value
print(e2.__dict__)
delattr(e2, "age")  # to delete attributes
print(e2.__dict__)
print(hasattr(e2, "age"))  # to check if the attribute present or not
