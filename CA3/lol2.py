# try:
#     file = open(
#         "C:\\Users\hp\\Documents\\GitHub\\WORKSPACE\\GEEKSFORGEEKS.PYTHON\\fh10.txt", "r")
#     str = file.read()
#     print(str)
#     file.close()
# except FileNotFoundError:
#     print("Please provide a correct file")

# string1 = "abcdef"
# string2 = "cbddef"
# new_string = ""

# for i in range(len(string1)):
#     if string1[i] == string2[i]:
#         new_string += string1[i]

# print(new_string)

# lst = []
# n = int(input("Enter the number of elements: "))
# for i in range(n):
#     lst.append(int(input("Enter element " + str(i+1) + ": ")))

# # Swap values at odd positive and even positive positions without using built-in functions
# for i in range(len(lst)-1):
#     if i % 2 == 0 and lst[i] > 0 and lst[i+1] > 0:
#         temp = lst[i]
#         lst[i] = lst[i+1]
#         lst[i+1] = temp

# # Print the modified list
# print("The modified list is:", lst)

# import random
# numbers = {2, 3, 5, 7, 10, 11, 13}

# max_prime = None
# min_prime = None

# for num in numbers:
#     if num < 2:
#         continue
#     is_prime = True
#     for i in range(2, int(num**0.5) + 1):
#         if num % i == 0:
#             is_prime = False
#             break
#     if is_prime:
#         if max_prime is None or num > max_prime:
#             max_prime = num
#         if min_prime is None or num < min_prime:
#             min_prime = num

# if max_prime is None or min_prime is None:
#     print("There are no prime numbers in the set.")
# else:
#     print("The maximum prime number is:", max_prime)
#     print("The minimum prime number is:", min_prime)

# Open the source file for reading
# with open('source_file.txt', 'r') as source_file:
#     # Read the content of the source file
#     content = source_file.read()

# # Open the destination file for writing
# with open('destination_file.txt', 'w') as dest_file:
#     # Write the content of the source file to the destination file
#     dest_file.write(content)

# # Get the size of the source file
# source_size = os.path.getsize('source_file.txt')

# # Get the size of the destination file
# dest_size = os.path.getsize('destination_file.txt')

# # Print the sizes of both files
# print("Source file size:", source_size, "bytes")
# print("Destination file size:", dest_size, "bytes")

# # Define a nested list of student names and grades
# students = [
#     ['Alice', 89],
#     ['Bob', 92],
#     ['Charlie', 78],
#     ['David', 88],
#     ['Eve', 94],
#     ['Frank', 83],
#     ['Grace', 76],
#     ['Henry', 85],
#     ['Ivy', 90],
#     ['Jack', 81]
# ]

# # Sort the nested list by grade (second element in each sublist)
# students.sort(key=lambda x: x[1])

# # Find the second lowest grade
# second_lowest_grade = None
# for student in students:
#     if second_lowest_grade is None or student[1] > second_lowest_grade:
#         second_lowest_grade = student[1]
#         break

# # Find all students with the second lowest grade
# second_lowest_students = []
# for student in students:
#     if student[1] == second_lowest_grade:
#         second_lowest_students.append(student[0])

# # Print the second lowest grade and the students who received it
# print("Second lowest grade:", second_lowest_grade)
# print("Students with the second lowest grade:")
# for student in second_lowest_students:
#     print(student)


import random
n = 100
random_numbers = []

for i in range(10):
    random_numbers.append(random.randint(1, n))

print(random_numbers)
