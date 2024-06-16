# Merge sort algorithm implementation
def merge(arr, left, right):
    left_i = right_i = arr_i = 0
    
    while left_i < len(left) and right_i < len(right):
        if left[left_i] < right[right_i]:
            arr[arr_i] = left[left_i]
            left_i += 1
        else:
            arr[arr_i] = right[right_i]
            right_i += 1
        arr_i += 1

    while left_i < len(left):
        arr[arr_i] = left[left_i]
        left_i += 1
        arr_i += 1

    while right_i < len(right):
        arr[arr_i] = right[right_i]
        right_i += 1
        arr_i += 1

def merge_sort(arr):
    print("arr: ", arr)
    if len(arr) == 1:
        return arr
    
    mid = len(arr) // 2
    left = arr[:mid]
    right = arr[mid:]

    merge_sort(left)
    merge_sort(right)
    merge(arr, left, right)

    return arr 

# [12, 11, 13, 5, 6, 7, 1, 9]
# l = [12, 11, 13, 5]
# r = [6, 7, 1, 9]

# [12, 11, 13, 5]
# l = [12, 11]
# r = [13, 5]

# [12]
# [11]
# [11, 12]

# [13, 5]
# [13]
# [5]
# [5, 13]

# [5, 11, 12, 13]

if __name__ == '__main__':
    arr = [12, 11, 13, 5, 6, 7, 1, 9, 1]
    print("Given array is", arr)
    merge_sort(arr)
    print("Sorted array is: ", arr)