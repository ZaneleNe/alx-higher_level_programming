#!/usr/bin/python3
for letter in range(122, 96, -1):
    print("{:s}".format(
        chr(letter) if letter % 2 == 0 else chr(letter - 32)), end="")
