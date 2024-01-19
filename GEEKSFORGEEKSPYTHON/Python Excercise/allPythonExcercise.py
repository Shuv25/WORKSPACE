#Exercise 1: Reverse each word of a string
str1=input("Write some text:")
splt=str1.split(" ")
rev=[i[::-1] for i in splt]
jn=" ".join(rev)
print(jn)

#Exercise 3: Remove items from a list while iterating
l=[i for i in range(1,100) if i%5==0]
print(len(l))
for i in range(len(l)-1,-1,-1):#this loop will run from 18 to -1 by decreasing order
    if l[i]>50:
        del l[i]
print(l)
#Exercise 5: Display all duplicate items from a list
l=[1,2,3,4,5,6,2,4,6]
l1=[]
for i in range(len(l)):
    for j in range(i+1,len(l)):
        if l[i]==l[j] and l[i] not in l1:
            l1.append(l[i])
print(l1)









