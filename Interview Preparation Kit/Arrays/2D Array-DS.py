#https://www.hackerrank.com/challenges/2d-array/problem?h_l=interview&playlist_slugs%5B%5D=interview-preparation-kit&playlist_slugs%5B%5D=arrays

#!/bin/python3

import math
import os
import random
import re
import sys

# Complete the hourglassSum function below.
def hourglassSum(arr):

    maxi=-1000    

    for i in range(4):
        for j in range(4):
            s=sum(arr[i][j:j+3])
            s+=arr[i+1][j+1]
            s+=sum(arr[i+2][j:j+3])
            if maxi<s:
                maxi=s
    return maxi