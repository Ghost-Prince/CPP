series=[0,1]
n=int(input("Enter number of elements: "))
for i in range(n-2):
	series.append(series[-1]+series[-2])
print(series)
