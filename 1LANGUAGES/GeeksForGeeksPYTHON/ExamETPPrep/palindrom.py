str = input("Enter a string:")

str2 = ""

i = len(str)-1

while (i >= 0):
    str2 += str[i]
    i -= 1

if (str == str2):
    print("Palindrom")
else:
    print("Not Palindrom")
