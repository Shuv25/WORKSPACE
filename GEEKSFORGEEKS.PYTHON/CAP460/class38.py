l1 = [1, 5, 9]
l2 = [9, 7, 2]

l3 = []
carry = 0

for i in range(len(l1)):
    if i < len(l1)-1:
        sum = l1[i]+l2[i]+int(carry)
        if (sum < 9):
            l3.append(sum)
        else:
            nsum = str(sum)
            nnsum = nsum[-1]
            l3.append(int(nnsum))
            carry = nsum[0]
    else:
        sum = l1[i]+l2[i]+int(carry)
        l3.append(sum)
print(l3)
