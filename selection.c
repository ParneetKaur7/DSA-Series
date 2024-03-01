#include <stdio.h>
#include <stdlib.h>
void swap(int *a, int *b) {
    int temp= *a;
    *a= *b;
    *b= temp;
}
void selectionSort(int arr[], int n) {
    
}
void print_arr(int n, int arr[]) {
    printf("Enter array elements:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("\n");
}
int main() 
{
    int n;
    printf("Enter array size: ");
    scanf("%d", &n);

    int arr[n];
    print_arr(n, arr);
}