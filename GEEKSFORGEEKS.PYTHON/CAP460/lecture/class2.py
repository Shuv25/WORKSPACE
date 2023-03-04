"""deglist =["BCA", "MCA", "MSC", "MTECH", "PHD"]
print(deglist)
print("--------------------")

deglist[0:2]=["BCCA", "MCAA"]
print("--------------------")
print(deglist)"""

"""deglist =["BCA", "MCA", "MSC", "MTECH", "PHD"]
print(deglist)
print("--------------------")
srch=input("Enter:")
deglist.extend(srch)

#deglist[0:2]=["BCCA", "MCAA"]
print("--------------------")
print(deglist)"""

l = [1, 2, 3, 4, 5, 6]

print(l)

srch = int(input("Enter an element to append on list:"))

l.append(srch)

print(l)


ask = int(input("At which position you want to add:"))
srch2 = int(input("Enter an element to append on list:"))

l.insert(ask, srch2)

print(l)

l2 = [5, 6, 7, 8, 910]

l.extend(l2)

print(l)

l.remove(910)

print(l)

ask2 = int(input("entre the index you want to remove"))

l.pop(ask2)

print(l)

l.pop()

print(l)

del l[4]

print(l)

del l
