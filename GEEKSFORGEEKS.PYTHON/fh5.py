import pickle

file = open(
    "C:\\Users\hp\\Documents\\GitHub\\WORKSPACE\\GEEKSFORGEEKS.PYTHON\\fh4.txt", 'rb')

dict1 = pickle.load(file)

print(dict1)
