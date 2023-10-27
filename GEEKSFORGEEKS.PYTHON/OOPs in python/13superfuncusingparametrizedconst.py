class computer:
    def __init__(self, ram, rom):
        self.ram = ram
        self.rom = rom
        print("Computer class constructor is called")


class mobile(computer):
    def __init__(self, ram, rom, model):
        super().__init__(ram, rom)
        self.model = model
        print("Mobile class constructor is called")


apple = mobile(32, 512, "Iphone15")
print(apple.__dict__)
