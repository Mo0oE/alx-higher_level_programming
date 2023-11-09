#!/usr/bin/python3


def square_matrix_simple(matrix=[]):
    newsq = []
    for row in matrix:
        newsq.append(list(map(lambda x: x**2, row)))
    return newsq
