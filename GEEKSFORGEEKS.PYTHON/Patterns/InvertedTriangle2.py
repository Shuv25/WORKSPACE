n=int(input("Enter a number:"))
for i in range(n,0,-1):
    for k in range(1,(n+1)-i):
        print(" ",end=" ")
    for j in range(1,i+1):
        print("*",end=" ")
    print("\n")