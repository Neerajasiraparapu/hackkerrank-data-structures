#!/bin/python

import math
import os
import random
import re
import sys

#
# Complete the 'hurdleRace' function below.
#
# The function is expected to return an INTEGER.
# The function accepts following parameters:
#  1. INTEGER k
#  2. INTEGER_ARRAY height
#

def hurdleRace(k, height):
    # Write your code here
    result = 0
    if max(height) >= k:
        result = max(height)-k
    else:
        result = 0
    return result

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    first_multiple_input = raw_input().rstrip().split()

    n = int(first_multiple_input[0])

    k = int(first_multiple_input[1])

    height = map(int, raw_input().rstrip().split())

    result = hurdleRace(k, height)

    fptr.write(str(result) + '\n')

    fptr.close()
