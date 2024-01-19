str = input("Enter a string:")

str2 = str[len(str)-1]

i = 1

while (i < len(str)-1):
    str2 += str[i]
    i += 1

str2 += str[0]

print(str2)
