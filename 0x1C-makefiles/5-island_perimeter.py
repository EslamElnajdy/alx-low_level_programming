#!/usr/bin/python3
"""mod doc"""


def island_perimeter(grid):
    n = 0
    for i in grid:
        for j in i:
            n += j
    return (n + 1) * 2

