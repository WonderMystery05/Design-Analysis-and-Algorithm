#include <stdio.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int partition(int arr[], int lb, int ub) {
    int pivot = arr[lb];  // Choose the first element as the pivot
    int start = lb;
    int end = ub;

    while (start < end) {
        while (arr[start] <= pivot) {
            start++;
        }
        while (arr[end] > pivot) {
            end--;
        }
        if (start < end) {
            swap(&arr[start], &arr[end]);
        }
    }

    swap(&arr[lb], &arr[end]);
    return end;  // Return the index of the pivot
}

int quickSelect(int arr[], int lb, int ub, int k) {
    if (lb <= ub) {
        int pivotIndex = partition(arr, lb, ub);

        // If pivot is the k-th smallest element, return it
        if (pivotIndex == k - 1) {
            return arr[pivotIndex];
        }
        // If k-th element is on the left subarray
        else if (pivotIndex > k - 1) {
            return quickSelect(arr, lb, pivotIndex - 1, k);
        }
        // If k-th element is on the right subarray
        else {
            return quickSelect(arr, pivotIndex + 1, ub, k);
        }
    }
    return -1;  // Return -1 if k is out of bounds
}

void printArray(int arr[], int size) {
    int i;
    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int n, i, k;
    printf("Enter the size of array: ");
    scanf("%d", &n);

    int arr[n];
    for (i = 0; i < n; i++) {
        printf("ENTER THE element: ");
        scanf("%d", &arr[i]);
    }

    printf("Original array: \n");
    printArray(arr, n);

    printf("Enter the value of k (1 <= k <= %d): ", n);
    scanf("%d", &k);

    if (k < 1 || k > n) {
        printf("Invalid value of k.\n");
        return 1;
    }

    int kthSmallest = quickSelect(arr, 0, n - 1, k);
    printf("The %d-th smallest element is: %d\n", k, kthSmallest);

    return 0;
}
