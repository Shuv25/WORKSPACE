s=int(input("Enter a number to print *:"))
for i in range(s):
        for j in range(i+1):
            if j==0 or j==i or i==s-1:
                print('*',end=" ")
            else:
                print(" ", end=" ")
        print()