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
    for y, x in lst:
        if grid[y-1][x] == 0:
            perim += 1
        if grid[y][x-1] == 0:
            perim += 1
        if grid[y][x+1] == 0:
            perim += 1
        if grid[y+1][x] == 0:
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
