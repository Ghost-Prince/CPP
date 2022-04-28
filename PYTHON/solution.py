import time
ordered_names=['ayla','ben','can','david','eliz','fatma','gene','huseyin','kemal','ken','liam','matt','zach']
to_search="zach"

# RECURSIVE FUNCTION
def recursive_search(start, to_search, ordered_names):
    if(start==len(ordered_names)):
        return False
    elif(ordered_names[start]==to_search):
        return True
    return recursive_search(start+1, to_search, ordered_names)

# BINARY SEARCH
def binary_search(to_search, ordered_names):
    start=0
    end=len(ordered_names)-1
    while(start<=end):
        mid=(start+end)//2
        if(ordered_names[mid]==to_search):
            return True
        elif(ordered_names[mid]<to_search):
            start=mid+1
        else:
            end=mid-1
    return False

# LINEAR (ITERATIVE) SEARCH
def linear_search(to_search, ordered_names):
    for name in ordered_names:
        if(name==to_search):
            return True
    return False

T1=time.time()
print(recursive_search(0, to_search, ordered_names))
T1=time.time()-T1

T2=time.time()
print(binary_search(to_search, ordered_names))
T2=time.time()-T2

T3=time.time()
print(linear_search(to_search, ordered_names))
T3=time.time()-T3

mini=min(T1,T2,T3)

if(mini==T1):
    print("Recursive Function")
elif(mini==T2):
    print("Binary Search")
else:
    print("Linear search")