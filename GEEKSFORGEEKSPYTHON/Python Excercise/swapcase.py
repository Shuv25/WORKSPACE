from unittest import result


def swap_case(s):
    output=' '
    for i in s:
        if (i.isupper()==True):
            output+=(i.lower())
        elif (i.islower()==True):
            output+=(i.upper())
        else:
            output+=i

    return output
s="Sourav SutraDHar"
result=swap_case(s)
print(result)
