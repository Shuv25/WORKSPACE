n=int(input("Enter a number:"))
i=0
while(n):
    j=n%10
    i=i+j
    n=n//10
print("The sum of given digit is:",i)