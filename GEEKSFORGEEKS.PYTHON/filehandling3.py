file = open(
    "C:\\Users\hp\\Documents\\GitHub\\WORKSPACE\\GEEKSFORGEEKS.PYTHON\\t2.txt", 'a')

for i in range(3):
    name = input("Enter your name:")
    file.write(name)
    file.write('\n')

file.close()
print("Data Saved Successfully")

print("Data that you have entered:")

file2 = open(
    "C:\\Users\hp\\Documents\\GitHub\\WORKSPACE\\GEEKSFORGEEKS.PYTHON\\t2.txt", 'r')
print(file2.read())
file2.close()
