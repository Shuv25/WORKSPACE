l1 = [2, 9, 5]
l2 = [9, 7, 9]

l3 = []

carry = 0

for i in range(len(l1)-1, -1, -1):
    if i == 0:
        sum = l1[i]+l2[i]+int(carry)
        nsum = str(sum)
        nnsum = nsum[-1]
        l3.append(int(nnsum))
        new = nsum[0]
        l3.append(int(new))
    else:
        sum = l1[i]+l2[i]+int(carry)
        if (sum < 9):
            l3.append(sum)
        else:
            nsum = str(sum)
            nnsum = nsum[-1]
            l3.append(int(nnsum))
            carry = nsum[0]

l3.reverse()
print(l3)
