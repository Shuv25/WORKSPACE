class animal:
    legs = 4


class dog(animal):
    sound = "bark"

    def display(self):
        print(f"dog has {self.legs} legs and it {self.sound}")


d1 = dog()
d1.display()
