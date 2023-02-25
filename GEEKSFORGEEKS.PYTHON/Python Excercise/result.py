result=[]
scorelist=[]
for _ in range(int(input())):
        name = input()
        score = float(input())
        result=+[[name,score]]
        scorelist=+[score]
i=sorted(list(set(scorelist)))
for j,k in sorted(result):
    if j==k:
        print(i)
