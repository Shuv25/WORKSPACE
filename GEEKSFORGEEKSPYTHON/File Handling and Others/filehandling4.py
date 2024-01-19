f1 = open(
    "C:\\Users\hp\\Documents\\GitHub\\WORKSPACE\\GEEKSFORGEEKS.PYTHON\\record.txt", "r")
f2 = open("C:\\Users\hp\\Documents\\GitHub\\WORKSPACE\\GEEKSFORGEEKS.PYTHON\\backup_record.txt", "w")

str1 = " "

while str1:
    str1 = f1.readline()
    f2.write(str1)

f1.close()
f2.close()
