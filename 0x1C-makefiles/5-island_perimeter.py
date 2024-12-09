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
    power_of_array = 0
    len_grid = len(grid)

    if len_grid == 0:
        return 0
    if len_grid == 1:
        perimter += sum(item for item in grid[0])
        return perimter

    for item in grid:
        semi_counter = 0
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

            if 0 < counter < len_grid - 1:
                if (
                    element == 1
                    and grid[counter - 1][semi_counter] == 1
                    and grid[counter + 1][semi_counter] == 0
                ):
                    perimeter += 1
                if (
                    element == 1
                    and grid[counter - 1][semi_counter] == 0
                    and grid[counter + 1][semi_counter] == 1
                ):
                    perimeter += 1
                if (
                    element == 1
                    and grid[counter - 1][semi_counter] == 0
                    and grid[counter + 1][semi_counter] == 0
                ):
                    perimeter += 2

            semi_counter += 1
        counter += 1
        power_of_array += shortner(item)
    perimeter += power_of_array
    return perimeter


def shortner(array):
    power_of_array = 0
    helper = 0

    if len(array) == 1:
        return array[0]

    if all(element == 1 for element in array):
        return 2

    for item in array:
        if helper == 0 and item == 1 and array[1] == 0:
            power_of_array += 2
        if helper == 0 and item == 1 and array[1] == 1:
            power_of_array += 1
        if helper == len(array) - 1 and item == 1 and array[helper - 1] == 0:
            power_of_array += 2
        if helper == len(array) - 1 and item == 1 and array[helper - 1] == 1:
            power_of_array += 1
        if (
            0 < helper < len(array) - 1
            and item == 1
            and array[helper - 1] == 0
            and array[helper + 1] == 0
        ):
            power_of_array += 2
        if (
            0 < helper < len(array) - 1
            and item == 1
            and array[helper - 1] == 1
            and array[helper + 1] == 0
        ):
            power_of_array += 1
        if (
            0 < helper < len(array) - 1
            and item == 1
            and array[helper - 1] == 0
            and array[helper + 1] == 1
        ):
            power_of_array += 1
        helper += 1
    return power_of_array
