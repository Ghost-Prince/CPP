def wrap(string, max_width):
    s=""
    for i in range(1, len(string)+1):
        if i%max_width!=0:
            s=s+string[i-1]
        elif i%max_width==0:
            s=s+string[i-1]+"\n"
    return s
if __name__ == '__main__':
    string, max_width = input(), int(input())
    result = wrap(string, max_width)
    print(result)