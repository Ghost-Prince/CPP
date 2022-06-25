# this is server.py file

def ask_name():
    return input("Hello, what is your name: ")

def greet():
    name=ask_name()
    print("Hello " + name +", Welcome to the server.")

def say_hello():
    message=input("Send a message to server: ")
    greet()