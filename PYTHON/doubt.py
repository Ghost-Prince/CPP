#create a list of first k*(k+1)/2 odd numbers
k=int(input())
k=k+1
elements=[]
for i in range(1,(k*(k+1)//2)+1):
    elements.append(2*i-1)
    
list_of_lists=[]

for i in range(1,k):
    temp=[]
    for j in range(i):
        temp.append(elements[0])
        elements.pop(0)
    list_of_lists.append(temp)
 

print(list_of_lists)

print(sum(list_of_lists[k-2]))
