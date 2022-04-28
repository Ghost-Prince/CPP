n=int(input())
record=[]
for i in range(n):
	record.append(input().split())

query_name=input()

for j in record:
	if j[0]==query_name:
		marks=j[1::]

marks=list(map(int,marks))

print(sum(marks)/len(marks))


