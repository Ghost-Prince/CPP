def function(passage, a_count, e_count, i_count, o_count, u_count, i, var):
    if(i==len(passage)):
        return [a_count,e_count,i_count,o_count,u_count,var]
    elif(passage[i]=='a'):
        a_count+=1
        y_count=0
        var=i
    elif(passage[i]=='e'):
        e_count+=1
        y_count=0
        var=i
    elif(passage[i]=='i'):
        i_count+=1
        y_count=0
        var=i
    elif(passage[i]=='o'):
        o_count+=1
        y_count=0
        var=i
    elif(passage[i]=='u'):
        u_count+=1
        y_count=0
        var=i
    return function(passage, a_count, e_count, i_count, o_count, u_count, i+1, var)

passage=input()
a_count,e_count,i_count,o_count,u_count=0,0,0,0,0
i,var=0,0
ans=function(passage,a_count,e_count,i_count,o_count,u_count,i,var)

print(ans)