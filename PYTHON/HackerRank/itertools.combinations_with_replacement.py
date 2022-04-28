from itertools import combinations_with_replacement as cwr
data=input().split()
ls=list(cwr(data[0],int(data[1])))
ls.sort()
for i in ls:
	print("".join(i))
