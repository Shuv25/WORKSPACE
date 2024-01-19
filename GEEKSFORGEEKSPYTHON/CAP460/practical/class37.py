n = int(input("Enter the no of element:"))
l = []

for i in range(n):
    l.append(input("Entre the element:"))

l2 = []
l3 = []

for i in l:
    if i.isnumeric():
        l2.append(int(i))
    else:
        l3.append(i)

print(l2)
print(l3)
