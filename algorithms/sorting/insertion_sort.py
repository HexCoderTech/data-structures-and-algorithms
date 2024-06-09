# Insertion sort algorithm implementation

def insertion_sort(arr: list):
    """
    Insertion sort algorithm implementation in Python
    :param arr: List of integers
    :return: List of integers
    """
    for i in range(1, len(arr)):
        key = arr[i]
        j = i - 1
        while j >= 0 and key < arr[j]:
            arr[j + 1] = arr[j]
            j -= 1
        arr[j + 1] = key
    return arr

# Example usage
arr = [12, 25, 64, 22, 11]
print(insertion_sort(arr))