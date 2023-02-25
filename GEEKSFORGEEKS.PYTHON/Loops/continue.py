#Print all the numbers in a list that are not multiple of 5
l=[10,13,15,17,19,20,21]
for x in range(len(l)) :
    if l[x]%5==0 :
        continue
    print(l[x])