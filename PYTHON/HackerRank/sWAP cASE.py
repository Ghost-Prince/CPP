def swap_case(string):
	string=list(string)
	new_string=[]
	for i in string:
		if i.isupper()==True:
			new_string.append(i.lower())
		if i.islower()==True:
			new_string.append(i.upper())
		if i.isalnum()==False:
			new_string.append(i)
	result="".join(new_string)
	return result

string=input()
print(swap_case(string))
