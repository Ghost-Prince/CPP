sum,i=0,0
while(i<3):
    sum+= float(input("Please input a number: "))
    i+=1
average=sum/3
print(f"Average of the input numbers is {round(average,2)}")