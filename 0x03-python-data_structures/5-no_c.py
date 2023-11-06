#!/usr/bin/python3


def no_c(my_string):
    tmp = ""

    for c in my_string:
        if c == "c" or c == "C":
            continue
        tmp += c
    return tmp
