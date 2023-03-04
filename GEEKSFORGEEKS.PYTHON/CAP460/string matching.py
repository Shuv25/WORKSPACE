print("Please Enter All The String In Lower Case Format and Length of String Should be Same")
a=input("Enter Your First String : ") #first input
b=input("Enter Your Second String : ") #second input

l=len(a)  
flag=False
          
for i in range (0,l):#n is holding the length
    if (a[i]==b[i] or a[i]=="$" or b[i]=="$"): #this logic will compare between two inputs
        flag=True
    else:
      flag=False
    break


if(flag==True):
    print("same string")
else:
    print("different string")


