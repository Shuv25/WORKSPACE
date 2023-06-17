file1 = open(
    "C:/Users/hp/Documents/GitHub/WORKSPACE/GEEKSFORGEEKS.PYTHON/exametp3.txt", "w")

file1.write("Kaisa hein vai,")
file1.close()

file2 = open(
    "C:/Users/hp/Documents/GitHub/WORKSPACE/GEEKSFORGEEKS.PYTHON/exametp3.txt", "r")

str = file2.read()

print(str)
file2.close()

file3 = open(
    "C:/Users/hp/Documents/GitHub/WORKSPACE/GEEKSFORGEEKS.PYTHON/exametp3.txt", "a")

file3.write("Theek to ho na?")
file3.close()
