l=[1,2,3,4,5,6,2,4,6]
l1=[]
for i in range(len(l)):
    for j in range(i+1,len(l)):
        if l[i]==l[j] and l[i] not in l1:
            l1.append(l[i])
print(l1)