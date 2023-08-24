#!/usr/bin/python3
"""5. Island Perimeter"""


def island_perimeter(grid):
    """Calculate the perimeter of the island"""
    lst = []
    for y in range(len(grid)):
        for x in range(len(grid[y])):
            if grid[y][x] == 1:
                lst.append((y, x))
    perim = 0
    l1 = len(grid)
    l2 = len(grid[0])
    for y, x in lst:
        if y != 0 and grid[y-1][x] == 0:
            perim += 1
        if x != 0 and grid[y][x-1] == 0:
            perim += 1
        if x != l2 - 1 and grid[y][x+1] == 0:
            perim += 1
        if y != l1 - 1 and grid[y+1][x] == 0:
            perim += 1
    return perim


if __name__ == "__main__":
    grid = [
        [0, 0, 0, 0, 0, 0],
        [0, 1, 0, 0, 0, 0],
        [0, 1, 0, 0, 0, 0],
        [0, 1, 1, 1, 0, 0],
        [0, 0, 0, 0, 0, 0]
    ]
    print(island_perimeter(grid))
