n=int(input("Enter a number:"))
if n>0 :
    if n%2==0 :
        print("Positive even")
    else:
        print("Positive odd")
elif n<0 :
    if n%2==0:
        print("Negative even")
    else:
        print("Negative odd")
else:
    print("Its zero")