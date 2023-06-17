file = open(
    "C:\\Users\hp\\Documents\\GitHub\\WORKSPACE\\GEEKSFORGEEKS.PYTHON\\fh1.txt", 'r')

l = file.read()

print(l)

count = 0
for i in l:
    if (i == 'a'):
        count += 1

print(count)

print(l)
