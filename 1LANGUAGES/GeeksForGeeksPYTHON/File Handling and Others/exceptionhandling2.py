# n1 = int(input("Enter the first no:"))
# n2 = int(input("Enter the second no:")
# if (n1 == 0) or (n2 == 0):
#     raise Exception("Only positive no are required")
# else:
#     print("Product is ", n1*n2)


# n = 100
# n = -20
# n = 'ten'

# if not type(n) is int:
#     raise TypeError("Pass only int value")
# else:
#     if n < 0:
#         raise Exception("Only positive no")
#     else:
#         print(n*n)


class Error(Exception):
    pass


class num1lessthan0(Error):
    pass


class num2essthan0(Error):
    pass


try:
    n1 = int(input("Enter the first no:"))
    n2 = int(input("Enter the second no:"))

    if (n1 == 0):
        raise num1lessthan0
    elif (n2 == 0):
        raise num2essthan0
    else:
        print(n1*n2)
except num1lessthan0:
    print("Value is neg and invalid for n1")
except num2essthan0:
    print("Value is neg and invalid for n1")
