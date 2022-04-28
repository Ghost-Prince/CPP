# you are given a list of numbers. Find those elements which dont change their index when the list is sorted.

numbers=list(map(int,input("Enter numbers:").split()))
ls=numbers.copy()
ls.sort()
count=0
for i in range(len(numbers)):
	if numbers[i]==ls[i]:
		count+=1
		print(numbers[i])
print("Number of elements which didn't change their index:",count)
