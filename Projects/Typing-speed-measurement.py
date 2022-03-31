import time

start=""
while(True):
    if(start=='BEGIN'):
        break
    else:
        start=input("Enter 'BEGIN' and start typing: ")

now=time.time()
string=input("Enter a string: ")
duration=time.time()-now
print("Time taken: ",duration)
print("Length of string: ", len(string))
print("Keystrokes per second: ", len(string)/duration)