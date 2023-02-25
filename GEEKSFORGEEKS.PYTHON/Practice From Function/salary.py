E=input("Name of the employee :")
S=int(input("Salary of the employee :"))
if S==0:
    S=9000
def salary(E,S):
   print("Employee name is ",E," and salary is ",S)
salary(E,S)
#---------------------------------------------------------------------------#
def getSalaary(name,salary=9000):
    print(name,"",salary)
getSalaary("Ram")
getSalaary("Shyam",8000)