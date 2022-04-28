def miniMaxSum(arr):
    minimum=arr.copy()
    minimum.remove(max(arr))
    maximum=arr.copy()
    maximum.remove(min(arr))
    print(sum(minimum),sum(maximum))
if __name__ == '__main__':

    arr = list(map(int, input().rstrip().split()))

    miniMaxSum(arr)

