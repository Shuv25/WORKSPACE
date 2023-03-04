
print("Please Enter All The String In Upper Case and Length of two String Should be Same")
a=input("Enter Your First String : ")
b=input("Enter Your Second String : ")

flag1=0
flag2=0
          
if len(a)==len(b) and a.isupper() and b.isupper():
    for i in range(len(a)):
        if (a[i] == '$' or b[i] == '$'):
            if (a[:i] == b[:i]):
                flag1 = 1
        if (a[i+1:] == b[i+1:]):
            flag2 = 1
    if (flag1 == 1 and flag2 == 1):
        print("Same String")
    else:
        print("Different String")

else:
    print("Please Enter two string with same length and the two string should be in uppercase")

