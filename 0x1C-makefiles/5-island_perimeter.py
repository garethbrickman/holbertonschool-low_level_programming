#!/usr/bin/python3
def island_perimeter(grid):
    """ Returns perimeter of grid
    """
    land = 0
    edge = 0

    for i in range(len(grid)):
        for j in range(len(grid[i])):
            if grid[i][j] == 1:
                land += 1
                if i > 0 and grid[i-1][j] == 1:
                    edge += 1
                if j > 0 and grid[i][j-1] == 1:
                    edge += 1
    return land * 4 - edge * 2
