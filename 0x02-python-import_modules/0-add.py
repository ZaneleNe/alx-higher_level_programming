#!/usr/bin/python3

if __name__ == "__main__":

    """ Import module that contains addition function """
    from add_0 import add

    """ Declare two variables"""
    a = 1
    b = 2

    """ Print sum of the two variables above"""
    print("{} + {} = {}".format(a, b, add(a, b)))
