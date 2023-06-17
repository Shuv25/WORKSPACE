# Even_Roll_No:- create a dict for the days in the month whose keys are months name and value are the number of days in corresponding month using this dict,

# A) ask the user to enter a month name and print how many days are there in the month
# B) print all keys in alphabetical oreder
# C) print all the months with 30 days

year = {'Jan': 31, 'Feb': 28, 'Mar': 31, 'Apr': 30, 'May': 31, 'Jun': 30,
        'Jul': 31, 'Aug': 31, 'Sep': 30, 'Oct': 31, 'Nov': 30, 'Dec': 31}

s = input("Enter any month name like Jan/Feb/Mar:")

for i in year:
    if (i == s):
        print("There are ", year[i], " days in ", s, " month.")

print()
print("Printing all the keys in alphabatical order:", end=" ")

for i in sorted(year.keys()):
    print(i, end=" ")

print()
print()
print("Printing all the months with 30 days:", end=" ")

for i in year:
    if (year[i] == 30):
        print(i, end=" ")
