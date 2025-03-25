#include <stdio.h>
#include<stdlib.h>
void bubbleSort(int arr[], int n) {
    int i, j, temp;
    int swapped;
    for (i = 0; i < n - 1; i++) {
        printf("\nPass %d:",i+1);
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        printArray(arr, n);
        }
    }
}
int printArray(int arr[], int n) {
    int i;
    for (i = 0; i < n; i++) {
        printf("\t");
        printf("%d ", arr[i]);
    }
    printf("\n");
}
int main() {
    int i,n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int *arr=(int *)malloc(n*sizeof(int));
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Original array: \n");
    printArray(arr, n);

    bubbleSort(arr, n);

    printf("Sorted array: \n");
    printArray(arr, n);

    return 0;
}
