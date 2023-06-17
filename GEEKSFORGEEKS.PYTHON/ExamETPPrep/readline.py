file1 = open(
    "C:/Users/hp/Documents/GitHub/WORKSPACE/GEEKSFORGEEKS.PYTHON/exametp5.txt", "w")

file1.write("""A CLEAN ENVIRONMENT IS GOOD FOR OUR NECESSARY HEALTH.\nWE SHOULD CLEAN OUR ENVIRONMENT.\nEDUCATIONAL INSTITUTION SHOULD TAKE THE LEAD.""")

file1.close()

file2 = open(
    "C:/Users/hp/Documents/GitHub/WORKSPACE/GEEKSFORGEEKS.PYTHON/exametp5.txt", "r")

str = file2.readlines()


def display(str):
    for i in str:
        if (i[0] == 'A' or i[0] == 'E'):
            print(i)


display(str)

file2.close()
