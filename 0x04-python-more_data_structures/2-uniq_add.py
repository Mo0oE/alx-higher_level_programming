#!/usr/bin/python3


def uniq_add(my_list=[]):
    un = set(my_list)
    sum = 0
    for element in un:
        sum += element
    return sum
