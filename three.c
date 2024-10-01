def insertion_sort(arr):
    for i in range(1, len(arr)):
        key = arr[i]
        j = i - 1
        while j >= 0 and arr[j] > key:
            arr[j + 1] = arr[j]
            j -= 1
        arr[j + 1] = key

def main():
    # Taking input from the user
    user_input = input("Enter integers separated by spaces: ")
    # Converting the input string into a list of integers
    arr = list(map(int, user_input.split()))

    print("Original array:", arr)
    insertion_sort(arr)
    print("Sorted array:", arr)

if __name__ == "__main__":
    main()
