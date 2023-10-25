#!/usr/bin/python3
"""mod doc"""


def island_perimeter(grid):
    length = 0
    width = 0
    for i in grid:
        temp_w = 0
        for j in i:
            if j == 1:
                length += 1
                break
        for k in i:
            if k == 1:
                temp_w += 1
        if temp_w > width:
            width = temp_w

    return (length + width) * 2

