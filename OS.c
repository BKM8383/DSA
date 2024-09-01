// #include <stdio.h>
// #define KERNEL_MODE 0
// #define USER_MODE 1

// int mode_bit = USER_MODE;

// void enterKernelMode() {
//     mode_bit = KERNEL_MODE;
//     printf("Entering Kernel mode.\n");
// }

// void enterUserMode() {
//     mode_bit = USER_MODE;
//     printf("Entering User mode.\n");
// }

// void mergeSort(int arr[], int left, int right) {
//     if (mode_bit == USER_MODE) {
//         printf("Error: Only privileged processes can perform Merge Sort.\n");
//         return ;
//     }

//     if (left < right) {
//         int mid = left + (right - left) / 2;
//         mergeSort(arr, left, mid);
//         mergeSort(arr, mid + 1, right);

//         int temp[right - left + 1];
//         int i = left, j = mid + 1, k = 0;

//         while (i <= mid && j <= right) {
//             if (arr[i] <= arr[j]) {
//                 temp[k] = arr[i];
//                 i++;
//             } else {
//                 temp[k] = arr[j];
//                 j++;
//             }
//             k++;
//         }

//         while (i <= mid) {
//             temp[k] = arr[i];
//             i++;
//             k++;
//         }

//         while (j <= right) {
//             temp[k] = arr[j];
//             j++;
//             k++;
//         }

//         for (i = left; i <= right; i++) {
//             arr[i] = temp[i - left];
//         }
//     }
// }

// void printarray(int arr[],int n){
//     for (int i = 0; i < n; i++)
//     {
//         printf("%d ",arr[i]);
//     }
//     printf("\n");
// }

// int binarySearch(int arr[], int left, int right, int target) {
//     if (mode_bit == KERNEL_MODE) {
//         printf("Error: User processes cannot perform Binary Search in Kernel mode.\n");
//         return -1;
//     }

//     while (left <= right) {
//         int mid = left + (right - left) / 2;
//         if (arr[mid] == target) {
//             return mid; 
//         } else if (arr[mid] < target) {
//             left = mid + 1;
//         } else {
//             right = mid - 1;
//         }
//     }

//     return -1;
// }

// int main() {
//     enterKernelMode();

//     int arr[] = {12, 3, 15, 6, 7, 23, 19};
//     int n = sizeof(arr) / sizeof(arr[0]);
    
//     printf("Before merge sort : ");
//     printarray(arr,n);
//     mergeSort(arr, 0, n - 1);
//     printf("After merge sort : ");
//     printarray(arr,n);

//     enterUserMode();
    
//     int target = 7;
//     int result = binarySearch(arr, 0, n - 1, target);

//     if (result != -1) {
//         printf("Element %d found at index %d.\n", target, result);
//     } else {
//         printf("Element %d not found.\n", target);
//     }
//     return 0;
// } 


#include<stdio.h>

int main(){
    int a;
    scanf("%d",&a);
    int x[a];
    for (int i = 0; i < a; i++)
    {
        scanf("%d",&x[i]);
    }
    for (int i = 0; i < a; i++)
    {
        printf("%d",x[i]);
    }
}