# question 4
string=input()
vowels=["a","e","i","o","u"]
count=0
for i in string:
    if i in vowels:
        count+=1

print(count)