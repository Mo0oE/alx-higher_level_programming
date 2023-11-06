#!/usr/bin/python3


def print_matrix_integer(matrix=[[]]):
    if not matrix:
        return None
    for vector in matrix:
        if len(vector) == 0:
            print()
        for i in range(len(vector)):
            print("{:d}".format(vector[i]),
                    end=" " if i != len(vector) - 1 else "\n")
