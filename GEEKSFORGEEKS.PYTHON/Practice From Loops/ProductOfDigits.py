n=int(input("Enter a number:"))
i=1
while(n) :
    j=n%10
    i=i*j
    n=n//10
print("The product of given digit is:",i)
