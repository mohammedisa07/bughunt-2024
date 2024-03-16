#program to remove all even numbers from the beginning of a list
def delete_starting_evens(lst):
    while lst and lst[0] % 2 == 0:
        lst.pop(0)
    return lst

lst = [2, 8, 10, 11]
print(delete_starting_evens(lst))

