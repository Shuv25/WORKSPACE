file1 = open(
    "C:/Users/hp/Documents/GitHub/WORKSPACE/GEEKSFORGEEKS.PYTHON/exametp2.txt", "w")
file1.write("Hellow There My Password is Lola@134")
file1.close()

file2 = open(
    "C:/Users/hp/Documents/GitHub/WORKSPACE/GEEKSFORGEEKS.PYTHON/exametp2.txt", "r")

str = file2.read()

count1 = 0
count2 = 0
for i in str:
    if ('A' <= i <= 'Z'):
        count1 += 1

for i in str:
    if ('0' <= i <= '9'):
        count2 += 1

print(count1)
print(count2)

file2.close()
