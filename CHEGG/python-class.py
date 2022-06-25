class Number():
    def __init__(self,value):
        self.value=value
    def __str__(self):
        return str(self.value)
    def sqrt(self):
        return self.value**0.5

value=int(input("Enter number: "))
number=Number(value)
string_representation=number.__str__()
print(string_representation, type(string_representation))
sqrt_of_number=number.sqrt()
print(sqrt_of_number)