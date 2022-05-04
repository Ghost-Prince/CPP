def generateLogin(first,last,zipc):
    ans=""
    for i in range(0,len(first),2):
        ans+=first[i]
    for i in range(0,len(last),2):
        ans+=last[i]
    for i in range(0,len(zipc),2):
        ans+=zipc[i]
    return ans.upper()
    

first=input("Firstname: ")
last=input("Lastname: ")
zipc=input("Zipcode: ")

login_ID=generateLogin(first,last,zipc)

print("Generated login:",login_ID)