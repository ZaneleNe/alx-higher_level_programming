#!/usr/bin/python3

import random

number = random.randint(-10, 10)

# if number is greater than or 0 print its positive
if number > 0:
    print("{} is positive".format(number))
# however, if number is less than 0 print its negative
elif number < 0:
    print("{} is negative".format(number))
# otherwise, if number is 0 print its zero
else:
    print("{} is zero".format(number))
