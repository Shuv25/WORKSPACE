with open("C:\\Users\hp\\Documents\\GitHub\\WORKSPACE\\GEEKSFORGEEKS.PYTHON\\fh1.txt", 'r') as file:
    content = file.read()
    content = content.replace('e', 'I')

print(content)
