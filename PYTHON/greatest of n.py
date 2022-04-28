x=int(input('Enter number of integers: '))
max=0
for i in range(1,x+1):
	num=int(input('Enter integer: '))
	if (num>max):
		max=num
print(max,' is maximum')		