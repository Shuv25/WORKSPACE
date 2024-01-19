n=int(input("Enter a number to print table:"))
print("The table of",n,"is:",end=" ")
for i in range(1,11):
    print(i*n,end=" ")
