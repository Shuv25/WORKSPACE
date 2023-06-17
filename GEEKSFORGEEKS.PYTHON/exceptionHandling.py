try:
    a = int(input("Enter the first no:"))
    b = int(input("Enter the second no:"))
    print("The sum of ", a, " and ", b, " is ", a+b)
except ValueError:
    print("Invalid Literal")
except NameError:
    print("variable not defined")
except:
    print("Something went wrong")
else:
    print("All statements are executed")
