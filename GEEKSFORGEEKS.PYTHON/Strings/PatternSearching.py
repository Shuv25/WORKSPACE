s=input("Enter some repetative text:")
p=input("Enter the pattern you want to search:")
s1=s.find(p)
while s1>=0:
    print(s1)
    s1=s.find(p,s1+1)
