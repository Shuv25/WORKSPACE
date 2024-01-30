class computer:
    def __init__(self):
        self.ram = "32gb"
        self.rom = "512gb"
        print("Computer class costactor is called")


class mobile(computer):
    def __init__(self):
        super().__init__()
        self.model = "Iphone15"
        print("Mobile class costactor is called")


apple = mobile()
print(apple.__dict__)
