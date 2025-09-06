#include <stdio.h>

int binarySearch(int arr[], int n, int target) {
    int low = 0, high = n - 1;
    while (low <= high) {
        int mid = (low + high) / 2;

        if (arr[mid] == target)
            return mid;
        else if (arr[mid] < target)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return -1;
}

int main() {
    int arr[] = {0, 2, 5, 10, 12, 32, 72, 90};  // Sorted array
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 10;

    int result = binarySearch(arr, n, target);
    if (result != -1)
        printf("Target %d found at index %d\n", target, result);
    else
        printf("Target %d not found\n", target);

    return 0;
}
