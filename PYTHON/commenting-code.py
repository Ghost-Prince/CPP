# importing required libraries
import numpy as np
import random as random
# creating a list of lists where 1 represents True and 0 represents False
sample_data = [[0,0],[0,1],[1,0],[1,1]]
# creating a list which stores result of Logical OR operation on pairs of sample_data
expected_results=[0,1,1,1] 
# 0 OR 0 = 0
# 0 OR 1 = 1
# 1 OR 0 = 1
# 1 OR 1 = 1

# creating a variable 'activation_threshold' to store floating point value 0.5
activation_threshold = 0.5
# generating 2 random floating point numbers, dividing them by 1000 and then storing them in an array named 'weights'
weights = np.random.random(2)/1000
# printing weights
print(weights)
# generating a random floating point number, dividing it by 1000 and storing it in variable 'bias_weight'
bias_weight = np.random.random() / 1000
# printing 'bias_weight'
print(bias_weight)