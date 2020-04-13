#https://www.hackerrank.com/challenges/new-year-chaos/problem?h_l=interview&playlist_slugs%5B%5D=interview-preparation-kit&playlist_slugs%5B%5D=arrays

import math
import os
import random
import re
import sys

# Complete the minimumBribes function below.
def minimumBribes(q):
    n=len(q)
    bribes=0

    for i in range(n-1,-1,-1):
        if q[i]-1-i>2 and q[i]-1>i:
            print("Too chaotic")
            return            
        for j in range(max(q[i]-2,0),i):
            bribes+=q[i]<q[j]

    print(bribes)
