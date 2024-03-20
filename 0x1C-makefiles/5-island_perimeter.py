#!/usr/bin/python3

""" perimeter module """
def island_perimeter(grid):
    """
        returns the perimeter of the island described in grid:

        Args:
            grid: list of list of integers
    """
    width = 1
    length = 0

    for cell in grid:
        for square in cell:
            if square == 1:
                length = length + 1
    perimeter = 2 * (length + width)

    return perimeter
