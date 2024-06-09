# Bubble sort implementation in Python

def bubble_sort(arr: list):
    """
    Bubble sort algorithm implementation in Python
    :param arr: List of integers
    :return: List of integers
    """
    n = len(arr) # 5
    for i in range(n):
        for j in range(0, n-i-1):
            if arr[j] > arr[j+1]:
                arr[j], arr[j+1] = arr[j+1], arr[j]
    return arr

# Example usage
arr = [12, 22, 11, 25, 64]
print(bubble_sort(arr))