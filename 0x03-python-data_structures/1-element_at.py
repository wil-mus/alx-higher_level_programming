#!/usr/bin/python3
def element_at(my_list, i):
    """Retrive an element from a list."""
    if i < 0 or i > (len(my_list) - 1):
        return None
    return (my_list[i])
