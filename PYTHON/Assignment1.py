import numpy as np
import random

np.random.seed(100)
a = np.random.randint(0, 5, 10) 

print('Array', a)

arr = np.full(a.shape[0], True)

unique_positions = np.unique(a, return_index=True)[1]
arr[unique_positions] = False

print(arr)