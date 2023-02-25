from turtle import pensize


s1={2,4,6,8}
s2={3,5,6,9}
print(s1|s2)#or s1.union(s2)
print(s1 & s2)#intersection
print(s1-s2)#set-diference
print(s2-s1)
print(s1 ^ s2)#symetric diiference operator
#-------------------------------------------------------------------
s1={2,4,6,8}
s2={4,8}
print(s1.isdisjoint(s2))#it means are there any common values in s1 and s2
print(s1 <= s2)
print(s2 <= s1)
print(s2>=s1)
print(s1>s2)
