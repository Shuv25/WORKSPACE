file = open(
    "C:\\Users\hp\\Documents\\GitHub\\WORKSPACE\\GEEKSFORGEEKS.PYTHON\\fh8.txt", "w")

file.write("""Hello there how are\nyou guys""")

file.close()

file2 = open(
    "C:\\Users\hp\\Documents\\GitHub\\WORKSPACE\\GEEKSFORGEEKS.PYTHON\\fh8.txt", "r")

str = file2.read()

line = str.split("\n")

word = str.split()

print(len(line))

print(len(word))

print(len(str))
