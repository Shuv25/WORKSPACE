l1=[i for i in range(21) if i%2==0]
print(l1)
l2=[i for i in range(21) if i%2!=0]
print(l2)
#---------------------------------------------
n=int(input("Enter the number:"))
def smallerNumber(n):
    l=[i for i in range(n)]
    print(l)
print("All the smaller numbers than",n,"is:",end=" ")
smallerNumber(n)
#-----------------------------------------------
n=int(input("Enter the number:"))
def oddEvenNumbers(n):
    l=[i for i in range(n) if i%2==0]
    print(l)

    l1=[i for i in range(n) if i%2!=0]
    print(l1)
print("The odd,even numbers less than",n,"is:",end=" ")
oddEvenNumbers(n)
#--------------------------------------------------------------------------

