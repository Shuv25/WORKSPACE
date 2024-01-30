n=int(input("Enter a number:"))
if n==1:
    print("1")
j=1
for i in range(1,n+1):
    j=j*i
print("The factorial of given nunber is:",j,end="") 