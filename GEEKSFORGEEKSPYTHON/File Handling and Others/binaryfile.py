file = open(
    "C:\\Users\hp\\Documents\\GitHub\\WORKSPACE\\GEEKSFORGEEKS.PYTHON\\fhb1.bin", "wb")
l = [5, 6, 7, 8, 9]

arr = bytes(l)

file.write(arr)

file.close()

file2 = open(
    "C:\\Users\hp\\Documents\\GitHub\\WORKSPACE\\GEEKSFORGEEKS.PYTHON\\fhb1.bin", "rb")
li = list(file2.read())

print(li)
file2.close()
