
d={"day1":100,"day2":180,"day3":260,"day4":310,"day4":40,"day5":535,"day6":695}
Min=min(d.values())
res=[i for i in d if d[i]==Min]
Max=max(d.values())
Res=[i for i in d if d[i]==Max]
print( "The user should buy stocks in"," ".join(map(str, res)),"and sell it on"," ".join(map(str,Res)))
