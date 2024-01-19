dic = {1: 'ram', 2: 'raj', 3: 'rahul', 4: 'simran'}

dic = dict(reversed(dic.items()))
print(dic)

dic1 = {1: 10, 2: 20, 3: 30}
dic2 = {4: 40, 5: 50, 6: 60}
dic3 = {1: 70, 3: 80, 6: 90}


dic1.update(dic2)
dic1.update(dic3)

print(dic1)

dic4 = {1: "ram"}


flag = 1
for i in dic:
    for j in dic4:
        if (i == j and dic[i] == dic4[j]):
            flag = 0
        else:
            flag = 1

if (flag == 0):
    print("Found")
else:
    print("Not Found")
