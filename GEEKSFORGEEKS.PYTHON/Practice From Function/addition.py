from unittest import result


def outerAdd(a,b):
    def innerAdd(a,b):
        return a+b
    add=innerAdd(a,b)
    return add+5
result=outerAdd(5,3)
print(result)