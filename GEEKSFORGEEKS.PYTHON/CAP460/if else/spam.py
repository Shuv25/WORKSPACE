text=input("Enter your text :")

if ("subscribe" in text ):
    spam=True
else:
    spam=False

if(spam):
    print("this is a spam masage")
else:
    print("this is not a spam masage")