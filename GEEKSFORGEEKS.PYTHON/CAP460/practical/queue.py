print("queue operations")
queue=[]

while(True):
    print("1.insert Rear, 2.Delete Front 3.Display ")
    ch=(int(input()))
    if(ch==1):
        print("Enter element to insert :")
        element=input()
        queue.append(element)
    elif(ch==2):
        try:
            print("Delete element = ", queue.pop(0))
        except:
            print("queue is empty")
    elif(ch==3):
        print("queue element is ", queue)
    else:
        break
print("end of program1")