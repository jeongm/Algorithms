import random


def weighted_random_color(color_array, weight_array):
    total = sum(weight_array)
    weighted_color = [] * total
    for index, weight in enumerate(weight_array):
        while (weight > 0):
            weighted_color.append(color_array[index])
            weight -= 1
    r = random.randint(0, total)
    return weighted_color[r]


