#!/usr/bin/python3
"""Module to return the perimeter of a an island"""


def island_perimeter(grid):
    """Function that returns the perimeter of an island"""

    perimeter_count = 0
    island_count = 0
    collision_count = 0
    collision_points = 0
    index_tracker = []
    l_length = len(grid[0])

    for i in range(l_length):
        index_tracker.append(0)
    for i in range(0, len(grid)):
        for j in range(0, len(grid[0])):
            if grid[i][j] == 1:
                island_count += 4
                if j + 1 < len(grid[0]):
                    if grid[i][j + 1] == 1:
                        collision_count += 1
                if index_tracker[j] == 0:
                    index_tracker[j] = 1
                else:
                    collision_count += 1
            else:
                index_tracker[j] = 0
    collision_points = collision_count * 2
    perimeter_count = island_count - collision_points
    return perimeter_count

