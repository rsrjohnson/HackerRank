#https://www.hackerrank.com/challenges/ctci-array-left-rotation/problem?h_l=interview&playlist_slugs%5B%5D=interview-preparation-kit&playlist_slugs%5B%5D=arrays

#!/bin/python3

import math
import os
import random
import re
import sys

# Complete the rotLeft function below.
def rotLeft(a, d):
    n=len(a)
    a_c=[0]*n

    for i in range(n-1,-1,-1):
        if i-d>-1:
            a_c[i-d]=a[i]
        else:
            a_c[i-d+n]=a[i]
    
    return a_c
            