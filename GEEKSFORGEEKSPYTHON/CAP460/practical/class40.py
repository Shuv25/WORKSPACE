set1 = {"Sourav", "Shuv", "Ramesh", "Ram"}
set2 = {"Sourav", "Ram", "Ram", "List", "Shuv", "Ramesh"}

print(set1)
print(set2)

ans1 = set1.difference(set2)
print(ans1)

ans2 = set2.difference(set1)
print(ans2)

ans3 = set1.intersection(set2)
print(ans3)

ans4 = set1.union(set2)
print(ans4)

ans5 = set1.issubset(set2)
print(ans5)

ans6 = set2.issubset(set1)
print(ans6)

set3 = {1, 2, 3, 4, 5, 6}
set4 = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}

ans7 = set3.issuperset(set4)
print(ans7)

ans8 = set4.issuperset(set3)
print(ans8)

l = [1, 2, 3, 4]
l.remove(3)
print(l)
l.pop(0)
print(l)
l.remove(5)
