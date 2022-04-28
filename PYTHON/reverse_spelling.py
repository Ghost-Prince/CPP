str1=input().split()
temp=[]
for i in str1:
	temp.append(i[-1: -len(i)-1: -1])
print(" ".join(temp))