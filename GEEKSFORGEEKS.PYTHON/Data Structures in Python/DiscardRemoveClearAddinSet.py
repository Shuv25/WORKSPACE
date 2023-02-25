s={10,20,30}
s.discard(30)# dicard and remove function are same ,the only diff is remove will show an error if it can't 
#find the value we want to remove but discard not,discard works silently
print(s)
s.remove(20)
print(s)
s.clear()#clear function clear the values and returns the empty set 
print(s)
s.add(50)
print(s)
del s#del remove the object itself,we cant access anymore the set "s" after using del