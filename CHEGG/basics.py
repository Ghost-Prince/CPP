first_name=input("What is your first name: ")
last_name=input("What is your last name: ")
print("Your name is ", first_name.capitalize() + " " + last_name.capitalize())

ls=[]
ls.append(int(input("Enter an integer: ")))
ls.append(int(input("Enter an integer: ")))
ls.append(int(input("Enter an integer: ")))

if(ls[0]>ls[1] and ls[1]>ls[2]):
    print(ls[0]," is greater than ",ls[1],", which is greater than ",ls[2])

elif(ls[1]+ls[2]>ls[0] and ls[1] != ls[2]):
    print(ls[1]," + ",ls[2]," is greater than ",ls[0]," and ",ls[1]," is not equal to ",ls[2])

elif(ls[0]%2==0 or ls[1]%2==0 or ls[2]%2==0):
    evens=[]
    for number in ls:
        if(number%2==0):
            evens.append(number)
    for number in evens:
        print(number," is divisible by 2, ",int(number/2)," time(s)")

else:
    print("None of the conditions were true.")