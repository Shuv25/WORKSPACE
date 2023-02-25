d={1:"abc",2:"def",3:"efg"}
print(d)
d={}
d["Phone"]=14000#[] ysed to add items in empty dictionary
d["Laptop"]=20000
d["Headphones"]=700
print(d)
print(d["Laptop"])

d={2:"hi",3:"Hello"}
print(d.get(2))
print(d.get(4))
print(d.get(4,"NA"))
if 4 in d:
    print(d[4])
else:
    print("NA")
