list = [2000, 1000, 500, 200, 100, 50, 20, 10, 5, 2, 1] #This is the list of coins 
num = int(input("Enter The amount You Want To Return To The Customer :")) #taking input from user
emptyList = []  # empty list where we store the coins in a list form
count=0       
for i in list: 
    while (num>=i): #conditions that will check into the list
        num=num-i  # it will re-check everytime after
        emptyList.append(i) #.append will add the number into the list
        count=count+1 

print("Minimum Number of Coins You Have To Return is :", count)
print("You Have To Return This Coins", emptyList ) 




