a=list(map(int,input().split()))
b=list(map(int,input().split()))
cartesian_product=[(x,y) for x in a for y in b]
for i in cartesian_product:
	print(i,end=" ")
