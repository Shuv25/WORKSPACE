n=int(input("Enter a number:"))
j=0
if n==1 or n==0:
    j=1
for i in range(2,n):
    if n%i==0 :
        j=1
if j==1:
    print("It's not a prime no")
else:
    print("It's a prime no")