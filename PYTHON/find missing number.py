# You are given a list of continuous whole numbers. Only a single whole number is missing from that list. Find the missing number.

numbers=list(map(int,input("Enter numbers: ").split()))
for i in range(len(numbers)):
	if numbers[i+1]-numbers[i]==2:
		print("Missing number is:",numbers[i]+1)
		break


n=numbers[-1]
print("Missing number is:",(n*(n+1)/2) - sum(numbers))
