[23bcs074@mepcolinux ex1]$cat power.c
#include<stdio.h>
int power(int x,int y){
   int i;
   int s=1;
   if(y==0)
      return 1;
   else
      for(i=0;i<=y-1;i++){
         s=s*x;
      }
      return s;
}
int main(){
   int a,n;
      printf("Enter the value of base:");
      scanf("%d",&a);
      printf("Enter the value of exponent:");
      scanf("%d",&n);
      while(1){
         if((a>0)&&(n>0)){
            printf("%d ^ %d = %d\n",a,n,power(a,n));
            break;
         }else{
            printf("Invalid ! Please enter a non negative integer!\n");
            printf("Enter the value of base and exponent:");
            scanf("%d %d",&a,&n);
         }
   }
   return 0;
}
[23bcs074@mepcolinux ex1]$c power.c
[23bcs074@mepcolinux ex1]$./a.out
Enter the value of base:3
Enter the value of exponent:4
3 ^ 4 = 81
[23bcs074@mepcolinux ex1]$./a.out
Enter the value of base:-2
Enter the value of exponent:4
Invalid ! Please enter a non negative integer!
Enter the value of base and exponent:4 3
4 ^ 3 = 64
[23bcs074@mepcolinux ex1]$cat selection.c
#include <stdio.h>
#include<stdlib.h>
void selectionSort(int arr[], int n) {
    int i, j, minIndex, temp;
       for (i = 0; i < n - 1; i++) {
        minIndex = i;
        for (j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        temp = arr[minIndex];
        arr[minIndex] = arr[i];
        arr[i] = temp;
        printf("Pass %d: ", i + 1);
        printArray(arr, n);
    }
}
int printArray(int arr[], int n) {
    int i;
    for (i = 0; i < n; i++){
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

    selectionSort(arr, n);

    printf("Sorted array: \n");
    printArray(arr, n);

    return 0;
}

[23bcs074@mepcolinux ex1]$cc selection.c
[23bcs074@mepcolinux ex1]$./a.out
Enter the number of elements: 5
Enter 5 elements:
67 34 98 55 20
Original array:
        67      34      98      55      20
Pass 1:         20      34      98      55      67
Pass 2:         20      34      98      55      67
Pass 3:         20      34      55      98      67
Pass 4:         20      34      55      67      98
Sorted array:
        20      34      55      67      98
[23bcs074@mepcolinux ex1]$cat bubblesort.c
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

[23bcs074@mepcolinux ex1]$cc bubblesort.c
[23bcs074@mepcolinux ex1]$./a.out
Enter the number of elements: 5
Enter 5 elements:
49 23 78 66 32 71
Original array:
        49      23      78      66      71

Pass 1: 23      49      78      66      71
        23      49      78      66      71
        23      49      66      78      71
        23      49      66      71      78

Pass 2: 23      49      66      71      78
        23      49      66      71      78
        23      49      66      71      78

Pass 3: 23      49      66      71      78
        23      49      66      71      78

Pass 4: 23      49      66      71      78
Sorted array:
        23      49      66      71      78
[23bcs074@mepcolinux ex1]$ exit
exit

Script done on Wednesday 29 January 2025 09:45:48 PM IST

