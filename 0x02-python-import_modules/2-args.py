#!/usr/bin/python3

if __name__ == "__main__":

    import sys

    n = len(sys.argv) - 1
    lst = sys.argv

    if n == 0:
        print("{} arguments.".format(n))
    elif n == 1:
        print("{} argument:".format(n))
    else:
        print("{} arguments:".format(n))

    if n > 0:
        i = 0
        for arg in lst:
            if i != 0:
                print("{:d}: {:s}".format(i, arg))
            i += 1
