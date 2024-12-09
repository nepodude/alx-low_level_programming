#!/usr/bin/python3

"""
5-main
"""


def island_perimeter(grid):
    """a function to calculate the perimeter of the island."""
    perimeter = 0
    counter = 0
    semi_counter = 0
    counted = 0
    sum_counted = 0
    len_grid = len(grid)

    if len_grid == 0:
        return 0
    if len_grid == 1:
        perimter += sum(item for item in grid[0])
        return perimter

    for item in grid:
        semi_counter = 0
        sum_counted = sum(elemement for elemement in item)
        if sum_counted > 0:
            counted += 1 
        for element in item:
            if counter == 0:
                if element == 1 and grid[1][semi_counter] == 1:
                    perimeter += 1
                if element == 1 and grid[1][semi_counter] == 0:
                    perimeter += 2

            if counter == len_grid - 1:
                if element == 1 and grid[len_grid - 2][semi_counter] == 1:
                    perimeter += 1
                if element == 1 and grid[len_grid - 2][semi_counter] == 0:
                    perimeter += 2

            if counter > 0 and counter < len_grid - 1:
                if element == 1 and grid[counter - 1][semi_counter] == 1 and grid[counter + 1][semi_counter] == 0:
                    perimeter += 1
                if element == 1 and grid[counter - 1][semi_counter] == 0 and grid[counter + 1][semi_counter] == 1:
                    perimeter += 1
                if element == 1 and grid[counter - 1][semi_counter] == 0 and grid[counter + 1][semi_counter] == 0:
                    perimeter += 2

            semi_counter += 1

        counter += 1
    perimeter += 2 * (counted)
    return [perimeter, counted]
