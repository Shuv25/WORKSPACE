import pickle

file = open(
    "C:\\Users\hp\\Documents\\GitHub\\WORKSPACE\\GEEKSFORGEEKS.PYTHON\\fh4.txt", 'wb')

dict1 = {'name': 'Sourav', 'rollno': 25, 'Address': 'Sapatgram'}

pickle.dump(dict1, file)

file.close()
