sum=0
i=-1
while(True):
    n=int(input("Enter numbers :"))
    sum=sum+n
    i=i+1
    if n==0:
        break
print("The sum of all numbers is:",sum)
print("The avg so all numbers is:",sum/i)