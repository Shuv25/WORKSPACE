string = "engineers rock"
pattern = "er"

i = 0
j = 0
while i < len(string) and j < len(pattern):
    if string[i] == pattern[j]:
        j += 1
    i += 1

if j == len(pattern):
    print("True")
else:
    print("False")
