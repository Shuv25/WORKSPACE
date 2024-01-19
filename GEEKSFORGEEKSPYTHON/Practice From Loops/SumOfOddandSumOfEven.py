n=int(input("Enter a odd number:"))
m=int(input("Enter a even number:"))
if n==0:
    print("Invalid")
Esum=0
Osum=0
for i in range(n,m+1):
        if i%2==0:
            Esum=Esum+i
        else:
            Osum=Osum+i
print("The sum of even numbers are:",Esum)
print("The sum of odd numbers are:",Osum)

            