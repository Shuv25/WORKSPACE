n=int(input("Enter a number to print *:"))
for i in range(1,n+1):
    for k in range(1,(n+1)-i):
        print("  ",end="")
    for j in range(1,i+1):
        print("*",end=" ")
    print("\n")


