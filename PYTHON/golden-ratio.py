def fun(n):
    if(n==0):
        return 0
    elif(n==1):
        return 1
    elif(n==2):
        return 1
    return fun(n-1)+fun(n-2)+fun(n-3)

for n in range(40,50):
    print(round(fun(n)/fun(n-1), 5), end=" ")