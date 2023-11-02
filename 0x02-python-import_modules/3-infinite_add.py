#!/usr/bin/python3

if __name__ == "__main__":
    import sys

    n = len(sys.argv) - 1
    lst = sys.argv
    sum = 0

    if n > 0:
        for arg in lst:
            if arg != sys.argv[0]:
                sum += int(arg)
    print("{}".format(sum))
