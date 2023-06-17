file = open(
    "C:/Users/hp/Documents/GitHub/WORKSPACE/GEEKSFORGEEKS.PYTHON/exametp1.txt", "r")

str = file.read()
str2 = ""

for i in str:
    if (i == 'e'):
        str2 = str.replace('e', 'I')

print(str2)

file.close()
