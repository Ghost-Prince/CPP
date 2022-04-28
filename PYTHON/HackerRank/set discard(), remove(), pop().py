n = int(input())
s = set(map(int, input().split()))
N=int(input())

for i in range(N):
    choice=input().split()
    if choice[0]=="pop":
        s.pop()
    if choice[0]=="remove":
        s.remove(int(choice[1]))
    if choice[0]=="discard":
        s.discard(int(choice[1]))
        
print(sum(s))
