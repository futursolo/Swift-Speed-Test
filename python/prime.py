from __future__ import print_function
import math
import time

max_num = 1000000

start_time = time.time()

print("Python Prime Number Calculator, max_num = %d." % max_num)

num_list = []

max_value = 0

for i in range(0, max_num):
    num_list.append(1)

for i in range(2, int(math.sqrt(max_num)) + 1):
    if num_list[i] != 0:
        current = i * 2
        while current < max_num:
            num_list[current] = 0
            current += i

for i in range(0, max_num):
    if num_list[i] != 0:
        max_value = i

finish_time = time.time()

print("Finished! Max Value is %d, Used Time is %.5f" % (max_value, (finish_time - start_time)))
