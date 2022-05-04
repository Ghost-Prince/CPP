class account:
    def __init__(self, account_number, balance, file_name):
        self.account_number=account_number
        self.balance=balance
        self.file=open(file_name+".txt","w+")
        self.file.write("Account number: "+str(account_number)+"\n")
    def deposit(self):
        amount=float(input("Enter amount to be deposited: "))
        self.balance+= amount
        print("Depositted successfully.")
        self.file.write("Deposited: "+str(amount)+"\n")
    def withdraw(self):
        amount=float(input("Enter amount to withdraw: "))
        if(amount<=self.balance):
            self.balance-=amount
            print("Transaction successful.")
            self.file.write("Withdrawn: "+str(amount)+"\n")
        else:
            print("Insufficient balance, try again.")
    def close(self):
        self.file.close()

account_number=int(input("Enter account number: "))
file_name=input("Enter file name: ")
ACC1=account(account_number,0,file_name)

while(True):
    print("Enter 1 to deposit\nEnter 2 to withdraw\nEnter 3 to exit")
    choice=int(input())
    if(choice==1):
        ACC1.deposit()
    elif(choice==2):
        ACC1.withdraw()
    elif(choice==3):
        ACC1.close()
        break

print("-------file content-------")
file=open(file_name+".txt","r")
content=file.read()
print(content)
file.close()