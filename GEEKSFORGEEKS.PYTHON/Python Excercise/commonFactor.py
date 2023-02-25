a= int(input("Enter the first number:"))
b=int(input("Enter the second number:"))
la=[i for i in range(1,a+1) if a%i==0]
print(la)
lb=[j for j in range(1,b+1) if b%j==0]
print(lb)
count=0
print("The common factors are:",end=" ")
for i in range(0,len(la)):
    for j in range(0,len(lb)):
        if la[i]==lb[j]:
            print(la[i])
            count+=1
print("Count of common factor is:",count,"times")
