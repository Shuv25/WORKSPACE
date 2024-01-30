
#                            06-01-2023 
'''print("hello")
print("this is the first program on python")
a=5
b=3
print(a)
print(a,b)
print(a+b)
print(type(a))
print("abc", "abc", "abc", sep=":::")
c="mr"
d="koushik"
e=c+d
print(c+d)
print(e)
f="hello" "  " "world"
print(f)
k=10_000_000_0000_000
print(k)
z=3+2j
print(type(z))
l=False
print(l)
10>20
bool()
bool(1000)

x=int(input('Enter First number :'))
y=int(input('Enter Second number :'))
sum=x+y
print ("Addition of two number is " , sum)






#                           07-01-2023

name="koushik"
print(name.upper())
print(name.lower())
print(name)
print(name.find("o")) #it will return the index number, 
         #index number start from 0  (position of the number) 

         #how to replace the name

name="arijit"
print(name.replace("arijit", "koushik"))
print(name)
#.replace basically replce the string value for temporary not permanently

            #how to know that the string is exist or not

name="tony stark"
print("tony" in name)# it will return true if the letter is 
                    #exist in the string or return false

#arithmatic operators
print(5+2)
print(5-2)
print(5*2)
print(5/2)
print(5//2) # basically // is used when we dont want 
            #to print the value after decimal
print(5%2) # % this operator called remainder or modulo 

#shortcuts
i=5
i=i+2
i+=2
i-=2
i*=2

#operator precedence

result=2+3*5
print(result)

#logical operator

print(2>3 or 2>1)
print(2>1 and 4>3)
print( not 4>2)

#condition statement

age=23
if age >=18:
    print("you are elegible to vote")
elif age<18 and age>=5:
    print("you are in school")
else:
    print("you are a child")'''

    
                    #mini calculator

'''first=input("Enter first number : ")
operator=input("Select operator +, -, %, *  : ")
second=input("Enter Second Number : ")

first=int(first)
second=int(second)

if operator=="+":
    print(first+second)
elif operator=="-":
    print(first-second)
elif operator=="%":
    print(first%second)
elif operator=="*":
    print (first*second)
else:
    print("Please select correct operator")'''

                        #range

#numbers=range(6)
#print(numbers)

                      #loops
"""i=1
while i<=5:
    print(i)
    i+=1"""

#for i in range(10):
  #  print(i+1)

"""num1,num2,num3=100,200,300
print(num1)
print(num2)
print(num3)  

# how to define variable
Stu_Name="koushik"          # string
print(Stu_Name)
print(Stu_Name ,type(Stu_Name))
Stu_Roll=69                 #int
print("Student name is ", Stu_Name  ,"and Roll No is " , Stu_Roll)
Stu_Cgpa=7.85               #Float
print("Student name is ", Stu_Name  ,"and Roll No is " , Stu_Roll , "Cgpa is", Stu_Cgpa)   
z=3+2j      #Complex number
print(z,type(z))

Stu_List={"koushik", "Gagandeep", "Rahul"} #set
print(Stu_List)
print(type(Stu_List))

Stu_Set=("koushik", "Gagandeep", "Rahul")#tuple
print(type(Stu_Set))"""

"""i=10
while i>=1:
    print(i * "*")
    i-=1"""

"""for i in range(10):
    print(i)"""

"""marks=[23,34,45]
#marks.append(87)
marks.insert(0, 76)
print(23 in marks)
print(len(marks))"""
"""for score in marks:
    print(score)"""


"""students=["ram", "shyam", "rahul", "riya", "priya"]
for student in students:
    if student=="rahul":
        break;
    print(student)"""



"""s = input("Enter your name:")

count = 0
for i in s:
    if (i == 'a' or i == 'e' or i == 'i' or i == 'o' or i == 'u'):
        count += 1

print(count)"""

"""
a=input("Enter Your First String : ") #first input
b=input("Enter Your Second String : ") #second input

l=len(a)

flag=False

for i in range (0,l):#n is holding the length
    if (a[i]==b[i] or a[i]=="?" or b[i]=="?"): #this logic will compare between two inputs
        flag=True
    else:
      flag=False
    break

if(flag==True):
    print("same string")
else:
    print("different string")
            
"""

hall=11.23
kitchen=28.0
living=20.0
bedroom=20.75
bathroom=9.50

area_of_all_rooms=[11.23,28.0,20.0,20.75,9.50]
print(area_of_all_rooms)

print("area of hall is ", area_of_all_rooms[0])


