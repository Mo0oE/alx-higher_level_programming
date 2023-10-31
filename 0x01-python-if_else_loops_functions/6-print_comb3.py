#!/usr/bin/python3

for n1 in range(10):
    for n2 in range(n1 + 1, 10):
        print(f"{n1:d}{n2:d}", end="\n" if n1 == 8 and n2 == 9 else ", ")
