# Python Program to Print Odd Numbers from 1 to N
 
num = int(input(" Please Enter any Maximum Number : "))
 
for number in range(1, num + 1):
    if(number % 2 != 0):
        print(number)