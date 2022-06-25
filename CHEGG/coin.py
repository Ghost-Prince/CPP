def validate_index(coin_list, position_number):
    if(position_number>=1 and position_number<=9):
        if(coin_list[position_number-1]=='$'):
            return True
        else:
            return False
    elif(position_number<1 or position_number>9):
        return False

# test case 1
data=['-','$','-','-','$','-','$','$','-']
print(validate_index(data,2))
print(validate_index(data,5))
print(validate_index(data,7))
print(validate_index(data,8))
print(validate_index(data,0))

# test case 2
data=['-','$','-','-','$','-','$','$','-']
print(validate_index(data,3))
print(validate_index(data,4))