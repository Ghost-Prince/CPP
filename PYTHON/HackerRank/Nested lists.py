n=int(input())
data=[]
for i in range(n):
	individual=[]
	individual.append(input())
	individual.append(float(input()))
	data.append(individual)

marks=[]

for j in data:
	marks.append(j[1])

for k in range(marks.count(min(marks))):
	marks.remove(min(marks))

second_lowest=[]

for l in data:
	if l[1]==min(marks):
		second_lowest.append(l[0])

second_lowest.sort()

for m in second_lowest:
	print(m)