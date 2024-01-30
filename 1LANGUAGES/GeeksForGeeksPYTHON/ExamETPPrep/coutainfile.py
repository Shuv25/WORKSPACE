
data = open(
    "C:/Users/hp/Documents/GitHub/WORKSPACE/GEEKSFORGEEKS.PYTHON/exametp1.txt", "w")
data.write("Hi there my name is sourav sutradhar")
data.close()

data2 = open(
    "C:/Users/hp/Documents/GitHub/WORKSPACE/GEEKSFORGEEKS.PYTHON/exametp1.txt", "r")
str = data2.read()
print(str)

count = 0
for i in str:
    if (i == 'a'):
        count += 1

print(count)

data2.close()
