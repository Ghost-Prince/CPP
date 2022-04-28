def function(x):
    return (x**3) + (x**2)

def SimpsonsIntegral(function, low, up, N):
    h=(up-low)/N
    first=function(low)
    last=function(up)

    x=low
    sum=0
    for i in range(N-1):
        x+=h
        val=function(x)
        if(i % 2 == 0):
            sum+= 4*val
        else:
            sum+= 2*val

    return (h/3)*(first+last+sum)

lower_limit=-2
upper_limit=4
result=0
ERROR=10000000
for i in range(11,172):
    answer=SimpsonsIntegral(function,lower_limit,upper_limit,i)
    error=abs(84-answer)
    print(answer, "  ", error)
    if(error<ERROR):
        ERROR=error
        result=answer
