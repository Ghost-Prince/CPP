def knapSack(capacity, weight, value, n):
    if n == 0 or capacity == 0 :
        return 0
    if (weight[n-1] > capacity):
        return knapSack(capacity, weight, value, n-1)
    else:
        return max(value[n-1]+knapSack(capacity-weight[n-1],weight,value,n-1),knapSack(capacity,weight,value,n-1))

prices=list(map(float,input("Enter prices: ").split()))
weight=list(map(float,input("Enter weights: ").split()))
cart_capacity=float(input("Enter capacity of cart: "))
length=len(weight)

print("Maximum profit: ", knapSack(cart_capacity,weight,prices,length))

# Time complexity = O(N*W) ----> N=number of items and W=capacity of cart