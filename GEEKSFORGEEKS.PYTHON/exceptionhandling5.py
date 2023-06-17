class Error(Exception):
    pass


class num1islessthan0(Error):
    pass


class num2islessthan0(Error):
    pass


try:
    n1 = int(input("Enter n1:"))
    n2 = int(input("Enter n2:"))

    if (n1 <= 0):
        raise num1islessthan0
    elif (n2 <= 0):
        raise num2islessthan0
    else:
        print(n1*n2)
except num1islessthan0:
    print("Please enter a positive integer")
except num2islessthan0:
    print("Please enter a positive integer")
