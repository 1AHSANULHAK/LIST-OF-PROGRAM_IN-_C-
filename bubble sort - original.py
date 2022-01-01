def bubble_sort_naive(arr):
    for i in range(len(arr)):
        for j in range(len(arr)-1):
            if arr[j] > arr[j+1]:
                arr[j],arr[j+1] = arr[j+1], arr[j]


def bubble_sort_fast(arr):
    for i in range(len(arr)):
        flag = 0
        for j in range(len(arr)-1):
            if arr[j] > arr[j+1]:
                arr[j],arr[j+1] = arr[j+1], arr[j]
                flag = 1
        if not flag:
            break

if __name__ == "__main__":
    arr = [9,4,5,1,3]
    # bubble_sort_naive(arr)
    bubble_sort_fast(arr)
    print(arr)
