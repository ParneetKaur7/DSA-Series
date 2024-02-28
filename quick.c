#include <stdio.h>
#include <stdlib.h>
void print_arr(int n, int arr[]) {
    printf("Enter array elements:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("\n");
}
void swap(int *a, int *b) {
    int temp= *a;
    *a= *b;
    *b=temp;
}
int partition(int l, int h, int arr[]) {
    int pivot= arr[l]; 
    int i=l+1;
    for (int j = l + 1; j <= h; j++) {
        if (arr[j] < pivot) {
            swap(&arr[i], &arr[j]); 
            i++;
        }
    }
    swap(&arr[l], &arr[i - 1]); 
    return i - 1;
}
void quicksort(int l, int h, int arr[]) {
     if(l<h) {
        int index= partition(l,h,arr);
        quicksort(l, index-1, arr);
        quicksort(index+1, h, arr);
     }
}
int main() 
{
    int n;
    printf("Enter array size: ");
    scanf("%d", &n);

    int arr[n];
    print_arr(n, arr);
    quicksort(0, n-1, arr);
    printf("sorted array:");
    for(int i=0; i<n; i++) {
    printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}