# Question 5
def count_substring(string,substring):
	count=0
	for i in range(len(string)):
		if string[i:i+len(substring):1]==substring:
			count+=1
	return count

print(count_substring(input(),input()))