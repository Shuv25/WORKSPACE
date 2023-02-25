
s1="Sourav_Sutradhar"
s2="Sourav"
print(s2 in s1)
print(s2 not in s1)

s3="Sourav"
s4="Sutradhar"
s5="Hello!"+s3+s4
print(s5)

si="SouravSutradharSourav"
sr="Sourav"
print(si.index(sr))
print(si.rindex(sr))

a="Sourav"
print(len(a))
a1=a.upper()
print(a1)
a2=a.lower()
print(a2)
print(a1.islower())
print(a2.isupper())

s="sourav sutradhar"
print(s.startswith("sourav"))
print(s.endswith("sutradhar"))

r="Hi guys! how are you doing?"
print(r.split())


q=['Hi', 'guys!', 'how', 'are', 'you', 'doing?']
print(" ".join(q))

t="------Sourav Sutradhar------"
print(t.strip("-"))
print(t.lstrip("-"))
print(t.rstrip("-"))

w="Sourav Sutradhar"
w1="Sourav"
w2="Shuv"
print(w.find(w1))
print(w.find(w2))