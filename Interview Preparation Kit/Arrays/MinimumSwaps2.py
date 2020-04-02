#https://www.hackerrank.com/challenges/minimum-swaps-2/problem?h_l=interview&playlist_slugs%5B%5D=interview-preparation-kit&playlist_slugs%5B%5D=arrays

#!/bin/python3

import math
import os
import random
import re
import sys

# Complete the minimumSwaps function below.
def minimumSwaps(arr):
    n=len(arr)
    b=[1]*n
    swaps=0
    c=0
    for i in range(n):
    
        if b[i]:
            current=arr[i]
            if current!=i+1:
                c=0      
                while b[i]:
                    b[current-1]=0
                    current=arr[current-1]
                    c+=1
                swaps+=c-1

    return swaps
