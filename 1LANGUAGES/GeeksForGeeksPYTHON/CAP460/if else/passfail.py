sub1=int(input("Enter first number :"))
sub2=int(input("Enter second number :"))
sub3=int(input("Enter third number :"))

if (sub1<33 or sub2<33 or sub3<33):
    print("your are fail because your individual subject number is less than 33")
elif(sub3+sub1+sub2)/3 <40:
    print("you are fail because your all over marks is less than 40")
else:
    print("you are passed")