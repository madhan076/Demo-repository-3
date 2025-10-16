#include<stdio.h>

void merge(int arr[], int low, int mid, int high) {
    int b[10]; // Temporary array for merging
    int i = low, j = mid + 1, k = 0;

    // Merging the two subarrays into b[]
    while (i <= mid && j <= high) {
        if (arr[i] < arr[j]) {
            b[k] = arr[i];
            i++;
        } else {
            b[k] = arr[j];
            j++;
        }
        k++;
    }

    // Copy remaining elements of the left subarray if any
    while (i <= mid) {
        b[k] = arr[i];
        i++; k++;
    }

    // Copy remaining elements of the right subarray if any
    while (j <= high) {
        b[k] = arr[j];
        j++; k++;
    }

    // Copy the sorted elements from b[] back to arr[]
    for (i = low, k = 0; i <= high; i++, k++) {
        arr[i] = b[k];
    }
}

void mergesort(int arr[], int left, int right) {
    if (left < right) {
        int mid = (left + right) / 2;

        // Recursively divide the array into two halves
        mergesort(arr, left, mid);
        mergesort(arr, mid + 1, right);

        // Merge the two halves
        merge(arr, left, mid, right);
    }
}

int main() {
    int n, i, a[25];

    // Input number of elements
    printf("Enter n value: ");
    scanf("%d", &n);

    // Input array elements
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    // Perform merge sort
    mergesort(a, 0, n - 1);

    // Print sorted array
    printf("Sorted array:\n");
    for (i = 0; i < n; i++)
        printf("%d\t", a[i]);
    printf("\n");

    return 0;
}

