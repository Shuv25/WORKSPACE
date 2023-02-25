s=input()
l="".join(map(str,s))
l1=[]
count=0
for i in range(len(l)):
    for j in range(i+1,len(l)):
        if l[i]==l[j] and l[i] not in l1:
            l1.append(l[i])
            count+=1
print("".join(map(str,l1)))
print(count)