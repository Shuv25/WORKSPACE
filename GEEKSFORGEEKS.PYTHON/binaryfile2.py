import pickle

file1 = open(
    "C:\\Users\hp\\Documents\\GitHub\\WORKSPACE\\GEEKSFORGEEKS.PYTHON\\fhb2.txt", "wb")

dict1 = {1: 'a', 2: 'b', 3: 'c'}

pickle.dump(dict1, file1)

file1.close()

file2 = open(
    "C:\\Users\hp\\Documents\\GitHub\\WORKSPACE\\GEEKSFORGEEKS.PYTHON\\fhb2.txt", "rb")

dict2 = pickle.load(file2)

print(dict2)

file2.close()
