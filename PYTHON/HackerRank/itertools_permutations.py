from itertools import permutations
s=input().split()
perm=list(permutations(s[0],int(s[1])))
result=[]
for i in perm:
	result.append("".join(i))
result.sort()
for j in result:
	print(j)
