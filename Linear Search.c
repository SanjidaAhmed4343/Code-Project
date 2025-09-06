#include <stdio.h>

int linearSearch(int arr[], int n, int target) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == target)
            return i;
    }
    return -1;
}

int main() {
    int arr[] = {2, 72, 32, 0, 5, 10, 12, 90};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 10;

    int result = linearSearch(arr, n, target);
    if (result != -1)
        printf("Target %d found at index %d\n", target, result);
    else
        printf("Target %d not found\n", target);

    return 0;
}
