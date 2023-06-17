d = {"A": 92, "B": 95, "C": 90, "D": 89, "E": 91}

d = dict(sorted(d.items(), key=lambda item: item[1]))
print()
print("In Ascending:", d)

d = dict(sorted(d.items(), key=lambda item: item[1], reverse=True))
print()
print("In Decending:", d)

d2 = {"F": 99}
d.update(d2)
print()
print("Adding new key:", d)

d3 = {"G": 98, "H": 100}

d4 = {}

for i in (d, d2, d3):
    d4.update(i)
print()
print("Adding three dictionaries:", d4)

print()
x = "B"
for i in d4:
    if (x == i):
        print("Yes it's present inside of the dictionary")

print()
for i in d4:
    print(i, ":", d4.get(i), end=",")

print()
print()

d5 = {}
for i in range(1, 6):
    d5[i] = i*i
print(d5)

print()
print()
d6 = {}
for i in range(1, 16):
    d6[i] = i*i
print(d6)

print()
print()

sum = 0
for i in d:
    sum += d[i]
print("The sum of all the numbers are:", sum)
