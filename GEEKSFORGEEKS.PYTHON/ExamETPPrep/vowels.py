file = open(
    "C:/Users/hp/Documents/GitHub/WORKSPACE/GEEKSFORGEEKS.PYTHON/exametp2.txt", "r")

str = file.read()

l = ['a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U']

count = 0

for i in str:
    if i in l:
        count += 1

print(count)
