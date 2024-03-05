#include <stdio.h>
#include <stdlib.h>
void swap(int *a, int *b) {
    int temp= *a;
    *a= *b;
    *b= temp;
}
void selectionSort(int arr[], int n) {
    for(int i=0; i<n; i++) {
        int min=i;
        for(int j=i+1; j<n; j++) {
            if(arr[j]<arr[min]) {
                min=j;
            }
        }
            if(min!=i) {
                swap(&arr[i], &arr[min]);
        }
    }
}
void print_arr(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
int main() 
{
    int n;
    printf("Enter array size: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter array elements:\n");
    for(int i=0; i<n; i++) {
    scanf("%d", &arr[i]);
    }
    selectionSort(arr, n);
    printf( "The sorted array is : ");
    print_arr(arr, n);
    return 0;
}