#!/usr/bin/python3

for number in range(97, 123):
    if number == 101 or number == 113:
        continue
    print(f"{number:c}", end="")
