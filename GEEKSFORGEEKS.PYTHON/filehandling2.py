file = open(
    "C:\\Users\hp\\Documents\\GitHub\\WORKSPACE\\GEEKSFORGEEKS.PYTHON\\record.txt", 'a')

for i in range(1):
    bno = int(input("Enter book number:"))
    bn = input("Enter book name:")
    author = input("Enter author name:")
    price = int(input("Enter the price of book:"))
    add = str(bno)+","+bn+","+author+","+str(price)+"\n"
    file.write(add)
    print("\n")

file.close()
