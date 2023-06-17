file1 = open(
    "C:/Users/hp/Documents/GitHub/WORKSPACE/GEEKSFORGEEKS.PYTHON/exametp4.txt", "w")

file1.write("IT IS UP TO US TO TAKE CARE OF OUR SURROUNDING. IT IS NOT POSSIBLE ONLY FOR THE GOVERNMENT TO TAKE CARE RESPONSIBILITY")

file1.close()

file2 = open(
    "C:/Users/hp/Documents/GitHub/WORKSPACE/GEEKSFORGEEKS.PYTHON/exametp4.txt", "r")

str = file2.read()

str2 = str.split(" ")


def county(str2):
    count = 0
    for i in str2:
        if (i == 'IS' or i == 'UP' or i == 'TO'):
            count += 1
    return count


print(county(str2))

file2.close()
