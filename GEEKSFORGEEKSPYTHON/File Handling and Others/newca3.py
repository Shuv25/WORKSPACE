test_list = ["Gfg", "is", "Best"]
subs_dict = {"Gfg": [5, 6, 7], "is": [7, 4, 2]}
K = 0

for i in range(len(test_list)):
    if test_list[i] in subs_dict:
        mapped_list = subs_dict[test_list[i]]
        print(mapped_list)
        test_list[i] = mapped_list[K]


print(test_list)
