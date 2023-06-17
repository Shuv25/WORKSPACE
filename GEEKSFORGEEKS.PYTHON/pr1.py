l = [3, 2, 2, 2, 2, 3, 3, 2, 3]

output = 0
mcount = 0

for i in l:
    j = 1
    count = 0
    while (j < len(l)):
        if (i == l[j]):
            count += 1
            output = i
        j += 1
    mcount = count

print(mcount)
if (mcount > len(l)//2):
    print(output)
else:
    print("No majority element found")
