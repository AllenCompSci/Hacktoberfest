def bs(arr):
    """
    Sorts a list of elements in descending order using a recursive method.
    """
    for i in range(1, len(arr)):
        if arr[i] > arr[i-1]:
            a = arr[i-1]
            arr[i-1] = arr[i]
            arr[i] = a
            return bs(arr)
    return arr

print(bs([1, 2, 3]))
print(bs([2, 4, 6, 0, 1]))
