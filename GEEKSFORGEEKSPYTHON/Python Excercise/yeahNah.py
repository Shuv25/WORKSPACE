Int=int(input("Enter the number:"))
l=[]
for i in range(1,Int+1):
    l.append(int(input()))
for n in l:
    if n>=1 and n<=10**9:
        sum=0
        prod=1
        for i in range(1,n+1):
            prod=prod*i
            sum=sum+i
            if prod%sum==0:
                print("Yeah")
            else:
                print("Nah")