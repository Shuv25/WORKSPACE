
n=int(input("Enter the first no:"))
m=int(input("Enter the 2nd no:"))  
for i in range(n,m+1):
    if i>1:
        for j in range(2,i):
            if (i%j)==0:
                break
        else:
            print(i,end=" ")