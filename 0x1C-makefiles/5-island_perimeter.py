#!/usr/bin/python3
"""
island Perimeter Calculator
"""


def island_perimeter(grid):

    """ Calculate Perimeter of island """
    count = 0
    if not grid or grid == [[]]:
        return 0
    for i in range(len(grid)):
        for j in range(len(grid[0])):
            if grid[i][j]:
                if j > 0 and grid[i][j-1]:
                    count -= 2
                if i > 0 and grid[i-1][j]:
                    count -= 2
                count += 4
    return count
