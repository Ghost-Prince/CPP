n=int(input())
ls=[]
for i in range(n):
	choice=input().split()
	if choice[0]=="insert":
		ls.insert(int(choice[1]),int(choice[2]))
	if choice[0]=="print":
		print(ls)
	if choice[0]=="remove":
		ls.remove(int(choice[1]))
	if choice[0]=="append":
		ls.append(int(choice[1]))
	if choice[0]=="sort":
		ls.sort()
	if choice[0]=="pop":
		ls.pop()
	if choice[0]=="reverse":
		ls.reverse()
