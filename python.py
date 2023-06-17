n = int(input("Enter an integer no:"))

l = []

while (n > 0):
    remainder = n % 10
    l.append(remainder)
    n = n//10

print(l)

l2 = []

for i in l:
    if (i == 0):
        l2.append("Zero")
    elif (i == 1):
        l2.append("One")
    elif (i == 2):
        l2.append("Two")
    elif (i == 3):
        l2.append("Three")
    elif (i == 4):
        l2.append("Four")
    elif (i == 5):
        l2.append("Five")
    elif (i == 6):
        l2.append("Six")
    elif (i == 7):
        l2.append("Seven")
    elif (i == 8):
        l2.append("Eight")
    elif (i == 9):
        l2.append("Nine")
    else:
        pass

l2 = reversed(l2)

T = tuple(l2)

print()
print(T)
