n=int(input())
score=input().split()
score=list(map(float,score))
maximum=max(score)
for i in range(score.count(maximum)):
	score.remove(maximum)
print(max(score))
