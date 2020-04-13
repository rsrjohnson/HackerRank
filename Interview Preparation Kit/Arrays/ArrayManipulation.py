#https://www.hackerrank.com/challenges/crush/problem?h_l=interview&playlist_slugs%5B%5D=interview-preparation-kit&playlist_slugs%5B%5D=arrays

import math
import os
import random
import re
import sys

# Complete the arrayManipulation function below.
def arrayManipulation(n, queries):

    l=[0]*n
    
    for i in queries:
        a,b,k=i[0],i[1],i[2]
        l[a-1]+=k
        if b<n:            
            l[b]-=k        
    
    maxi=0
    t=0
    for i in range(n):
        maxi+=l[i]
        if t<maxi:
            t=maxi


    return t
