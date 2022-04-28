# you are given a matrix. Print absolute difference of sum of diagonal diggerence. 

def diagonalDifference(arr):
    d1=0
    d2=0
    n=len(arr)
    for i in range(n):
        for j in arr:
            if i==arr.index(j):
                d1=d1+j[i]
            if i + arr.index(j)==n-1:
                d2=d2+j[i]
    return abs(d1-d2)

if __name__ == '__main__':
    n = int(input().strip())

    arr = []

    for _ in range(n):
        arr.append(list(map(int, input().rstrip().split())))

    result = diagonalDifference(arr)
    print(result)
