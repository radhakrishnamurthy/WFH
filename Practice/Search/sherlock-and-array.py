#!/bin/python3

import math
import os
import random
import re
import sys

# Complete the balancedSums function below.
def balancedSums(arr):
    low=0
    high=len(arr)-1
    while(low<=high):
        mid=(low+high)//2
        if(mid==0 and sum(arr[mid+1:])==0):
            return "YES"
        elif(sum(arr[:mid])==sum(arr[mid+1:])):
            return "YES"
        elif(sum(arr[:mid])>=sum(arr[mid+1:])):
            high=mid-1
        else:
            low=mid+1
    return "NO"

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    T = int(input().strip())

    for T_itr in range(T):
        n = int(input().strip())

        arr = list(map(int, input().rstrip().split()))

        result = balancedSums(arr)

        fptr.write(result + '\n')

    fptr.close()
