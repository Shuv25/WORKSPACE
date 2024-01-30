#implement stack using List

stack=[]

while(True):
        ch=int(input('1.push, 2.pop, 3. Display, 4.Quite  :'))
        if(ch==1):
                element=input("enter the element to insert:")
                stack.append(element)
        elif(ch==2):
                try:
                        element=stack.pop()
                        print("deleted element is =", element)
                except:
                        print("stack is empty")
        elif(ch ==3):
                print("List of elements in Stack are :", stack)
        else:
                break
print("End of Program")

        