def plusMinus(arr):
    positive, negative, zero = 0, 0, 0
    n=len(arr)
    for itr in arr:
        if itr>0:
            positive+=1
        if itr<0:
            negative+=1
        if itr==0:
            zero+=1
            
    print(positive/n)
    print(negative/n)
    print(zero/n)

if __name__ == '__main__':
    n = int(input().strip())

    arr = list(map(int, input().rstrip().split()))

    plusMinus(arr)
