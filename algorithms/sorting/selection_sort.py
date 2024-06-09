# Selection sort algorithm implementation in Python

def selection_sort(arr: list):
    """
    Selection sort algorithm implementation in Python
    :param arr: List of integers
    :return: List of integers
    """
    for i in range(len(arr)):
        min_index = i
        for j in range(i + 1, len(arr)):
            if arr[j] < arr[min_index]:
                min_index = j
        arr[i], arr[min_index] = arr[min_index], arr[i]
    return arr

# Example usage
arr = [64, 25, 12, 22, 11]
print(selection_sort(arr))